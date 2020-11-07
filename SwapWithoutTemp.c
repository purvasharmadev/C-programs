#include <stdio.h>
#include <stdlib.h>

int main()
{
 //swapping of two integers
    int a,b;
    printf("Enter two num\n");
    scanf("%d%d",&a,&b);
    printf("Two numbers are\n a = %d b = %d \n",a,b);

    a = a+b;
    b = a-b;
    a = a-b;



    printf("After swapping\n");
    printf("a = %d b = %d",a,b);
    getch();

    return 0;
}
