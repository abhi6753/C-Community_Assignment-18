//3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]
#include<stdio.h>
#include<conio.h>
void sort(int *ptr,int size);
int main()
{
    int size,arr[size],i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    printf("Enter %d numbers:\n",size);
    for(i=0;i<size;i++)
       scanf("%d",arr[i]);
    sort(arr,size);  //Not solve
    for(i=0;i<size;i++)
       printf("%d ",arr[i]);
    getch();
    return 0;
}
void sort(int *ptr,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        if(ptr[i]>ptr[j])
        {
            int temp;
            temp = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = temp;
            i++,j++;
        }
        i++,j++;
    }
}