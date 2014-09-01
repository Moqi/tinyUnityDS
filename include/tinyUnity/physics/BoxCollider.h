/*
 * BoxCollider.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef BOXCOLLIDER_H_
#define BOXCOLLIDER_H_

#include "Collider.h"
namespace tinyUnity
{
class BoxCollider : Collider {
	//AABB
	//OBB
public:
	BoxCollider();
	~BoxCollider();
};
}
#endif /* BOXCOLLIDER_H_ */
