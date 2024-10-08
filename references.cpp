#include <iostream>
int main(){
    int x= 3;
    int &y = x; // this is a reference, using &y, you created a variable 'y' which is an ALIAS for int x which has same memory address 
    y =7; // you can make work y exactly the way you want to work with x
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << &x << std::endl;
    std::cout << &y << std::endl;    // all will have same values with their respective format

    /*  difference between pointers and references
    1) pointers need to be dereferenced hence it requires a dereference operator to get the value while reference doesnt need that
    2) a pointer can be changed or can be pointed to other memory addresses but reference cant change its memory address once fixed as it becomes alias
    3) it is MUST to initialise a REFERENCE but its not important (advisable though) to not initialise a pointer as it contains a garbage value if nothing initialised 
    */
   // int x= 10; const int &y = x    this will not allow to change the value of x through the alias y (you can change value through x+=3, etc)
   // const int* const y = x     this will make the alias value constant, and also we cant change the memory address of the pointer
   // there is nothing like const int& const y = x, etc because references are already made not to modify hence its of no use so it will give compiler error
}