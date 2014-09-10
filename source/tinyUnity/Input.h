/*
 * Input.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef INPUT_H_
#define INPUT_H_
#include <nds.h>
namespace tinyUnity {

class Input {
	typedef KEYPAD_BITS Axis;
	float getAxis(Axis);
};

} /* namespace tinyUnity */

#endif /* INPUT_H_ */
