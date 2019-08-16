#include <iostream>
struct student
{
    int id,age,marks;
}s;
void main()
{
 printf("Enter details of student");
 printf("\n ID number :");
 scanf("%d",&s.id);
 printf("\n Age :");
 scanf("%d",&s.age);
 printf("\n Marks :");
 scanf("%d",&s.marks);
 if(s.age>20 && s.marks>=0 && s.marks<=100)
 {
     if(s.marks>=65)
     {
         printf("\n Student is eligible.");
     }
     else
     {
         printf("\n Not eligible :");
     }
 }
 else
{
    printf("\n Data not valid");
}
 }
