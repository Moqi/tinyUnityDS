/*
 * Rigidbody.h
 *
 *  Created on: 2013-07-12
 *      Author: awiebe
 */

#ifndef RIGIDBODY_H_
#define RIGIDBODY_H_
#include "../types.h"
#include "../Component.h"
#include "../Vector3.h"

typedef enum
		{
		GRAVATIC  = 1,
		KINEMATIC = 1<<2,
		SLEEPING = 1<<3
		} RBFlags;
namespace tinyUnity {

//class Component;

class Rigidbody : Component
{
public:
	Rigidbody();
		virtual ~Rigidbody();
		void fixedUpdate();
	private:


		Vector3* velocity;
		Vector3* acceleration;
		Vector3* angularVelocity;
		Vector3* angularAcceleration;
		Vector3* mass;
		pointf  sleepVelocity;
		RBFlags flags;
};

} /* namespace tinyUnity */
#endif /* RIGIDBODY_H_ */
