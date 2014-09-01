/*
 * Component.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef COMPONENT_H_
#define COMPONENT_H_

//#include "GameObject.h"
namespace tinyUnity{

class GameObject;
class Component {
public:
	Component();
	~Component();
	virtual void fixedUpdate();
	virtual void update();
	virtual void awake();
	virtual void onCollisionEnter();
	virtual void onCollisionExit();

	GameObject* getGameObject();

private:
	GameObject* gameObject;
};

}

#endif /* COMPONENT_H_ */
