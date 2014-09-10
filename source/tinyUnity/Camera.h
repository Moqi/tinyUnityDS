/*
 * Camera.h
 *
 *  Created on: Sep 4, 2014
 *      Author: awiebe
 */

#ifndef CAMERA_H_
#define CAMERA_H_
#include <nds.h>
#include "Component.h"
#include "Transform.h"
#include "GameObject.h"
#include "Material.h"

namespace tinyUnity {
enum CameraClearFlags
{

	Skybox,	//Clear with the skybox.
	SolidColor,	//Clear with a background color.
	Depth,	//Clear only the depth buffer.
	Nothing,	//Don't clear anything., 2D layer will be visible
	NDS_COLOR_DEPTH_BITMAP///@see http://problemkaputt.de/gbatek.htm#ds3drearplane
};

struct Rect8
{
	u8 x,y,xSize,ySize;
};
class Camera : Component
{
public:
	Camera();
	virtual ~Camera();
	void render();

	static Camera* main;

	bool orthographic;
	CameraClearFlags clearFlags = SolidColor;
	rgb clearColor;

	void setFieldOfView(float degrees);
	void setBackgroundColor(float r, float g, float b);
	void setBackgroundColor(rgb nativeRGB);
	void resetAspect();
	void setAspectRatio();
private:
	friend class Material;
	static const unsigned char SKYBOX_QUADS_INDEX [6][4] =
	{
			{1,2,3,4},{5,6,2,1},{8,5,6,7},{4,8,7,3},{1,5,4,8},{2,6,7,3}
	};
	static const float SKYBOX_QUADS_VERT [8][3]=
	{
			{1,-1,1},{1,1,1},{-1,1,1},{-1,-1,1},
			{1,-1,-1},{1,1,-1},{-1,1,-1},{-1,-1,-1}
	};
	rgb backgroundColor;
	float aspectRatio;

	void renderBackground();
	//nearclip
	//farclip
	//glOrtho()

	/*static void gluPerspective	(	float 	fovy,
	float 	aspect,
	float 	zNear,
	float 	zFar
	)*/
};

} /* namespace tinyUnity */

#endif /* CAMERA_H_ */
