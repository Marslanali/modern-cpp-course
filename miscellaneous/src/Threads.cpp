/*
//
// Created by arslanali on 1/3/20.
//

#include <iostream>
#include <thread>
#include <chrono>

static bool finished = false;

void DoWork() {

    using namespace std::literals::chrono_literals;

    std::cout<<"Started thread id: "<<std::this_thread::get_id()<<std::endl;

    while (!finished) {
        std::cout << "Working ......." << std::endl;
        std::this_thread::sleep_for(1s);
    }
}

int main(int argc , char** argv){
    //Launch a thread
    std::thread worker(DoWork);  // function pointer

    std::cin.get();
    finished = true;

    //Join the thread with the main thread
    worker.join();

    std::cout<<"Finished: "<<std::endl;
    std::cout<<"Started thread id: "<<std::this_thread::get_id()<<std::endl;


    std::cin.get();

    return 0;

}*/
