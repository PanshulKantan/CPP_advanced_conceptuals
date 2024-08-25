#include <iostream>
#include <limits>
int main(){
    std::cout << std::numeric_limits<short>::min(); // this shows the minimum value of short integer type which is used in computer
    std::cout << std::numeric_limits<long>::max(); //this shows the max value of long integer type value which is the limit of the computer
    // can be used for float, double, long long, short signed, long unsigned, etc.
}