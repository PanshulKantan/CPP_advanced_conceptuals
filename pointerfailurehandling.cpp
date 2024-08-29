#include <iostream>
int main(){
    for (int i =0; i < 10; i++){
        try{        // this is a new fail error which handles the error which might arrise while giving a heap memory
            int *x = new int[100000000000000000];   //it is of 2 types exception, and std::nothrow, this is exception
            std::cout << x << std::endl; // 'try' tries the code which might be offensive so we put that commands in try
            } catch(std::exception& ex){    // and catch is used for the case where the probable offensive code doesnt work the way we want to
            std::cout << "problem while compilation " << ex.what() << std::endl;// hence the file wont crash but will notify us without crashing
        }
    }
    std::cout << "programme finished" << std::endl;



    // std::nothrow is used to give the pointer a nullpointer incase its not able to save memory address of a particular type which might crash
    for(int j=0; j<10; j++){
        int *y = new(std::nothrow) int [1000000000000000000]; // if its not able to do so, std::nothrow will allocate y to nullptr
        if(!(y==nullptr)){ // also means y!= nullptr
            std::cout << "memory allocated " <<std::endl;
            std::cout << "programme finished ";
        } else{
            std::cout << "memory not allocated " << std::endl;
        }
    }
    // in if statements, nullptr is defined as false in boolean so if we write if (x=nullptr), not ==, it will give as as nullptr and check the if condition
    // as nullptr or 0 as boolean value of false, it will take false as input and we can also do operations in condition of if else.

}