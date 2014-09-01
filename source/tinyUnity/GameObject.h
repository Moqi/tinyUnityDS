/*
 * GameObject.h
 *
 *  Created on: 2013-07-09
 *      Author: awiebe
 */

#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_

#include "Object.h"
#include "physics/Rigidbody.h"
//#include "Renderer.h"
//#include "Transform.h"
//#include "AudioSource.h"
//#include "Collider.h"

namespace tinyUnity {

class GameObject: public tinyUnity::Object {
public:
	GameObject();
	virtual ~GameObject();

	/**Type must be checked at runtime, because otherwise cyclical includes occur*/
	//template <class T> T* getComponent();
private:
	//Rigidbody* rigidbody;
//	Renderer* renderer;
//	Transform* transform;
//	AudioSource* audioSource;
//	AudioListener* AudioListener;
//	Collider* collider;
	//void* components;
	//unsigned char componentCount;

};

} /* namespace tinyUnity */



#endif /* GAMEOBJECT_H_ */
