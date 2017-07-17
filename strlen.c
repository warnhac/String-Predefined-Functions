
#include<stdio.h>
 int user_strlen_with_pointer( char *str)
 {
    int str_len =0;
     
    while(*str)  // it will run utill it found the NULL
    {
      str++;     // increase the alphabet of the string
      str_len++; // increase the count of the variable
    }
    return str_len;
 }
int main()
{

int result;
char main_str[1024];
gets(main_str);   
printf("The length of the string  %d", user_strlen_with_pointer(main_str));

return 0;

}
