#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,originalNum ,fact = 1;

    printf("Enter the number\n");
    scanf("%d",&num);
    originalNum = num;


    while(num >= 1){
            fact = fact * num;
            num--;

    }

    printf("The factorial of %d is %d",originalNum,fact);

    return 0;
}
