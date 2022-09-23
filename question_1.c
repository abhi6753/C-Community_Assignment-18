//1. Write a function to swap values of two in variables of calling function. (TSRS)
#include<stdio.h>
#include<conio.h>
void swap(int *,int *);
int main()
{
    int a,b;
    printf("Enter two number:\n");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swapping\n");
    printf("a = %d \nb= %d",a,b);
    getch();
    return 0;
}
void swap(int *a,int *b)
{
  int temp;
  temp=*a;
  *a = *b;
  *b = temp;
}