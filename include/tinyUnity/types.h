/*
 * types.h
 *
 *  Created on: 2013-06-20
 *      Author: awiebe
 */

#ifndef TYPES_H_
#define TYPES_H_
#include <nds/arm9/videoGL.h>

namespace tinyUnity
{
//Memory Management
typedef unsigned short refCount;

//3D
///A 3D point in space, used in physics and drawing
typedef v16 pointf;

///A vectory of a matrix
typedef v10 matrixf;

//A depth buffer unit
typedef fixed12d3 depthf;

//An rgb color  struct of the form struct{T r,g,b};
typedef rgb rgb;


}

#endif /* TYPES_H_ */
