//
//  ex02.cpp
//  Ex06
//
//  Created by Ally McConnell on 6/16/16.
//  Copyright © 2016 Ally McConnell. All rights reserved.
//

#include <iostream>
using namepace std;
#include <string>

int ex02()
{
    ifstream input;
    
    input.open("Invite.txt");
    cout << "Counting characters: " <
    if(input.fail())
    {
        cout << "File does not exist" << endl;
        cout << "Exit program" << endl;
        return 0;
    }
    int count = 0;
    while (!input.eof())
    {
        intput.get();
        count++;
    }
    count--;
    input.close();
    cout << "Number of character in the file: " << count << endl;
    system ("pause");
    return 0;
    
}
