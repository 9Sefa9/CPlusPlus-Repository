#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
/*
1. Declaration can be done any number of times but definition only once.
2. “extern” keyword is used to extend the visibility of variables/functions().
3. Since functions are visible through out the program by default. The use of extern is not needed in function declaration/definition. Its use is redundant.
4. When extern is used with a variable, it’s only declared not defined.
5. As an exception, when an extern variable is declared with initialization, it is taken as definition of the variable as well.
 * */
test = 4;
int main(void){

    Stack stack;
    stack.root = NULL;
    push(&stack,1);
    push(&stack,2);
    push(&stack,3);
    push(&stack,4);
    push(&stack,5);
    push(&stack,6);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    pop(&stack);
    printf("extern: %i\n",test);
    print(stack);


    return 0;
}
void push(Stack *stack,int value){
        if(stack->root == NULL){
            stack->root = malloc(sizeof(struct Node));
            stack->root->value = value;
            stack->root->next = malloc(sizeof(stack));
        }
        else {
            stack->root->next->value = value;
            stack->root->next->previous = stack->root;
            stack->root = stack->root->next;
            stack->root->next = malloc(sizeof(struct Node));
        }
}
void pop(Stack *stack){
        if(stack->root != NULL) {
            stack->root = stack->root->previous;
            free(stack->root->next);
            stack->root->next = NULL;
        }
}
void print(Stack stack){
    while(stack.root != NULL){
        printf("%d\n",stack.root->value);
        stack.root = stack.root->previous;
    }
}



