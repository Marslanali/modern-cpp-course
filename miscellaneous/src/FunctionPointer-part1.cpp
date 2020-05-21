//
// Created by arslanali on 1/3/20.
//

#include <iostream>
#include <vector>

void display(){
    std::cout<<"Display function"<<std::endl;
}



int main(int argc, char** argv){

    void(*funPtr)() = display;

    funPtr();

    return 0;
}