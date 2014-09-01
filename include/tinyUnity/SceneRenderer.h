/*
 * SceneRenderer.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef SCENERENDERER_H_
#define SCENERENDERER_H_
#include "Renderer.h"
namespace tinyUnity
{
class SceneRenderer
{
public:
	static void enqueue(Renderer* r);
	static void dequeue(Renderer* r);
	static void render();
//private:
};
}

#endif /* SCENERENDERER_H_ */
