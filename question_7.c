//7. Write a program to print a string in reverse using a pointer
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define MAX_LENGTH 50
void strReverse(char* p,int str_len);
int main()
{
    char str[MAX_LENGTH];
    printf("Enter string:\n");
    fgets(str,MAX_LENGTH,stdin);
    strReverse(str,strlen(str));
    printf("%s",str);
    getch();
    return 0;
}
void strReverse(char* p,int j)
{
    j= j-2;
    int i=0;
    while(i<j)
    {
        char temp;
        temp = *(p+i);
        *(p+i) = *(p+j);
        *(p+j) = temp;
        i++;
        j--;
    }

}