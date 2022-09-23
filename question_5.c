//5. Write a program to compute the sum of all elements in an array using pointers.
#include<conio.h>
#include<stdio.h>
int SumOfElement(int*,int);
int main()
{
    int size,sum=0;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n");
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    sum = SumOfElement(arr,size);
    printf("Sum of %d elemets = %d",size,sum);
    getch();
    return 0;
}
int SumOfElement(int *p,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum =sum+p[i];
    }
    return sum;
}//we can also keep user define function name as variable.
 // we cant keep keyword and pre-define function name as variable.