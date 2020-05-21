//
// Created by arslanali on 2/3/20.
//

#include <iostream>


struct Vec2 {
    float x, y;

    void Add (const Vec2& secondVec){

        x+= secondVec.x;
        y+= secondVec.y;

    }

};

int main(int argc, char** argv){

    Vec2 vector2d;

    vector2d.x = 10.2;
    vector2d.y = 3.2;

    std::cout<<vector2d.x<<"\n"<<vector2d.y<<std::endl;

    return 0;
}