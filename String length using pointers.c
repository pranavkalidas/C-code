#include<stdio.h>
int string_ln(char*);
 
int main() {
   char str[20];
   int length;
   
   printf("Enter any string : \n");
   gets(str);
   
   length = string_ln(str);
   printf("The length of the given string %s is : %d", str, length);
   return 0;
}
 
int string_ln(char*p) /* p=&str[0] */
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}