/*
 * Collider.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef COLLIDER_H_
#define COLLIDER_H_
//#include "../Object.h"
#include "../Command.h"
#include "../Component.h"
#include <nds.h>

namespace tinyUnity{

class Collider : Component {
public:
	Collider();
	~Collider();

	/**
	 * Objects wanting to be notified of a collision between this collider an a rigidbody must register.
	 */
	//virtual void registerForCollisionNotification(Command collide, bool collisionInfo);
	//virtual void registerForTriggerNotification(Command entry,Command exit);

private:
	bool isTrigger;
};
}

#endif /* COLLIDER_H_ */
