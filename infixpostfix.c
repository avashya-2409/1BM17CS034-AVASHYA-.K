#include <stdio.h>
#include<string.h>
int top=0 ;
char stack[100] ;
int prec(char c)
{
    int  n ;
    if(c=='(')
    {
        n=0 ;
    }
    if(c=='^')
    {
        n=3 ;
    }
    if(c=='*'||c=='/')
    {
        n=2 ;
    }
    if(c=='+'||c=='-')
    {
        n=1 ;
    }
    return n ;
}
void push(char c)
{
    if(top>=100)
    {
        printf("stack overflow\n") ;
        return ;
    }
    stack[top]=c ;
    top++ ;
}
char pop()
{
    if(top<0)
    {
        printf("stack underflow\n");
        top-- ;
        return ;
    }
    top-- ;
    char a=stack[top] ;

    return a ;
}
int main ()
{
    printf("enter the infix expression\n") ;
    char infix[100] ;
    gets(infix) ;
    int l=strlen(infix) ;
    for(int x=0;x<=l;x++)
    {
        if(x==l)
        {
            while(top>1)
            {
                char v=pop() ;
                printf("%c",v) ;

            }
        }
        if(infix[x]=='(')
        {
            push(infix[x]) ;
        }
        else if(infix[x]=='+'||infix[x]=='-'||infix[x]=='^'||infix[x]=='*'||infix[x]=='/')
        {
            if(top==0)
            {
                push(infix[x]) ;
            }
            int pi=prec(infix[x]) ;
            int pt=prec(stack[top-1]) ;
            while(pi<pt)
            {
                char j=pop() ;
                printf("%c",j) ;
                pt=prec(stack[top]) ;
            }
            push(infix[x]) ;

        }
        else if(infix[x]==')')
        {
            char g=pop() ;
            while(g!='(')
            {
                printf("%c",g) ;
                g=pop() ;
            }
        }
        else
        {
            printf("%c",infix[x]) ;
        }

    }

}