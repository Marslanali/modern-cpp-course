//
// Created by arslanali on 2/3/20.
//

#include <iostream>
#include <string.h>

int main(int argc, char** argv){

    int var = 8;
    void* ptr = nullptr;  // given memory address of zero
    // void* ptr = NULL | void* ptr = nullptr; // same as above
    ptr = &var;

    int* ptr2 = (int*)&var;
    std::cout<<*ptr2<<std::endl;

    char* buffer = new char[8];  // 8 bytes of memory, returns pointer to the beginning of the block of memory
    memset(buffer, 0, 8);
    delete[] buffer;

    char** ptr3 = &buffer;


    return 0;
}