// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Resource.h"
#include "ListAndVector.h"
#include <vector>
#include <list>
#include <stdexcept>
#include <iostream>
#include "maximum.h"

using std::vector;
using std::list;
using std::cout;
using std::cin;
using std::endl;

int containers()
{
    vector<int> numbers{ 0,1,2 };
    numbers.push_back(-2);
    numbers[0] = 3;
    int num = numbers[2];

    for (int i : numbers)
    {
        cout << i << ' ';
    }
    cout << '\n';
    Resource r("local");
    {
        cout << "-------------------" << '\n';
        vector<Resource> resources;
        resources.push_back(r);
        cout << "-------------------" << '\n';
        resources.push_back(Resource("first"));
        cout << "-------------------" << '\n';
        resources.push_back(Resource("second"));
        cout << "-------------------" << '\n';
    }

    cout << "Hello World!\n";

    int int1, int2, int3;

    cin >> int1 >> int2 >> int3;

    cout << "Maximum is " << maximum(int1, int2, int3) << endl;

    return 0;
}

