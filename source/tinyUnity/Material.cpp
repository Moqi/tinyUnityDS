/*
 * Material.cpp
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#include "Material.h"
namespace tinyUnity{
Material::Material() {
	// TODO Auto-generated constructor stub

}

Material::~Material() {
	// TODO Auto-generated destructor stub
}

void Material::execute()
{
	shader->material = this;

	if(updated)
	shader->prepare();

	shader->execute();
}
}

