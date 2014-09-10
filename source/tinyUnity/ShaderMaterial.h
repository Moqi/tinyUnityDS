/*
 * ShaderMaterial.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef SHADERMATERIAL_H_
#define SHADERMATERIAL_H_

#include "Material.h"
namespace tinyUnity {
/**
 * Describes a material that uses a packed shader
 */
class ShaderMaterial: public Material {
public:
	ShaderMaterial();
	virtual ~ShaderMaterial();
	virtual void execute();
};
}

#endif /* SHADERMATERIAL_H_ */
