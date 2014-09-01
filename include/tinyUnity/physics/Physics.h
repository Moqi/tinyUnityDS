/*
 * Physics.h
 *
 *  Created on: Aug 30, 2014
 *      Author: awiebe
 */

#ifndef PHYSICS_H_
#define PHYSICS_H_
#include "../Vector3.h"
#include "BoxCollider.h"
#include "SphereCollider.h"
#include "Ray.h"
namespace tinyUnity {

class Physics {
public:
	//Physics();
	//virtual ~Physics();
	static void initWithLayers(int count = 8);
	static bool Raycast(Vector3* origin, Vector3* direction, float distance,unsigned long layerMask);
	static bool Linecast(Vector3* a,Vector3* b);
private:
	static bool checkIntersection(Ray* r, BoxCollider* b);
	static bool checkIntersection(BoxCollider* r, BoxCollider b);
	static bool checkIntersection(BoxCollider* r, SphereCollider b);

	static bool addCollider(Collider* c, int layer);




};

} /* namespace tinyUnity */

#endif /* PHYSICS_H_ */
