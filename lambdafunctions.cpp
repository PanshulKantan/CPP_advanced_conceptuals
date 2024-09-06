#include <iostream>
int main(){
    auto func_add = [](int a, int b)-> int{     // lambda function is an anonymous function which allows us to define a function without naming it
                                                // we can create its alias and call it whenever wanted
        return a+b;
    }(2,3);
    std::cout << func_add << std::endl;


    [](){
        std::cout << "hello world" << std::endl;    // if we return something to a function, making an alias is important if printing the output is required
                                            // wirting auto before naming the function is required after returning something but you cannot make that alias as an int, char etc or else its property of being anonymous will contradict
    }();            // (); just after the code means that it will run the code immediately without calling it.


    double c{2.0,};

    double d {24.5};


    auto func_mult = [c,d](){       // when we have to pass any value in the function, we write it in [ ] as capture list
        return c*d;
    };


    std::cout << func_mult() << std::endl;


    // [capture lists] (parameters) -> return type          this is the format of lambda function


    auto func_output = [c](){   //lambda functions have copies of values (but not if we write [&c] hence pass by reference)
        std::cout << "value of c inside lambda function: " << c << std::endl;
    };


    // NOTE THAT IF WE WRITE "[=]()->{ }" THE '=' GIVES ALL VALUES IN THE CODE AS A CAPTURE LIST IN THE FUNCTION HENCE WE CAN MODIFY THE COPY OF ANY VALUE WITHOUT IMPLICITELY ENTERING IT IN CAPTURE LIST
    // ALSO, [&] WILL DO THE SAME TOO BUT [=] WILL ONLY CREATE THE COPY FOR WHICH YOU HAVE ACCESS OF BUT [&] ALLOWS YOU TO MODIFY THE ORIGINAL VALUES AND REST IS THE SAME

    for (int i=0; i<5; i++){
        std::cout << "value of c outside lambda function and inside for loop: " << c << std::endl;
        func_output();
        c++;    // it changes the original value of c not the copy of it
    }   

    std::cout << "value of c outside both for loop and lambda function is " << c << std::endl;
}