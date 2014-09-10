/*
 * Material.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_
#include "Texture2D.h"
#include "Shader.h"
namespace tinyUnity{
class Shader;
/**
 * Abstract superclass for static and shader pipeline.
 */
 class Material {
public:
	Material();
	virtual ~Material();
	virtual void execute();
	inline bool wasModified(){return updated;}
protected:
	rgb* colors;
	Texture2D* textures;
	Shader* shader;
	//set to true when updating parameters.
	bool updated;

};
}

#endif /* MATERIAL_H_ */
