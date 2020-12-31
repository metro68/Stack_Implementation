//Array Implementation of Stack

#include <stdio.h>
#include <stdlib.h>

struct stack{
int* val;
int size;
int top;
};

struct stack* createstack(int size){
struct stack* stack1 = malloc(sizeof(struct stack));
stack1->top = -1;
stack1->size = size;
struct stack1->val = malloc(size*sizeof(int));
return stack1;
}

void push(int data, struct stack* stack1){
if(stack1->top == (stack->size-1)){
return;
}
stack1->val[++top] = data;
return;
}

int pop(struct stack* stack1){
if(stack1->top == -1){
return -1;
}
int value = stack1->val[top--];
return value;
}

int peek(struct stack* stack1){
if(stack1->top == -1){
return -1;
}
int value = stack1->val[top];
return value;
}

int main (){
struct stack* stack2 = struct stack* createstack(20);
push(20, stack2);
push(14, stack2);
push(10, stack2);
peek(stack2);
return 0;
}
