/*
 * Octree.h
 *
 *  Created on: 2013-07-09
 *      Author: awiebe
 */

#ifndef OCTREE_H_
#define OCTREE_H_
#include "../Vector3.h"
namespace tinyUnity {

typedef enum OCTREE_TRAVESAL_STRATEGY
{
	YXZ,YZX,XYZ,XZY,ZXY,ZYX
};

template <class T>
class Octree
{
public:
	Octree<T>(Vector3 center);
	virtual ~Octree();
	void add(Vector3 point, T* data);
	T* query(Vector3 min, Vector3 max);

private:
	T* data;
	Vector3* center;
	Octree* topRight;
	Octree* topLeft;
	Octree* bottomLeft;
	Octree* bottomRight;
};

} /* namespace tinyUnity */
#endif /* OCTREE_H_ */
