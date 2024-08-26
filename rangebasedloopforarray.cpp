#include <iostream>
int main(){
    int num[] = {1,2,3,4,5};
    for(int val : num){ // This is a ranged based for loop which makes it easier to modify each element of any kind of collection 
        val+=2;     // note that this value is changed, but the value of array will not change as this loop will only create a copy of it
        std::cout << val <<std::endl;
    }


    for(int x: num){
        std::cout << x << '\n'; // this will not give the modified or updated value but the value assigned in the very first line
    }


    for(int& y : num){  //USING int& will modify the original collection as it manipulates the array by assigning int y to each element and modify it
        y+=3;       // its different than &x or anything because it doesnt contain any memory address directly, but indirectly,......
        std::cout << y << std::endl;    // ......it assigns each element of array with that int (y in this case) and it has the memory address of that element (int&).....
    }           // it modifies the original elements (each element has a memory address which is accessed through this) and hence it changes 

    for(int z: num){        // now this will give the modified array which becomes the updated original array
        std::cout << z << std::endl;
    } 
}
