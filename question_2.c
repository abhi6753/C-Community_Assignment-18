//2. Write a function to swap strings of two char arrays of calling functions. (TSRS)
#include<stdio.h>
#include<conio.h>
#include<string.h>
void swap(char *p,char *q,int );
int main()
{
   char str[50],str1[50];
   printf("Enter first string:\n");
   fgets(str,50,stdin);
   printf("Enter second string:\n");
   fgets(str1,50,stdin);
   int len_str,len_str1,len;
   len_str = strlen(str);
   len_str1 = strlen(str1);
   if(len_str>len_str1)
      len = len_str;
   else
      len = len_str1;
   swap(str,str1,len);
   printf("After swapping\n");
   printf("first string: %s\nSecond string: %s",str,str1);
   getch();
   return 0;
}
void swap(char *p,char *q,int len)
{
   int i;
   char temp;
   for(i=0;i<len;i++)
   {
      temp = p[i];
      p[i]=q[i];
      q[i]=temp;
   }
   
}
