#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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
    pop(&stack);
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



