/*
 * Vector3.cpp
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#include "Vector3.h"
#include <nds.h>
#include <nds/arm9/videoGL.h>

namespace tinyUnity{
Vector3::Vector3()
{
	x,y,z = 0;
	// TODO Auto-generated constructor stub

}

Vector3::~Vector3() {
	// TODO Auto-generated destructor stub
}

float Vector3::Distance(Vector3 v)
{
	return f32tofloat(sqrtf32(v.x*v.x +v.y*v.y +v.z*v.z));
}
}
