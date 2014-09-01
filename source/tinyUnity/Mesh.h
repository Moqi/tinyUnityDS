/*
 * Mesh.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef MESH_H_
#define MESH_H_
#include "types.h"
//#include "SubMesh.h"
//template <typename T>
namespace tinyUnity
{
class SubMesh;

typedef int32* DisplayList;
class Mesh {
public:

	Mesh();
	virtual ~Mesh();
	Mesh(DisplayList list);
	Mesh(SubMesh* submeshes);
private:
	SubMesh* pieces;
	//T* vertecies;
	pointf* vertecies;

};
}

#endif /* MESH_H_ */
