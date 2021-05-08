/**
 * @author Damien Delgadillo
 * @date 5/7/21
 * Code for testing source control
 **/

#include <iostream>

int factorial(int x);

int main(){

    int num;

    std::cout << "Hello World" << std::endl;
    std::cout << "Enter any integer number:";
    std::cin >> num;
    std::cout << "Factorial of " << num << ": " << factorial(num) << std::endl;

    return 0;
}

int factorial(int x){//n*(n-1)*(n-2)...
    if(x==1){
        return 1;
    }else{
        return x * factorial(x-1);
    }
}