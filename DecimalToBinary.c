#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,var,i=1,binary=0,re;
    printf("Enter a No:\n");
    scanf("%d",&n);

    var = n;
    while(n!=0){
        re = n%2;
        n = n/2;
        binary = binary + (re * i);
        i = i*10;
    }
    printf("The binary of %d is %d",var,binary);


    return 0;
}
