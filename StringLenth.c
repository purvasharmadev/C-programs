#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Write C code here
   char a[]="Hello";
   int i;
  
   for(i=0; a[i] != '\0';i++);
   
   printf("Length of the string %d",i);
    
    return 0;
}