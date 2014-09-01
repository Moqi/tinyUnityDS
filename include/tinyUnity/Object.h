/*
 * Object.h
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */

#ifndef OBJECT_H_
#define OBJECT_H_

namespace tinyUnity {

class Object {
public:
	Object();
	virtual ~Object();
	Object* retain();
	int release();

private:
	int referenceCount;
};

} /* namespace tinyUnity */
#endif /* OBJECT_H_ */
