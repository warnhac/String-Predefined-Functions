#include<stdio.h>
char *user_strcpy( char *source , char *dest)
 {
    while(*source)         // It will iterate till the source will end 
    *dest++ = *source++;  // This line will copy the source word by word to destination
     
     //*dest = "NULL";
     
     return dest;
     
     
 }
int main()
{

int result;
char main_str[1024];
char sub_str[1024];
gets(main_str);
    
puts(user_strcpy(main_str,sub_str));

return 0;

}
