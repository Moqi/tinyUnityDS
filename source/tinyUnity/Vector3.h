/*
 * Vector3.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */
#include"types.h"
#include <nds.h>

#ifndef VECTOR3_H_
#define VECTOR3_H_
namespace tinyUnity {
class Vector3 {
public:
	Vector3();

	///Use float, may be converted internally.
	Vector3(float x,float y,float z);

	///Use native vectr type
	Vector3(vectorf x,vectorf y,vectorf z);
	virtual ~Vector3();
	float Distance(Vector3 v);
	vectorf x,y,z;
};
}
#endif /* VECTOR3_H_ */
