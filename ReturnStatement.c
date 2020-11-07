#include <stdio.h>
#include <stdlib.h>

/**
    Return statement is a special line of code that we can include in our functions which we allow them to return information back to whoever call them.
    Return keyword breaks us out of the function i.e any code written after return will never be executed.
    When we want a function to return a value we should write the function above the main() function

 */
 double cube(double num){
     return num* num*num;
 }

 int main()
{
    printf("answer is: %f",cube(3.0));
    return 0;
}
/**
    if we want to write the return function after main() , then we have to do protyping i.e
        writing the function argument and parameter before main()

        double cube(double num);
        int main()
    {
    printf("answer is: %f",cube(3.0));
    return 0;
    }
    double cube(double num){
    return num* num*num;
    }


 */
