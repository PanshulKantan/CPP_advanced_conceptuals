#include <iostream>
int main(){
    int num[] = {1,2,3,4,5};

    char message[5] = {'H', 'e', 'l', 'l', 'o'};
    std::cout << message << std::endl; // this will not correctly print hello, it will but will add some junk characters in its suffix
    // this is because we dont give any null character to the array as a string that this is the end of the string
    // to give that null character, at the end of the array, we add an element ('\0)
    char message2[6]={'H','e', 'l', 'l', 'o', '\0'};
    std::cout << message2 << std::endl; // this will correctly print the string as we also gave a null character which tells the computer that this is the end of the string

    char message3[]={'H', 'e', 'l', 'l', 'o', '\0'}; //this will also work perfectly but if null character was not included, it would have given the same output.

    // VERY IMPORTANT
    char message4[6]={'H', 'e', 'l', 'l', 'o'}; //note that there are 5 elements in the array and we have initialised the size of array as 6, so by default it assigns the 6th element as a null character
    //hence THIS WILL ACTUALLY WORK WITHOUT EVEN USING '\0'

    char message5[]={"Hello"}; // YES WE CAN ASSIGN AN ARRAY AS A CHAR AND INSERT STRINGS IN IT, AND ALSO THE SIZE OF THIS ARRAY IS ALSO 6 BECAUSE WITH DOUBLE QUOTES WE GAVE THE SIZE OF STRING
    // SO BY DEFAULT IT WILL END THE STRING WITH A NULL CHARACTER WHERE THE DOUBLE QUOTE IS FINISHED AND HENCE THE SIZE BECOMES 6 (5 LETTERS AND THE NULL CHARACTER)


    

    std::cout << std::size(num) << std::endl; // this basically tells the number of elements (size) in an array.


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
    // also that this int& is called a reference which can be considered as an alias to each element of an array. its different than pointer 
    // the only difference is that pointer have its own memory and storage, while reference have no such memory it just refers to each element (as pointers are assigned like int *y hence they are assigned as an int which takes memory)
}
