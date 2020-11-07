#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int bin,i=0,s=0;
    printf("Enter a Binary Num:\n");
    scanf("%d",&bin);
    while(bin){  //a variable without condition in a while loops works till the value of the variable is true , once it becomes false it gets terminated
        s = s+pow(2,i)*(bin%10);
        bin = bin/10;
        i++;

    }
    printf("The decimal equivalent of %d is %d",bin,s);
    return 0;
}
