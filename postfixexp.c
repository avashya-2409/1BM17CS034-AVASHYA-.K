#include <stdio.h> 
#include <string.h> 
#include <ctype.h> 
#include <stdlib.h> 
  
struct Stack 
{ 
    int top; 
    unsigned capacity; 
    int* array; 
}; 
struct Stack* createStack( unsigned capacity ) 
{ 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
  
    if (!stack) return NULL; 
  
    stack->top = -1; 
    stack->capacity = capacity; 
    stack->array = (int*) malloc(stack->capacity * sizeof(int)); 
  
    if (!stack->array) return NULL; 
  
    return stack; 
} 
  
int isEmpty(struct Stack* stack) 
{ 
    return stack->top == -1 ; 
} 
  
char peek(struct Stack* stack) 
{ 
    return stack->array[stack->top]; 
} 
  
char pop(struct Stack* stack) 
{ 
    if (!isEmpty(stack)) 
        return stack->array[stack->top--] ; 
    return '$'; 
} 
  
void push(struct Stack* stack, char op) 
{ 
    stack->array[++stack->top] = op; 
} 
  
  
int evaluate(char *postfix)
{
 struct Stack* stack = createStack(strlen(exp)); 
    int i; 
    if (!stack) return -1; 
    for (i = 0; exp[i]; ++i) 
 {
	
      if(isdigit(ch)) 
     {
	     push_int(ch-'0'); 
          
         int v11 = pop_int();
         int v12 = pop_int();
			
         switch(ch) 
          {
            case '+':push(va12+va11);
                     break;
            case '-':push(va12-va11);
                     break;
            case '*':push(va11*va12);
                     break;
            case '/':push(va11/va12);
                     break;
         }
      }
   }
	
   return stack_int[top_int];
}
 
 
void main() 
{ 
   char infix[25],postfix[25]; 
   printf("Enter the infix expression: ");
   scanf("%s",infix); 
   convert(infix,postfix); 
	
   printf("Infix expression is: %s\n" , infix);
   printf("Postfix expression is: %s\n" , postfix);
   printf("Evaluated expression is: %d\n" , evaluate(postfix));
}