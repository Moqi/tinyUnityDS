/*
 * MonoBehaviour.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef MONOBEHAVIOUR_H_
#define MONOBEHAVIOUR_H_

#include "Behaviour.h"

namespace tinyUnity {

/**
 * Not actually using mono, that would be absurd.
 * Subclass to add routines to the game loop.
 */
class MonoBehaviour: public Behaviour {
public:
	MonoBehaviour();
	virtual ~MonoBehaviour();

	virtual void fixedUpdate();
	virtual void update();
	virtual void awake();
	virtual void onCollisionEnter();
	virtual void onCollisionExit();
	virtual void OnEnable();
	virtual void OnDisable();

	void Enable();
	void Disable();

	/**
	 * Invoke a repeating method.
	 * @pre Insure a timer is assigned to the Engine.Scheduler
	 */
	void InvokeRepeating(void* routine,float delaySeconds,float intervalSeconds);
	void Invoke(void* routine,float delay);

private:

};

} /* namespace tinyUnity */

#endif /* MONOBEHAVIOUR_H_ */
