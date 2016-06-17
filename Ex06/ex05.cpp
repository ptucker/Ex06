//
//  ex05.cpp
//  Ex06
//
//  Created by Ally McConnell on 6/17/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

class Comp
{
public:
    double real;
    double img;
public:
    Comp();
    void add(Comp, Comp);
    void subtract(Comp, Comp);
    void multiply(Comp, Comp);
    void division(Comp, Comp);
};

//contrsuctor used to intialize
Comp::Comp()
{
    real = img = 0;
}

void Comp::add(Comp op1, Comp op2)
{
    real = (op1.real*op2.real+op1.img*op2.img)/(op2.real*op2.real+op2.img*op2.img);
    img = (op1.img*op2.real-op1.real*0-2.img)/(op2.real*op2.real+op2.img*op2.img);
    cout << "The division of two complex number = " << real << "+" << img << "i" << endl;
}

int ex05()
{
    Comp operand1, operand2, result;
    cout << "Enter the first complex number: " << endl;
    cin >> operand1.real>> operand1.img;
    cout << "Enter the second complex numver: " << endl;
    cin >> operand1.real >> operand2.img;
    
    result.add(operand1, operand2);
    result.subtract(operand1,operand2);
    result.multiply(operand1, operand2);
    result.division(operand1, operand2);
    return 0;
}
