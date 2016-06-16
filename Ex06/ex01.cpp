//
//  ex01.cpp
//  Ex06
//
//  Created by Ally McConnell on 6/16/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>

int ex01()
{
    //declare the object
    ofstream output;
    //opens a file
    output.open("Random.txt", ios::outlios::app);
    cout << "Create a text file: "<
    srand(time(0));
    
    //loop
    for(int i = 0; i<100; i++)
    {
        output <
    }
    output.close();
    //print message
    cout <<"Data appended" <
    system("pause");
    return 0;
}
