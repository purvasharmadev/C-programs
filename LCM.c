#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,L;
    printf("Enter two num:\n");
    scanf("%d%d",&a,&b);
    for(L=a>b?a:b;L<=a*b;L++)
        if(L%a==0&&L%b==0)
        break;
    printf("%d is the LCM",L);
    return 0;
}
