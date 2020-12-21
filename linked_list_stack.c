//Linked List implemetation of stack

struct stack{
char data;
struct stack* next;
};


void push(struct stack **topref, char data){
if (*topref == NULL){
return;
}
struct stack* stack1 = malloc(sizeof(struct stack));
stack1->data = data;
stack1->next = *topref;
*topref = &stack1;
}

char pop(strcut stack** topref){
if (*topref == NULL){
return -1;
}
char figure = stack1->data;
*topref = stack1->next;
return figure;
}

char peek(strcut stack** topref){
if (*topref == NULL){
return -1;
}
return stack1->data;
}
