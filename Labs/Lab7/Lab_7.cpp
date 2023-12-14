//Lab_7.cpp
/***
* CSE 2010 Fall 2023
* Lab #7
* Lizbeth Jimenez 007670332
* 13 December 2023
* 
* Learn generic programming via templates. Expand previous members to classes to have memebers that hold and process data types. 
*
* The most challenging was trying to solve the extra credit. My solution was to hope for the best. 
*
*
***/
#include <iostream>
#include "ArrayVec.h"
#include "DisplayArr.h"
using namespace std;

int main()
{
    // initialize arr
    const int CAPACITY = 10;
    double test_arr[CAPACITY];

    //initialize ArrayVec and DisplayArr
    string data_type = "double";
    DisplayArr<double> disp = DisplayArr<double>(data_type);
    ArrayVec<double> av = ArrayVec<double>();

    // populate with values
    int range = 15;
    int num_elem = 10;
    av.randGenArr(test_arr, num_elem, range);

    // display contents
    int test_arr_size = av.getSize(test_arr, CAPACITY);
    cout << "Array Elements\n";
    disp.printArray(test_arr, test_arr_size);
    cout << "Array Memsize\n";
    disp.printMetaArray(test_arr, test_arr_size);
}

struct dataTypes
{
    int array2;
    int vector2;
    float array3;
    float vector3;
    double array4;
    double vector4;
};
dataTypes dataTypes1;
