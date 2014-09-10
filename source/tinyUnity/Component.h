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

	GameObject* getGameObject();

private:
	GameObject* gameObject;
	virtual void runScheduledRoutine(int withActionID);
};

}

#endif /* COMPONENT_H_ */
