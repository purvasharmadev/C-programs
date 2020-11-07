#include <stdio.h>
#include <stdlib.h>
    //Therefore we will use preprocessor
    //(a program which processes the source code before compilation)
    //directive #define with arguments to give an impression that the program runs without main.
    // But in reality it runs with a hidden main function. Let’s see how the preprocessor doing their job:-

#define start main
void start()
{



    printf("Hello world!\n");
    return 0;
}
//The above solution has word ‘main’ in it.
//If we are not allowed to even write main, we can use token-pasting operator

/*#include<stdio.h>
#define fun m##a##i##n
int fun()
{
	printf("Hello world!");
	return 0;
*/
