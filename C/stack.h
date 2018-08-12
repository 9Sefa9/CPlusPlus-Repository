//
// Created by Progamer on 12.08.2018.
//

#ifndef CPLUSPLUS_STACK_H
#define CPLUSPLUS_STACK_H

//Stack definition
typedef struct Stack{
    struct Node *root;
}Stack;

//Node definition
typedef struct Node{
    int value;
    struct Node *next;
    struct Node *previous;
}Node;
void pop(Stack *stack);
void push(Stack *stack,int value);
void print(Stack stack);
#endif //CPLUSPLUS_STACK_H
