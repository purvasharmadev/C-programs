#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[50];
    int len,i;
    printf("Enter a string:  ");
    gets(s);
    len = strlen(s);
    for(i=0;i<len/2;i++){
        if(s[i] != s[len-1-i]){
             printf("The string %s is not a palindrome",s);
            break;

        }
    }
    if(i == len/2){
        printf("The string %s is a palindrome",s);
    }





}
