#include<stdio.h>
#include<stdlib.h>
void towerh(int n,char src,char temp,char dist)
{
if(n==1)
{
printf("move  disc 1 from %c to %c\n",src,dist);
return;
}
towerh(n-1,src,dist,temp);
printf("Move disk %d from %c to %c \n",n,src,dist);
towerh(n-1,dist,temp,src);
}
int main()
{
int n=3;
towerh(n,'A','B','C');
return 0;
}
