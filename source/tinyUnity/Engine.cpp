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

int Object::release()
{
	this->referenceCount--;
	if(this->referenceCount == 0)
	{
	#ifdef DEFERRED_RELEASE
	#error "Deferred release system not implemented"
	#else
		this->~Object();
	#endif
	}
	return this->referenceCount;
}

} /* namespace tinyUnity */
