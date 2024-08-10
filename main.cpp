//Adds the library iostream that provides basic commands to the solution
#include <iostream>

int main(){

    //Assignment of variables
    char value = 65; //ASCII character code for 'A'     
    //Code printing of variable value
    std::cout<<"Value: "<<value<<std::endl; // Prints out 'A'
    std::cout<<"Value(int): " << static_cast<int>(value)<<std::endl; //Prints out '65'
    
    return 0;
}