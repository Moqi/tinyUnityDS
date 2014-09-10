/*
 * Screen.h
 *
 *  Created on: Sep 5, 2014
 *      Author: awiebe
 */

#ifndef SCREEN_H_
#define SCREEN_H_

namespace tinyUnity {

class Screen {
public:
	Screen();
	virtual ~Screen();
	const unsigned char width = 255;
	const unsigned char height = 191;
};

} /* namespace tinyUnity */

#endif /* SCREEN_H_ */
