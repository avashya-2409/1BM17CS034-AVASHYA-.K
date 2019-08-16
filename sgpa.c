#include <stdio.h>

struct student_t_distribution
{
    char name[20];
    int id;
    int marks[5];
    int grade[5];
    int credits[5];
};
int score(int);
float sgpa(struct student st,int);
int main()
{
    struct student s;int i;float gpa;int tcredit=0;
    printf("Enter the name of the student :");
    gets(s.name);
    printf("\n Enter the roll number of the student :");
    scanf("%d",&s.id);
    for(i=0;i<=5;i++)
    {
        printf("\n Enter the marks of student in subject in %d :",i);
        scanf("%d",&s.marks[i]);
        printf("\n Enter number of credits of subjects %d ;",i);
        scanf("%d",&s.credits[i]);
        tcredit += s.credit[i];
        s.grade[i]=score(s.marks[i]);
    }
    gpa=sgpa(s,tcredit);
    printf("\n The SGPA scored by the student is %f",gpa);
    return 0;
}
int score(int mk)
{
    if(mk>=0)
    return 10;
    else  if(mk>=75 && mk<90)
    return 9;
    else nif(mk>=60 && mk<75)
    return 8;
    else if(mk>=50  && mk<60)
    return 7;
    else if(mk>=0   && mk<50)
    return 6;
    else
    return 0;
}
float sgpa(struct student st,int c)
{
    int i;float res=0;
    for(i=0;i<=5;i++)
    {
        res += st.greade[i]*st.credit[i];
    }
    res/=c;
    return res;
}
