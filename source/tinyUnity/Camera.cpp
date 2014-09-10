/*
 * Camera.cpp
 *
 *  Created on: Sep 4, 2014
 *      Author: awiebe
 */

#include "Camera.h"

namespace tinyUnity {

Camera::Camera() {
	// TODO Auto-generated constructor stub

}

Camera::~Camera() {
	// TODO Auto-generated destructor stub
}

void Camera::render()
{
	this->getGameObject()->OnPreRender();
	renderBackground();
	Transform* t = this->getGameObject()->transform;
	Vector3* pos = t->getPosition();
	Vector3* rot = t->getRotation();
	glTranslatef32(pos->x,pos->y,pos->z);
	glRotatef32(rot->x,1,0,0);
	glRotatef32(rot->y,0,1,0);
	glRotatef32(rot->x,0,0,1);

	this->getGameObject()->OnPostRender();
}

void Camera::renderBackground()
{
	switch(this->clearFlags)
	{
	case Skybox:
		//drawSkybox
		for(int i=0;i<6;i++)
		{
			glLoadIdentity();
			//Texture2D* t = RenderSettings::skybox->textures[i];

			//drawQuad
			glBegin(GL_QUAD);

			for(int j=0;j<4;j++)
			{
					unsigned char idx = Camera::SKYBOX_QUADS_INDEX[i][j];
					const float* vert =Camera::SKYBOX_QUADS_VERT[idx];
					glVertex3f(vert[0],vert[1],vert[2]);
			}

		}
		break;
	case Depth:
		break;
	case SolidColor:
		glFlush(0);
		break;
	case Nothing:
	default:
		break;// do nothing

	}
}

} /* namespace tinyUnity */
