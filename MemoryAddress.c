#include <stdio.h>
#include <stdlib.h>

/**< In c while creating variables we store a piece of data ,Memory allocation by c is the way of keeping track of the physical memory used by these variables  */

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';

    printf("%p",&age);

    return 0;
}
