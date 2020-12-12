// Linked list implementation of stack
struct stack{
int data;
struct stack* next;
};

void push (int data, struct stack** topref){
	if(*topref == NULL){
		printf("stack overflow\n");
	}	

struct stack* stack1 = malloc(sizeof(structstack));
stack1->data = data;
stack1-> next = *topref;
*topref = &stack1;
}

int pop (struct stack** topref){
	if(*topref == NULL){
		printf("Empty stack\n");
	}
 struct stack* top = *topref;
 int returning = stack1->data;
 *topref = top->next;
 free(top);
 return returning;
}

int peek(struct stack** topref){
	if(*topref == NULL){
		printf("Empty stack\n");
	}
 struct stack* top = *topref;
 int returning = stack1->data;
  return returning;
}