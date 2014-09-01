/*
 * Ray.h
 *
 *  Created on: Aug 31, 2014
 *      Author: awiebe
 */

#ifndef RAY_H_
#define RAY_H_
#include "../Vector3.h"
namespace tinyUnity {

class Ray {
public:
	Ray();
	virtual ~Ray();
	Vector3* origin;
	Vector3* direction;
	Vector3* point(float distance);
};

} /* namespace tinyUnity */

#endif /* RAY_H_ */
