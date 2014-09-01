/*
 * Texture.h
 *
 *  Created on: 2013-07-11
 *      Author: awiebe
 */

#ifndef TEXTURE_H_
#define TEXTURE_H_

namespace tinyUnity {

class Texture {
public:
	Texture();
//	Texture(TextureDecodeStream* in);
	Texture(unsigned char* byte);
	virtual ~Texture();
};

} /* namespace tinyUnity */
#endif /* TEXTURE_H_ */
