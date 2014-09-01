/*
 * StaticMaterial.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef STATICMATERIAL_H_
#define STATICMATERIAL_H_

#include "Material.h"
#include "Texture2D.h"
namespace tinyUnity {
class StaticMaterial: public Material
{
public:
	StaticMaterial();
	virtual ~StaticMaterial();
private:
	short specular;
	short tint;
	Texture2D* texture;

};
}
#endif /* STATICMATERIAL_H_ */
