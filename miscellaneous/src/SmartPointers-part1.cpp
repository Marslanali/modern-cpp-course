//
// Created by arslanali on 3/3/20.
//

/**
 * A Smart pointer is a composition class that is designed to manage
 * dynamically allocated memory and ensure that memory gets deleted
 * when the smart pointer object goes out of scope.
 */

#include <iostream>
#include <string>
#include <memory>

/*

class Entity{

public:
    Entity(){
        std::cout<< "Created Entity" << std::endl;
    }

    ~Entity(){
        std::cout<< "Destroyed Entity" << std::endl;
    }

    void Print() {}

};

*/


template<class T>
class AutoPtr1
{

private:
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
};


int main(int argc, char** argv){
/*

    {
        //std::unique_ptr<Entity> entity(new Entity());
        std::unique_ptr<Entity> entity = std::make_unique<Entity>();
        entity->Print();

        std::shared_ptr<Entity> sharedEntity = std::make_shared<Entity>();

    }
*/

    AutoPtr1<Resource> res(new Resource); // Note the allocation of memory here

    // ... but no explicit delete needed

    // Also note that the Resource in angled braces doesn't need a * symbol, since that's supplied by the template

    return 0;

}

