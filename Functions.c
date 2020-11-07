#include <stdio.h>
#include <stdlib.h>
/** Function: block of code */

int main()
{
    char name[20];
    int a;
    int b;


    printf("what is your name?\n");
    scanf("%s",name);
    sayHi(name);
    scanf("%d",&a);
    scanf("%d",&b);
    sum(a,b);
    printf("Happy Learning!!");
    return 0;
}
void sum(int a, int b){
    printf("the sum is %d\n",a + b);
}

void sayHi(char name[]){
    printf("Hi %s !! what do you want me to add?\n",name);
}
