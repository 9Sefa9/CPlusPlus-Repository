//
// Created by Progamer on 12.08.2018.
//

#ifndef CPLUSPLUS_STACK_H
#define CPLUSPLUS_STACK_H
extern int test;
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
extern void pop(Stack *stack);
extern void push(Stack *stack,int value);
extern void print(Stack stack);
#endif //CPLUSPLUS_STACK_H
