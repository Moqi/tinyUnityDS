/*
 * SubMesh.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef SUBMESH_H_
#define SUBMESH_H_
#include "Material.h"
#include "Mesh.h"
namespace tinyUnity
{
class SubMesh
{
public:
	template <typename T,typename N>
	SubMesh(T* triangles, N count);
	virtual ~SubMesh();

	void draw();
private:
	Mesh* parent;
	///This submesh will draw triangles with its assigned material, this array length should be divisible by 3
	int* triangleIndicies;
	int indiciesLength;
	Material* material;


};
}
#endif /* SUBMESH_H_ */
