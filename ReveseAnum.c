#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,reverseNum = 0,lastDigit;
    printf("Enter a number\n");
    scanf("%d",&x);


    while(x != 0){
    lastDigit = x%10; //any num divided by 10 given last digit of the number as the reminder
    reverseNum = reverseNum * 10 + lastDigit; // Assinging the value of r in y i.e reverseNum
    //removing the last num i.e r from x
    x = x/10;
    }

    printf("Reverse is %d",reverseNum);

    return 0;
}
