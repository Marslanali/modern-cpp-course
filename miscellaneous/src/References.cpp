//
// Created by arslanali on 2/3/20.
//

#include <iostream>

void Increment ( int& value){

    value++;
}


int main (int argc, char** argv){


    int a = 5;
    /*int& ref = a;

    ref = 2;

    std::cout<<a<<std::endl;

*/

    Increment(a);
    std::cout<<a<<std::endl;

    int x = 5;
    int y = 10;

    int* ref = &x;
    *ref = 2;
    ref = &y;
    *ref = 1;

    std::cout<<x<<"\n"<<y<<std::endl;

    return 0;
}