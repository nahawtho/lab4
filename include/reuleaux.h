/*
 * Copyright (C) 2018 David C. Harrison. All right reserved.
 *
 * You may not use, distribute, publish, or modify this code without 
 * the express written permission of the copyright holder.
 */

#ifndef _REULEAUX_H_
#define _REULEAUX_H_

#include <vector>

#include "containable.h"
#include "point.h"

class ReuleauxTriangle : public Containable {
    public:
        // do not change this constructor
        ReuleauxTriangle(const Point vertices[3]);
	
        // do not modify or remove this accessor
        std::vector<Point> vertices();
};

class ReuleauxTetrahedron: public Containable3D {
    public:
        // do not change this constructor
        ReuleauxTetrahedron(const Point3D vertices[4]);
};

#endif
