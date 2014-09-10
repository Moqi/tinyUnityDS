/*
 * Scheduler.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef SCHEDULER_H_
#define SCHEDULER_H_
#include <stdint.h>
#include "Component.h"
#include <nds.h>
namespace tinyUnity {

class Scheduler {

	/**
	 * Task and execution time, actionID is resolved into routine by Monobehaviour,
	 * because C++ doesn't understand target-action, and command isn't good enough.
	 * @note To save space required to store state, a task is dead if its target is null.
	 */
	struct Task
	{
		unsigned long executeAt;
		Component* target;
		int actionID;
	};
public:
	static const unsigned int MAX_QUEUED_TASKS = 128;
	/**
	 * Allocate a time (0-3)
	 * @warning Do not use 3 if using DSWIFI
	 * @warning Do not use 0 if using maxmod.
	 */
	static void Start(int timer =2, const float resolutionSeconds=0.01);
private:
	static unsigned char resolutionMillis;
	static bool busy;
    static uint64_t nowMillis ;
    static unsigned short capacity;
    static unsigned short poolMax;
    static void timerCallback();
    static long getPoolSpace();
    static bool isDeadTask(Task* t){ return t->target == nullptr;}
    static bool enqueTask(Task*t);
    static void schedule(Component* target, int actionID, float delay);
    /**
     * A sorted list of tasks that are scheduled
     * \todo make it an AVL tree if too slow.
     */
    static Task** taskQueue;

};

} /* namespace tinyUnity */

#endif /* SCHEDULER_H_ */
