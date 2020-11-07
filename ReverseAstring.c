#include <stdio.h>
int main() {
    // Write C code here
   char s[50],temp;
   int len,i;
   printf("Enter the string\n");
   gets(s);
   for(len=0;s[len];len++);
   for(i=0;i<len/2;i++){
       temp = s[i];
       s[i] = s[len-1-i];
       s[len-1-i]=temp;
   }

   printf("The length if the string is %d \n",len);
   printf("The reverse of the string is %s",s);


    return 0;
}
