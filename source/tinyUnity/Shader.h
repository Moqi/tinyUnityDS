/*
 * Shader.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef SHADER_H_
#define SHADER_H_
#include <nds.h>
#include "Material.h"

namespace tinyUnity {
class Material;
/**
 * Describes a packed instruction sequece ready for graphics hardware.
 */

class Shader {
public:
	Shader();
	virtual ~Shader();

	///construct the shader
	virtual void compile();
	///Alter the shader by reading material parameters.
	virtual void prepare();
	///Run instructions in immediate mode, the nintendo DS does not have a concept of program on the hardware
	void execute();

	//Encapsulates shader arguments.
	Material* material;

protected:
	/**
	 * A compiled packed set of instructions beginning with length as described in
	 * /nds/arm9/videogl.h
	 * @see glCallList (const u32 *list)
	 */
	unsigned char* programImage;



};

} /* namespace tinyUnity */

#endif /* SHADER_H_ */
