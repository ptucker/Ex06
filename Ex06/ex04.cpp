//
//  ex04.cpp
//  Ex06
//
//  Created by Ally McConnell on 6/17/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include "CircleWithConstantMemberFunctions.hpp"
#include <iostream>
using namespace std;
#include <string>

class Circle
{
private:
    double radius;
public:
    Circle ()
    {
        radius = 1;
    }
    //constructor with arguements
    Circle (double newRadius)
    {
        radius = newRadius;
    }
    double getArea()
    {
        return radius * radius * 3.14159;
    }
    double getRadius()
    {
        return radius;
    }
    Circle subtract (Circle &secondCircle)
    {
        double r = radius-secondCircle.getRadius();
        return Circle(r);
    }
    int compareTo(Circle &secondCircle)
    {
        Circle temp = subtract(secondCircle);
    }
    if (temp.getRadius() < 0)
    {
        return -1;
        else  if(temp.getRadius() == 0)
        {
            return 0;
            else
                return 1;
        }
        friend bool operator<(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)<0);
        }
        friend bool operator<=(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)<=0);
        }
        friend bool operator>(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)>0);
        }
        friend bool operator>=(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)>=0);
        }
        friend bool operator==(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)==0);
        }
        friend bool operator!=(Circle c1, Circle c2)
        {
            return (c1.compareTo(c2)!=0);
        }
    }
};
    
    int ex04()
    {
        Circle c1(5.0);
        Circle c2(7.0);
        //Get two circles radius
        cout << "The area of the circle of radius" << c1.getRadius() << "is" << c1.getArea() << endl;
        cout << "The area of the circle of radius" << c2.getRadius() << "is" << c2.getArea() << endl;
        //check if circle 1 is greater than circle 2
        cout << "c1" << ">" << "c2 is: " << ((c1>c2)?"True":"False") << endl;
        //check if circle 1 is greater than or equal to circle 2
        cout << "c1" << ">=" << "c2 is: " << ((c1>=c2)?"True":"False") << endl;
        //check circle 1 is less than circle 2
        cout << "c1" << "<" << "c2 is: " << ((c1<c2)?"True":"False") << endl;
        //check circle 1 is less than or equal to circle 2
        cout << "c1" << "<=" << "c1 is: " << ((c1<=c2)?"True":"False") << endl;
        //check circle 1 is equal to circle 2
        cout << "c1" << "==" << "c1 is: " << ((c1==c2)?"True":"False") << endl;
        //check circle 1 is not equal to circle 2
        cout << "c1" << "!=" << "c2 is: " << ((c1!=c2)?"True":"False") << endl;
        
        system ("pause");
        return 0;
    
    }
