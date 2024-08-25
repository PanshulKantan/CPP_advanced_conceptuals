#include <iostream>
#include <iomanip> // used for setw....

int main() {
    // Print "Name" with a field width of 10 characters, right-aligned by default
    std::cout << std::setw(10) << "Name"; 
    
    // Print "age" with a field width of 10 characters, right-aligned by default
    // "age" starts at the 11th character position, creating a gap of 10 characters
    std::cout << std::setw(10) << "age" << std::endl;

    // Print "5" with a field width of 10 characters, left-aligned
    // "5" is printed at the start of the field, with padding added to the right
    std::cout << std::left << std::setw(10) << "5" << std::endl;


    

    // Print "5" with a field width of 10 characters, right-aligned
    // "5" is printed at the end of the field, with padding added to the left
    std::cout << std::right << std::setw(10) << std::setfill('-') << "5" << std::endl;
    // std::setfill simply fills the gap with particular character specified in the bracket
    // NOTE THAT SETFILL CANT BE USED IN MANUALLY ADDED SPACES HENCE WE HAVE TO USE SETW TO USE SETFILL
    std::cout << std::setfill(' '); // THIS IS IMPORTANT OTHERWISE IT WILL FILL '-' IN REST OF THE CODE WHENEVER STD::SETW IS CALLED



    std::cout << std::showpos; //doing std::cout before showpos is important or else it will put + before the number but will not print it hence not visible
    std::cout << 5 << std::endl;
    std::cout << std::noshowpos; // same to boolalpha
    //or std::cout << std::showpos, next line- std::cout << 5; IT SHOWS + SIGN BEHIND A POSITIVE NUMBER



    int x =10;
    std::cout << std::uppercase; // it will print every letter in uppercase
    std::cout << std::showbase; // this will also print the particular format for that type, for ex for hex, it will print a 0x before the value which is format of hex
    std::cout << std::dec << x << std::endl;
    std::cout << std::hex << x << std::endl;
    std::cout << std::oct << x << std::endl; // it will print the value in given format after std::
    std::cout << std::noshowbase;
    std::cout << std::nouppercase; //disables the manipulator
    std::cout << std::dec; //THIS IS IMPORTANT BECAUSE OTHERWISE IT WILL ALWAYS GIVE OUTPUTS IN LAST TYPE FORMAT IN REST OF THE CODE (OCTAL IN THIS CASE CAUSE LAST WAS STD::OCT)


    double y = 12.24;
    std::cout << std::showpoint; // it shows the 0s after decimal hence if its 12, it will print 12.000
    std::cout << y << std::endl;
    std::cout << std::noshowpoint;

    int z=-3;
    std::cout << std::dec << std::internal << std::setw(5) << z;
    // std::nointernal doesnt exist


    return 0;
}
//std::cout << std::setw(10) << "age \n" NOTE THAT THIS CODE IS WRONG, LOGICALLY CORRECT BUT THE GAP BETWEEM AGE /N DISTURBS THE WAY SETW MANIPULATOR WORKS
// if you want to use \n, just type "age\n"