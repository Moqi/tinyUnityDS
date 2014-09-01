/*
 * Material.h
 *
 *  Created on: 2013-06-15
 *      Author: awiebe
 */

#ifndef MATERIAL_H_
#define MATERIAL_H_

/**
 * Abstract superclass for static and shader pipeline.
 */
 class Material {
public:
	Material();
	virtual ~Material();
	virtual void execute();
private:
};

#endif /* MATERIAL_H_ */
