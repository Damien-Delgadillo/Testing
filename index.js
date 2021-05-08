/**
 * @author Damien Delgadillo
 * @date 5/7/21
 * Code for testing source control
 **/

console.log("Hello World");
let factorial = (num) => {
    if(num === 1){
        return num;
    }else{
        return num * factorial(num-1);
    }
}
console.log("Factorial of 5: " + factorial(5))

/**
 * TEST
 * 
 * Another*/