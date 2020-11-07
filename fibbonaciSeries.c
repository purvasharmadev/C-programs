#include <stdio.h>
#include <stdlib.h>
/**< FIBBONACI SERIES WITHOUT RECCURSION */
int main()
{
    int n1=0,n2=1,n3,i,num;
    printf("Enter a num\n");
    scanf("%d",&num);
    printf("%d\n%d\n",n1,n2);
    for(i=2;i<num;++i){
        n3 = n1+n2;
        printf("%d\n",n3);
        n1=n2;
        n2=n3;
    }
    return 0;
}
