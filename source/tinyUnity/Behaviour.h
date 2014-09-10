/*
 * Behaviour.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef BEHAVIOUR_H_
#define BEHAVIOUR_H_
#include "Component.h"
namespace tinyUnity {

class Behaviour: public Component {
public:

	virtual void Enable();
	virtual void Disable();
};

} /* namespace tinyUnity */

#endif /* BEHAVIOUR_H_ */
