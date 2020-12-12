// Array implementation of stack

#include <stdio.h>
#include <malloc.h>
#define MAX 10
int stack[], top = -1;
void push(int stack[], int val);
int peek(int stack[]);
int pop(int stack[]);


void push(int stack[], int val)
{
   if(top == MAX-1)
   {
     printf("\n STACK OVERFLOW");
   }
   else {
     stack[++top] = val;
   }
}

int peek(int stack[]){
  if(top == -1){	
    printf("\n STACK IS EMPTY");
    return -1;
  }
  else
    return (stack[top]);
}

int pop(int stack[]){
  if(top == -1){
    printf("\n STACK IS EMPTY");
    return -1;
  }
  else
    return (stack[top--]);
}