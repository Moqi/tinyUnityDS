/*
 * SubMesh.cpp
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#include "SubMesh.h"
namespace tinyUnity{
template <typename T,typename N>
SubMesh::SubMesh(T* a_triangleIndicies,N count)
{
	this->triangleIndicies = a_triangleIndicies;
	indiciesLength = count;
	// TODO Auto-generated constructor stub

}

SubMesh::~SubMesh() {
	// TODO Auto-generated destructor stub
}

void tinyUnity::SubMesh::draw()
{
	this->material->execute();

	for(int i=0; i<this->indiciesLength;i++)
	{
		//glVertex()
	}
}
}
