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

    std::cout << std::strcmp(letter, letter2) << std::endl;     //compares lexicographically, hence alphabetwise, if letter comes before letter2, it will print -1
    // 0 if both lhs and rhs are equal and 1 or any positive integer if letter2 comes before letter in lexicographical order

    std::cout << std::strncmp(letter, letter3, n) <<std::endl;  // this gives a certain limit upto which we want to compare, hence for n =2, it will check first 2 letters (NOTE THAT COUNTING FOR THIS STARTS FROM 1 NOT 0 HENCE 2 NOT 3)

    std::cout << std::strchr(message1, 'a')<< std::endl;   // it points the pointer to the first 'a' in the array and prints till the end of the string


    size_t count{};

    const char *L = message1;
    while((L = std::strchr(L, 'l')) != nullptr){    // std::strchr operator is used when we want to point a particular character in a string
        int y = L - message1;   // hence when used, std::strchr(arrayname, 'char') it will give a pointer to that first element equal to the char assigned in the operator we want to search
        std::cout << "Letter 'l' found at index " << y << "starting from the line " << std::strchr(L, 'l') << std::endl;    // as it is pointing to the first targetted element, std::cout will print entire string but starting from that targetted variable
        L++;    // it is used so that strchr wont point on that same element again and hence the condition (L=STD::STRCHR(L, 'l')) is used so that it will print the next targetted char
        // but the difference (for the index calculation) will always start from the first element hence message1 is subtracted from it and hence we had a sperate pointer to target the character
        // because if we update the message1 pointer to point at different element, the entire index calculation will be disturbed as the original array is modified
        count++;
    }
    std::cout << "there were total " << count << " 'l' in the statement" << std::endl;



    // ***************concatenate and other topics****************//
    char first_word[50] = "hellooooooooo ";
    char second_word[50] = "wooooorllllld!! ";
    char misclenious[50] = "duniyaaaaaaaa";


    std::strcat(first_word, second_word);   // concatenation is like integrating that second word into the first one so it connects both
    // first argument is the array in which you want to add another string or array, second argument is the array or the string you want to add
    std::cout << first_word << std::endl;

    std::strncat(first_word, second_word, 5);   // strncat differs than strcat just by the amount of elements you want to add, it takes third argument of till which element you want to add which is 5
    std::cout << first_word << std::endl;   // note that each of them have to be modifiable and not a constant (or pointer) so we cant write const or define them as a pointer or it will give compilation error

    std::strcpy(first_word, second_word);   // it is used to copy one string and paste it on other string deleting the elements of the string you are copying on 
    std::cout << first_word << std::endl;   // hence it will copy second_word and paste it in first_word deleting the initial elements of first_word

    std::strncpy(first_word, misclenious, 3);   // same as of strncat, it will copy first 3 elements of the array you want to copy and paste it in the first 3 elements of the array you argumented on 
    std::cout << first_word << std::endl;

    
}