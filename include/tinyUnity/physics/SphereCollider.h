/*
 * SphereCollider.h
 *
 *  Created on: Aug 31, 2014
 *      Author: awiebe
 */

#ifndef SPHERECOLLIDER_H_
#define SPHERECOLLIDER_H_

#include "Collider.h"

namespace tinyUnity {

class SphereCollider: public Collider {
public:
	SphereCollider();
	virtual ~SphereCollider();
};

} /* namespace tinyUnity */

#endif /* SPHERECOLLIDER_H_ */
