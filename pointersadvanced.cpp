#include <iostream>
#include <string>
int main(){
    const char* message = "hetry";// it is working because this is an array of char type and hence when we std::cout << (array name) it gives its memory address and its first element is assigned to it.
    // const is important as to not change its value as is might affect the memory address to which it is pointing to because as it is an array of char whose memory address is being pointed by it, so changing the double quoted word will change the array entirely
    // and hence its memory address would be different but 
     // yes you can only enter a double quoted string entry in pointer of a char format
    /* this is so because it points at the first character of the string
    string is logically an array with elements which are of type char, so it points to the first char
    NOTE THAT YOU CANNOT USE SINGLE QUOTED VARIABLE TO ASSIGN IT TO A CHAR POINTER
    this is so because in deep concept, it actually checks the array which has a null variable at the end '\0', 
    hence not a single quoted char. */
    char message2 = "hello"[0]; // you can assign the first variable of a string just like the pointer in this way
    // string is always like an array so you implicitely assign the first variable '[0]' as the variable.


    int *x{nullptr};  // you cannot assign a pointer as a direct integer like int x=7; as pointer is only made to hold a memory address
    // it doesnt have its own memory address so you can only give it a memory address of another variable.
   
    int num[]= {1,2,3,4,5,6,7};// its better to write nullptr instead of leaving it blank, it wont make a difference in use but if left empty, it will take some garbage value hence will waste memory
    
    
    x= new int;//now this variable has been set to heap memory or dynamically allocated memory (whose memory is not fixed)
    // there are 4 types of memory- heaps, stack, data and text, stack is a memory which is assigned by us hence finite size, like int x=5, so we assign it a memory, its stack.
    //heap memory is the memory through which stack is being made finite. hence more chance of overflow or information leak but its starting or ending time is controllable unlike stack
    // stack destroys its memory just after its use is finished without implicitely giving a command unlike heap.
    x = num; // it has been given the memory adress of the array num (because std::cout << num will give its memory adress because thats how array work) and its value is the first element of that array thats how it works.

        // now if we write std::cout << *x, it would give the first element which is 1, if we wrote x=num+5; it would give 1st + 5= 6th element hence 6 as output after dereferencing.

    for(x = num; x < num+5; x++){   // note that x=num, etc, is not any integer but a memory address, it does not work like integer +1, etc
                                    // for loop is just a conditional command hence it works UNTIL it reaches the memory address num+5 which also works like integer and memory adress is changed to just the next address (x++)
        std::cout << "pointers " << std::endl;
    }       
    std::cout << std::endl;


    std::cout << *x; // it outputs 6


    x = nullptr;
        // you cant delete the x pointer as its not a heap memory but its pointing to an array so no chance of overflow and you cant delete anything implicitely in stack so it will give undefined behaviour.

    int *a = new int(10); // this is a way to dynamically allocate a memory as a pointer  in heap. you can only use pointer because new int allocates a memory whose value can be defined
    // or you can simply write *a = 10;
    // we cant say int a = new int because new int is a memory and int required an integer as input. so it means we allocated a heap memory to a pointer named a which contains the value 10 
    delete a; // this is important because it might cause overflow or memory leak because its in heap so its a must do thing after the use of pointer is finished
    // we dont need to implicitely do it for stack because it automatically deleted the memory after its use is finished.
    a = nullptr; // setting it to nullptr is important so that it wont be a dangled pointer hence it wont have any garbage value


    std::cout << std::endl;

    for(int y=0; y< 3; y++){
        std::cout << "hi ";
    }
    
}