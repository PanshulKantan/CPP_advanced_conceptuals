#include <iostream>
#include <cstring>
int main(){

    const char *message1= "Hello my name is Panshul"; // note that you cannot modify an array but a pointer.

    const char *message2{"i live in shalimar garden"};  //writint const is important as we dont want to change the size of the array hence its memory address to the pointer
    message2 = message2+1;
    message2 = message2-1;

    std::cout << message2 << std::endl;

    int *x = nullptr;

    std::cout << "Length of message1 is " << std::strlen(message1) << std::endl;    //strlen tells the length of the character array, the difference between it and sizeof is 
    // that it doesnt cout the length of null character '\0' while sizeof counts, and message1.length operator is used for strings specifially

    std::cout << "length of message1 through sizeof operator is " << sizeof(message1) << std::endl; // sizeof counts the null character hence its size will be more than previous by 1 unit

    std::cout << "length of message2 pointer is " << std::strlen(message2) << std::endl;    // strlen can also be used for pointers and it will work the same

    std::cout << "length of message2 through sizeof operator is " << sizeof(message2) << std::endl;     // it will give the size of the pointer (8 bytes) instead of that of the array

    std::cout << sizeof(x) << std::endl; // will print 8




    int n = 2;
    char letter[] = "alabama";
    const char *letter2 = "blabama";
    char letter3[] = "alomaba";

    std::cout << std::strcmp(letter, letter2) << std::endl;     //compares lexicographically

    std::cout << std::strncmp(letter, letter3, n) <<std::endl;

    std::cout << std::strchr(message1, 'a')<< std::endl;   // it points the pointer to the first 'a' in the array and prints till the end of the string


    size_t count{};

    const char *L = message1;
    while((L = std::strchr(L, 'l')) != nullptr){
        int y = L - message1;
        std::cout << "Letter 'l' found at index " << y << std::endl;
        L++;
        count++;
    }
    std::cout << "there were total " << count << " 'l' in the statement";

}