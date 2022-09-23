//6. Write a program to print the elements of an array in reverse order.
#include<stdio.h>
#include<conio.h>
void reverse(int*ptr,int size);
int main()
{
    int size, arr[size],i;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
      scanf("%d",&arr[i]);
    reverse(arr,size);
    printf("After reverse:\n");
    for(i=0;i<size;i++)
      printf("%d ",arr[i]);
    getch();
    return 0;
}
void reverse(int*ptr,int size)
{
    size = size-1;
    int i=0,j=size;
    while(i<j)
    {
        int temp = ptr[i];
        ptr[i] = ptr[j];
        ptr[j] = temp;
        i++,j--;
    }
}