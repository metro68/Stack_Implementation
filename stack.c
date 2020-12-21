//Array Implementation of Stack

#include <stdio.h>
#include <stdlib.h>

struct stack{
int size;
int top;
int* array
};

struct stack* createstack(int size){ //Function to create stack
struct stack* stack1 = malloc(sizeof(struct stack));
stack1->top = -1;
stack1->size = size;
stack1->array = malloc(stack1->size*sizeof(int));
return stack1;
}

void push(struct stack* stack1,int item){
if (stack1->top == size -1){
return;
}
stack1->array[++top] = item;
}

int pop(struct stack* stack1){
if (stack1->top == -1){
return -1;
}
return stack->array[top--];
}

int peek(struct stack* stack1){
if (stack1->top == -1){
return -1;
}
return stack->array[top];
}

int main(){
create stack(20);
   /* ------- */ //Implement your code here
}

