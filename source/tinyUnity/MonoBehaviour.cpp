/*
 * MonoBehaviour.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#include "MonoBehaviour.h"

namespace tinyUnity {

MonoBehaviour::MonoBehaviour() {
	// TODO Auto-generated constructor stub

}

MonoBehaviour::~MonoBehaviour() {
	// TODO Auto-generated destructor stub
}

void MonoBehaviour::Enable()
{
	OnEnable();
}

void MonoBehaviour::Disable()
{
	OnDisable();
}

} /* namespace tinyUnity */
