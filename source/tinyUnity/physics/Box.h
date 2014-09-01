/*
 * Box.h
 *
 *  Created on: 2013-07-09
 *      Author: awiebe
 */

#ifndef BOX_H_
#define BOX_H_
#include "../Vector3.h"
namespace tinyUnity {

class Box {
public:
	Box();
	virtual ~Box();
public:
	Vector3 min,max;
};

} /* namespace tinyUnity */
#endif /* BOX_H_ */
