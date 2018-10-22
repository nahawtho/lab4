/*
 * Copyright (C) 2018 David C. Harrison. All right reserved.
 *
 * You may not use, distribute, publish, or modify this code without 
 * the express written permission of the copyright holder.
 */

#ifndef _POLYGON_H_
#define _POLYGON_H_

#include <vector>

#include "containable.h"
#include "point.h"

class ConvexPolygon : public Containable {
    public:
	std::vector<Point> vertices_;
        // do not modify or remove this constructor
        ConvexPolygon(std::vector<Point> vertices);

	// do not modify or remove this accessor
        std::vector<Point> vertices();

	virtual bool containedBy(Circle &circle) = 0;
        virtual bool containedBy(ConvexPolygon &polygon) = 0;
        virtual bool containedBy(RegularConvexPolygon &polygon) = 0;
        virtual bool containedBy(ReuleauxTriangle &rt) = 0;
};

class RegularConvexPolygon : public ConvexPolygon {
    public:
	std::vector<Point> vertices_;
        // do not modify or remove this constructor
        RegularConvexPolygon(std::vector<Point> vertices);

	virtual bool containedBy(Cube &cube) = 0;
        virtual bool containedBy(Sphere &sphere) = 0;
        virtual bool containedBy(ReuleauxTetrahedron &rt) = 0;
};

#endif
