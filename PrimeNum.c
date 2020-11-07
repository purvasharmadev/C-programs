#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("Enter the no. to check\n");
    scanf("%d",&x);

    for(i=2;i<=x-1;i++)
        if(x%i==0)
        break;
    if(i==x)
        printf("%d is a prime number\n",x);
    else
        printf("%d is not a prime number\n",x);

    return 0;
}
