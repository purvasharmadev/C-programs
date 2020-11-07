#include <stdio.h>
#include <stdlib.h>

int main()
{
    //An integer is a palindrome if the reverse of that number is equal to the original number
    int number,lastDigit,originalNumber,reverseNumber;
    printf("Enter an integer\n");
    scanf("%d",&number);

    originalNumber = number;

    //reverse the number

    while(number!=0){
        lastDigit = number%10;
        reverseNumber = reverseNumber*10+lastDigit;

        //remove the last digit
        number = number/10;

    }
    if(originalNumber==reverseNumber)
        printf("the number is Palindrome");
    else
        printf("the number is not a palindrome");



    return 0;
}
