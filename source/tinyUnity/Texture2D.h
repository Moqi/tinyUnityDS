/*
 * Texture2D.h
 *
 *  Created on: 2013-07-11
 *      Author: awiebe
 */

#ifndef TEXTURE2D_H_
#define TEXTURE2D_H_
#include <nds.h>
namespace tinyUnity {

class Texture2D
{
	//glGenTextures(1, &texture[0]);
	//glBindTexture(0, texture[0]);
	//glTexImage2D(0, 0, GL_RGB, TEXTURE_SIZE_128 , TEXTURE_SIZE_128, 0, TEXGEN_TEXCOORD, pcx.image.data8);
//	videoSetMode(MODE_0_3D);
//	vramSetBankA(VRAM_A_TEXTURE);
public:
	Texture2D();
	virtual ~Texture2D();

	//commit texture changes to hardware
	void commit();
private:
	GL_TEXTURE_SIZE_ENUM width;
	GL_TEXTURE_SIZE_ENUM height;
	GL_TEXTURE_TYPE_ENUM backingType;
	//TextureFormat format;
	//rgb mode;
	bool flipx;
		bool flipy;
		bool	repeatx;
		bool	repeaty;
};

} /* namespace tinyUnity */
#endif /* TEXTURE2D_H_ */
