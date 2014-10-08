/*
 * Object.h
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */

#ifndef OBJECT_H_
#define OBJECT_H_
#include "config.h"
namespace tinyUnity {

class Object {
public:
	Object();
	virtual ~Object();
	Object* retain();
	int release();

	//Return the size of the memory needed to serialize this object
	virtual int imageSize(){return sizeof(this);}

	/**Encode object in a way that it can be decoded.
	 \note nds is little endian, for binar use a binary stream adapter
	*/
	virtual char* serialize();

	void destroyImmediate();
	void destroy();

	//Decode into an existing object
	void virtual deserialize(char* c);

private:
	int referenceCount;
};

} /* namespace tinyUnity */
#endif /* OBJECT_H_ */
