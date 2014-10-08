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
	static void Log(char*s,bool error)
	{
		if(error)
		{
			out << "ERR";
		}
		out << s << std::endl;
	}
	static void AttachStream(std::ostream& o);
private:
	static std::ostream& out;
};

} /* namespace tinyUnity */
#endif /* DEBUG_H_ */
