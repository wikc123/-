#include <stdio.h>
#include <string.h> 
void huiwen(char str[])
{
     int i,len;
     bool flag = true;
     len=strlen(str);
     for(i=0;i<len/2;i++)
     {
         if(str[i]!=str[len-i-1])
         {
             flag=false;
             break;
         }
     }
     if(flag == false)
         printf("%s 不是一个回文数\n",str);
     else
         printf("%s 是一个回文数\n",str);
}
int main()
{   
     char str[100] = {0};     
     printf("Input a string：");
     scanf("%s", str);     
     huiwen(str);
     getchar();
     return 0;
}
