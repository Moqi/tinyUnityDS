/*
 * Application.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef APPLICATION_H_
#define APPLICATION_H_

namespace tinyUnity {

class Application {
public:
	static void LoadLevel(int id);
	static void LoadLevel(char* name);
};

} /* namespace tinyUnity */

#endif /* APPLICATION_H_ */
