//4. Write a program to count the number of vowels and consonants in a string using a pointer.
#include<stdio.h>
#include<conio.h>
#define MAX_LENGTH 50
void count (char *p,int*q,int *r);
int main()
{
    char str[MAX_LENGTH];
    printf("Enter string:\n");
    fgets(str,50,stdin);
    int V,C;
    V=C=0;
    count(str,&V,&C);
    printf("Vowels= %d\n",V);
    printf("Consonants = %d\n",C);
    getch();
    return 0;  
}
void count (char *p,int *q,int *r)
{
    int i;
   for(i=0;p[i];i++)
   {
        if((p[i]>=65&&p[i]<=90)||(p[i]>=97&&p[i]<=122))
        {
             if(  p[i]=='A'||p[i]=='a'||p[i]=='E'||p[i]=='e'||p[i]=='I'||p[i]=='i'\
             ||p[i]=='O'||p[i]=='o'||p[i]=='U'||p[i]=='u')
                 ++*q;
             else
                 ++*r;
        }
        
   }

}
