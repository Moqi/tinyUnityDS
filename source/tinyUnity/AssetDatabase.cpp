/*
 * Object.cpp
 *
 *  Created on: 2013-06-21
 *      Author: awiebe
 */

#include <stdio.h>
//#define DEFERRED_RELEASE
namespace tinyUnity {

namespace AssetDatabase
{
	bool usesToon,usesShiny;
	typedef struct heapNode { unsigned short id; unsigned int offset; unsigned int length;} heapNode;
	struct db
	{
	heapNode* indexHeap;
	};
	static db DB;
	static char* dbPath= "assetFile.db";
	static FILE* assetFile = fopen(dbPath,"r");
	void* loadAsset(int id)
	{
		int i =1;
		heapNode* indexHeap = DB.indexHeap;
		heapNode n = indexHeap[0];
		i++;

		while(id != n.id)
		{
			int left = 2*i;
			int right = 2*i+1;
			heapNode l = indexHeap[left];
			if(l.id >= id)
			{
				i = left;
				n = indexHeap[i];
			}else
			{
				i = right;
				n = indexHeap[i];
			}
		}
		char* buffer = new char[n.length];
		fseek(assetFile, n.offset, 0);
		unsigned int read = fread(buffer,n.length,1,assetFile);
		if(read != n.length)
		{
			delete buffer;
			return nullptr;
		}
		return buffer;
	}
}

} /* namespace tinyUnity */
