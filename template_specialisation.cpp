#include <iostream>
template <typename T>
T max(T x, T y){
    return (x>y)? x : y;
}

template <typename t>
t maxpointer(t x, t y){
    return (x>y)? x:y;
}

// template specialisation allows you to change the behaviour of an already defined function and customise it with respect to the type of input you provide
template <>     // it can only be used on a predefined function

// note that const double* before maxpointer refers to the return type and it can be different than the input type
const double* maxpointer (const double*a,const double*b){   // this is the format of template specialisation and THIS WILL BE THE CHANGED BEHAVIOUR OF THE FUNCTION IF INPUT PROVIDED IS A CONST DOUBLE POINTER
    return (*a>*b)? a : b;      //dereferencing a and b, comparing the values and returning the memory address of the variable satisfying the condition
    // you have to return a memory address because the function is already defined as a pointer so it has to point at something
}

int main(){
    double a {3.5};
    double b {6.2};
    const double *c = &a;
    const double *d = &b;
    std::cout << max(c,d) << std::endl; // this will print memory address as template is taking memory address as its argument type
    std::cout << max(*c, *d) << std::endl;  // this will print the correct value as we are dereferencing it
    std::cout << *maxpointer(c, d) << std::endl; // this will also give correct value as we made a specialised template for const double pointer

    // here we dont need template specialisation because max(*c, *d) will work but we can customise not only for pointer but any input type and change the behaviour of the function with respect to it 
}