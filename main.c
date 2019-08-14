#include <stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter the numbers swapped");
    printf("\n Enter the first numbers :");
    scanf("%d",&a);
    printf("\n Enter the second numbers :");
    scanf("%d",&b);
    swap(&a,&b);
    printf("\n After swapping the values of the first and second numbers have become %d.",a,b);
    return 0;
}
void swap(int*p,int*q)
{
    *p=*p + *q;
    *q=*p - *q;
    *p=*p - *q;
}
