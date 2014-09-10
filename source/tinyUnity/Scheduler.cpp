/*
 * Scheduler.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#include "Scheduler.h"

namespace tinyUnity {


 void Scheduler::Start(int timer =2, const float resolutionSeconds=0.01)
{
	nowMillis = 0;
	resolutionMillis = resolutionSeconds *100;
	busy = false;
	timerStart(0, ClockDivider_256 , TIMER_FREQ_256(resolutionSeconds), timerCallback);
	taskQueue = new Task*[MAX_QUEUED_TASKS];
	capacity = MAX_QUEUED_TASKS;
	poolMax =0;

	for(int i =0; i< capacity; i++)
	{
		taskQueue[i] = nullptr;
	}
}

void Scheduler::timerCallback()
{
	busy = true;
	nowMillis += resolutionMillis;
	for(int i=0; i<poolMax;i++)
	{

		if( i == poolMax)
		{
			i--;
		}
	}
	//evaluate priority
	//make calls
	busy = false;
}

long Scheduler::getPoolSpace()
{
	bool foundSpace=false;
	long i=0;
	for(i =0;i<capacity;i++)
	{
		Task* t=  taskQueue[i];
		if(t == nullptr)
		{
			foundSpace = true;
			break;
		}

		if(isDeadTask(t))
		{
			foundSpace=true;
			delete t;
			//guard
			taskQueue[i] = nullptr;
		}
	}

	if(poolMax < i)
	{
		i= poolMax;
	}

	if(!foundSpace)
	return -1;

	return i;
}

void Scheduler::schedule(Component* target, int actionID, float delay)
{
	 int delayMillis = delay*100;
	 Scheduler::Task* task = new Task{ nowMillis+delayMillis,target,actionID};
	 int i = getPoolSpace();
	 if(i == -1)
	 {
		 return false;
	 }
	 taskQueue[i] = task;
}

}/* namespace tinyUnity */
