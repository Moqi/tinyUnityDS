/*
 * RenderMaster.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef RENDERMASTER_H_
#define RENDERMASTER_H_
#include "Renderer.h"
namespace tinyUnity {
class RenderMaster {
public:
	RenderMaster();
	virtual ~RenderMaster();
	unsigned short registerForRendering(Renderer* r);
private:
	Renderer* toRender;
	int rendererCount;
};
}
#endif /* RENDERMASTER_H_ */
