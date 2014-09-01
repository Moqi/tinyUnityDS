/*
 * Transform.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */
#include "Vector3.h"
#include "physics/Collider.h"
#ifndef TRANSFORM_H_
#define TRANSFORM_H_
namespace tinyUnity {
class Transform
{
public:
	Transform();
	virtual ~Transform();
	void Translate(Vector3 v);
	void Rotate(Vector3 v);
	void Scale(Vector3 v);

	/**
	 * Project a Vector3 from local space to world space.
	 */
	Vector3* transformPoint(Vector3* v);
	/**
	 * Project a world space Vector3 to local space.
	 */
	Vector3* inverseTransformPoint(Vector3* v);

	Collider* getCollider();
	bool needsRedraw();

	const Vector3* getPosition() const {
		return position;
	}

	void setPosition(Vector3* position) {
		this->position = position;
	}

	const Vector3* getRotation() const {
		return rotation;
	}

	void setRotation(Vector3* rotation) {
		this->rotation = rotation;
	}

	const Vector3* getScale() const {
		return scale;
	}

	void setScale(Vector3* scale) {
		this->scale = scale;
	}

private:
	Vector3* position;

	//eular for now
	Vector3* rotation;
	Vector3* scale;
	Collider* collider;
	Transform* children;

	unsigned char flags;
	unsigned short glMatrixID;

};
}

#endif /* TRANSFORM_H_ */
