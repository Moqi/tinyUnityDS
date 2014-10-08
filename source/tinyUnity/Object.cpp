/*
 * Object.cpp
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */

#include "Object.h"
//#define DEFERRED_RELEASE
namespace tinyUnity {

Object::Object()
{
	this->referenceCount=1;
	// TODO Auto-generated constructor stub

}

Object::~Object() {
	// TODO Auto-generated destructor stub
}

Object* Object::retain()
{
	this->referenceCount++;
	return this;
}

void Object::destroy()
{
#if TINY_UNITY_DEFFERED_RELEASE
	#error "Deferred release system not implemented, implement or set TINY_UNITY_DEFERRED_RELEASE to 0 in config.h"
#else
	destroyImmediate();
#endif
}

void Object::destroyImmediate()
{
	delete this;
}

int Object::release()
{
	this->referenceCount--;
	if(this->referenceCount <= 0)
	{
	destroy();
	}
	return this->referenceCount;
}


} /* namespace tinyUnity */
