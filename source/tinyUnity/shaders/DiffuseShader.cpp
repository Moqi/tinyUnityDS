/*
 * DiffuseShader.cpp
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#include "DiffuseShader.h"

namespace tinyUnity {

DiffuseShader::DiffuseShader() {
	// TODO Auto-generated constructor stub

}

DiffuseShader::~DiffuseShader() {
	// TODO Auto-generated destructor stub
}

//void DiffuseShader::compile()
//{
//
//}

void DiffuseShader::prepare()
{
	if(this->material->wasModified())
	{
		//
	}
}

} /* namespace tinyUnity */
