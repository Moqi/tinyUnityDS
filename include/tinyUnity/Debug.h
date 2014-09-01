/*
 * Debug.h
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */


#ifndef DEBUG_H_
#define DEBUG_H_

#include <iostream>
namespace tinyUnity {

class Debug {
public:
	void Log(char*,bool error);
	void AttachStream(std::ostream);
};

} /* namespace tinyUnity */
#endif /* DEBUG_H_ */
