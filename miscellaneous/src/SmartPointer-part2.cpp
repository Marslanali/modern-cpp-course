//
// Created by arslanali on 3/3/20.
//

#include <iostream>

template<class T>
class AutoPtr1
{
    T* mPtr;
public:
    // Pass in a pointer to "own" via the constructor
    AutoPtr1(T* ptr=nullptr)
            :mPtr(ptr)
    {
    }

    // The destructor will make sure it gets deallocated
    ~AutoPtr1()
    {
        delete mPtr;
    }

    // Overload dereference and operator-> so we can use AutoPtr1 like mPtr.
    T& operator*() const { return *mPtr; }
    T* operator->() const { return mPtr; }
};

// A sample class to prove the above works
class Resource
{
public:
    Resource() { std::cout << "Resource acquired\n"; }
    ~Resource() { std::cout << "Resource destroyed\n"; }
    void sayHi() { std::cout << "Hi!\n"; }
};

void someFunction()
{
    AutoPtr1<Resource> ptr(new Resource); // ptr now owns the Resource

    int x;
    std::cout << "Enter an integer: ";
    std::cin >> x;

    if (x == 0)
        return; // the function returns early

    // do stuff with ptr here
    ptr->sayHi();
}

int main(int argc, char** argv)
{
    someFunction();

    return 0;
}