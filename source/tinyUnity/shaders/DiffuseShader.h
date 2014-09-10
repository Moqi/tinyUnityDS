/*
 * DiffuseShader.h
 *
 *  Created on: Sep 1, 2014
 *      Author: awiebe
 */

#ifndef DIFFUSESHADER_H_
#define DIFFUSESHADER_H_
#include "StaticShader.h"
namespace tinyUnity {

class DiffuseShader: public StaticShader {
public:
	DiffuseShader();
	virtual ~DiffuseShader();
	//void compile();
	void prepare();
};

} /* namespace tinyUnity */

#endif /* DIFFUSESHADER_H_ */
