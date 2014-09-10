/*
 * Shader.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#include "Shader.h"

namespace tinyUnity {

Shader::Shader() {
	// TODO Auto-generated constructor stub

}

Shader::~Shader() {
	// TODO Auto-generated destructor stub
}
void Shader::execute()
{
	prepare();

	//requires permissive
	glCallList((u32*)this->programImage);
}
} /* namespace tinyUnity */
