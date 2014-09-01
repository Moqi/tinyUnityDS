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
	virtual ~Vector3();
	float Distance(Vector3 v);
	pointf x,y,z;
};
}
#endif /* VECTOR3_H_ */
