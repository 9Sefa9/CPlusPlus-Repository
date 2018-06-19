#include <stdio.h>
#include <stdlib.h>

typedef struct listNode listNode;

struct listNode{
    int data;
    listNode * next;
};

listNode * initializeList(int data);
void addLast(listNode * root, int toAdd);
void printList(listNode * root);
void addFirst(listNode ** root, int toAdd);

int main() {
    listNode * root = initializeList(5);
    addLast(root, 8);
    addFirst(&(root), 9);
    printList(root);
}

listNode * initializeList(int data){
    listNode * root = malloc(sizeof(listNode));
    root -> next = 0;
    root -> data = data;
    return root;
}

void addLast(listNode * root, int toAdd){
    listNode * newNode = malloc(sizeof(listNode));
    newNode -> data = toAdd;
    newNode -> next = 0;
    listNode * current = root;
    while (current -> next != 0){
        current = current -> next;
    }
    current -> next = newNode;
}

void addFirst(listNode ** root, int toAdd){
    listNode * newRoot = malloc(sizeof(listNode));
    newRoot -> data = toAdd;
    newRoot -> next = *root;
    *root = newRoot;
}

void printList(listNode * root){
    listNode * current = root;
    while (current != 0){
        printf("%i\n", current -> data);
        current = current -> next;
    }
}