p//
//  ex04.hpp
//  Ex06
//
//  Created by Ally McConnell on 6/17/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#ifndef ex04_hpp
#define ex04_hpp

#include <isostream>
using namespace std;
#include <string>

class Circle
{
public:
    Circle();
    Circle(double);
    double getArea();
    double getArea() const;
    double getRadius() const;
    void setRadius(double);
    static int getNumberOfObject();
private:
    double radius;
    static int getNumberOfObject;
};

#endif
