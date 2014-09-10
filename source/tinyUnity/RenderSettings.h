/*
 * RenderSettings.h
 *
 *  Created on: Sep 7, 2014
 *      Author: awiebe
 */

#ifndef RENDERSETTINGS_H_
#define RENDERSETTINGS_H_
#include "Material.h"
namespace tinyUnity {

class RenderSettings {
public:
	RenderSettings();
	virtual ~RenderSettings();

	static bool fog;
	static float fogDensity;
	static Material* skybox;
	static rgb ambientLight;

};

} /* namespace tinyUnity */

#endif /* RENDERSETTINGS_H_ */
