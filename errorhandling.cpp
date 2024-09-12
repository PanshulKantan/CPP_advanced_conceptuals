#include <iostream>
#include <string>
int main(){
    int x[10];
    int y = sizeof(x)/sizeof(int);
    int count{};
    std::string z;

    for(int i=0; i<y; i++){
        //std::cin >> x[i];   // it asks for input    
        if(std::cin >> x[i]){       //this also asks for input as inside if statement, std::cin operator is used which asks for input hence it checks if the input is valid or not
            count++;            // now input is asked twice in a single time so the value will be changed to what written inside if condition
        }else{
            break;
        }
    }

   // here it says the loop to break if there is any invalid format not of type int
    std::cin.clear();   // if not used, computer will set error flags after recieving invalid input in x and wont let code run above it only where this particular operation is called where error occured which asks for input until it is fixed
    // if not used, it will not allow std::cin to work in subsequent operations but the rest will work before or after that std::cin where cin is not used
    // the invalid input will remain in the buffer (in both ways with or without clear but clear will remove the error flags)
    std::cin.ignore(100, '\n'); // this discards the input buffer which sets the operator free from error flags and hence there will be nor problem in subsequent operations and everything will be fine
    // it basically means to ignore upto 100 characters or where the newline starts (either of them) and if no newline present and more than 100 characters, only 100 will be discarded

    for(int i=0; i<count; i++){
            std::cout << x[i] << '\t';      // it will work properly as cin is not used in it
    }

    std::cout << std::endl;
    std::cin >> z;  // it will skip std::cin if cin.ignore() is not used 
    std::cout << z << std::endl;
    std::cout << count;     // this will also print properly, IT ONLY WONT ALLOW STD::CIN TO OPERATE BECAUSE IT GOT AN ERROR FLAG (if ignore not used)
    // after using both clear and ignore, everything will work properly
}