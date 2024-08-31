#include <iostream>
int main(){
    // ALL THESE COMMANDS ARE USED FOR CHECKING TYPE OF CHAR, NOT INT NOT DOUBLE NOTHING BUT CHAR
    char x = '2';
    char y = 'C';
    char z = '$';
    char w = 'c';

    if(std::isalnum(x)){
        std::cout << "integral value of x is alphanumeric. Boolean value of isalum: " << std::isalnum(x) << std::endl;
    } else{
        std::cout << "integral value of x is not alphanumeric. Boolean value of isalum: " << std::isalnum(x) <<std::endl;
    }

    if(std::isalnum(y)){
        std::cout << "integral value of y is alphanumeric. Boolean value of isalum: " << std::isalnum(y) << std::endl;
    } else{
        std::cout << "integral value of y is not alphanumeric. Boolean value of isalum: " << std::isalnum(y) <<std::endl;
    }

    if(std::isalnum(z)){
        std::cout << "integral value of x is alphanumeric. Boolean value of isalum: " << std::isalnum(z) << std::endl;
    } else{
        std::cout << "integral value of x is not alphanumeric. Boolean value of isalum: " << std::isalnum(z) <<std::endl;
    }



    if(std::isalpha(y)){
        std::cout << "y is alphabetic its boolean value is: " << std::isalpha(y) << std::endl;
    }

    if(!std::isalpha(x)){
        std::cout << "x is not alphabetic its boolean value is: " << std::isalpha(x) << std::endl;
    }



    if(std::islower(w)){
        std::cout << "w is a lowercase character and its boolean is: " << std::islower(w) << std::endl;
    }
    if(std::isupper(y)){
        std::cout << "y is an uppercase character and its boolean is: " << std::isupper(y) << std::endl;
    }



    if(std::isdigit(x)){
        std::cout << "x is a digit, its boolean value is: " << std::isdigit(x) << std::endl;
    }




    char message[] = {"Hello people, my name is Panshul. This is my code on character manipulation :)"};
    std::cout << message <<std::endl;
    int emptycount{};
    for(int i = 0; i < std::size(message); i++){
        if(std::isblank(message[i])){
            std::cout << "Found an empty character in the array at index " << i << std::endl;
            emptycount++;
        }
    }
    std::cout << "There were total " << emptycount << " empty spaces" << std::endl;


    for(int i=0; i< std::size(message); i++){
        message[i] = std::toupper(message[i]);  // std::tolower can also be used
    }
    std::cout << message <<std::endl;
     
    for(int i=0; i<std::size(message); i++){
        message[i] = std::tolower(message[i]);
    }
    std::cout << message <<std::endl;
}