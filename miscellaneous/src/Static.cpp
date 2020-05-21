/*
//
// Created by arslanali on 2/3/20.
//


#include <iostream>


class TestClass {
public:
    static int objectCount;

    TestClass(){
        // Increase every time object is created
        objectCount++;
    }

private:

};

// Initialize static member of class Box
int TestClass::objectCount = 0;

int main(int argc, char** argv) {

    TestClass* t1 = new TestClass();
    TestClass* t2 = new TestClass();
    TestClass* t3 = new TestClass();

    // Print total number of objects.
    std::cout<<t1->objectCount<<"\n"<<t2->objectCount<<"\n"<<t3->objectCount<<std::endl;


    return 0;
}*/


#include <iostream>

struct Entity{
    static int x, y;

    void Print(){
        std::cout << x <<"\n"<< y <<std::endl;
    }

};

int Entity::x = 0;
int Entity::y = 0;


int main(int argc, char** argv){

    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 20;
    e1.y = 30;

    e.Print();
    e1.Print();

    return 0;
}