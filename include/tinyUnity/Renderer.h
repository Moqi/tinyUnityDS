/*
 * Renderer.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef RENDERER_H_
#define RENDERER_H_
#include "Renderer.h"
#include "Transform.h"
namespace tinyUnity {
class Renderer {
public:
	Renderer();
	virtual ~Renderer();
	bool needsRedraw();
private:
	Transform* transform;
};
}

#endif /* RENDERER_H_ */
