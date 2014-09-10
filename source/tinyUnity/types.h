/*
 * types.h
 *
 *  Created on: 2013-06-20
 *      Author: awiebe
 */

#ifndef TYPES_H_
#define TYPES_H_
#include <nds.h>

namespace tinyUnity
{
//Memory Management
typedef unsigned short refCount;

//3D
///A 3D point in space, used in physics and drawing
typedef v16 pointf;

///A vector of a matrix
typedef v10 matrixf;

//Vecto unit, used for transformation and rotation
typedef u32 vectorf;

//A depth buffer unit
typedef fixed12d3 depthf;

//typedef rgb rgb;


}

#endif /* TYPES_H_ */
