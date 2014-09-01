/*
 * AudioSource.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef AUDIOSOURCE_H_
#define AUDIOSOURCE_H_

#include "AudioClip.h"
#include "../Component.h"
class AudioSource {
public:
	AudioSource();
	~AudioSource();
private:
	AudioClip* clip;
};

#endif /* AUDIOSOURCE_H_ */
