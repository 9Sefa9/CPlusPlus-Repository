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
void removeAt(listNode *root,int index);

int main() {

    listNode * root = initializeList(5);
    addLast(root, 8);
    addFirst(&(root), 9);
    addLast(root,2);
    printf("VORHER:\n");
    printList(root);
    removeAt(root,0);
   // removeAt(root,0);
    printf("NACHHER:\n");
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
void removeAt(listNode * root , int index){
    listNode * current = root;
    listNode * previous = NULL;
    for(int i = 0 ; i<index;i++) {
        previous = current;
        current =current->next;
    }
    //3 4 6
    if(previous != NULL &&  current != NULL && current->next != NULL){
        printf("Deleting: %d\n", (current->data));
        //vorrige pointer zeigt jetzt auf dem darauf folgendem
        previous->next = current->next;
        root = current->next;
        return;
    }
    //[] 4 6 DAS KLAPPT NICHT GAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAANZ
    if(previous == NULL && current!=NULL && current->next !=NULL && index == 0){
        printf("CURRRENT VALUE: %d\n",current->data);

        //previous = current;
        //current = current->next;
        //revious->next = current;
        //root = current->next;
        //free(current);

        return;
    }
    //4 6 []
    if(previous != NULL && current != NULL && current->next == NULL){
        previous->next = NULL;
        root = previous;
        return;
    }
}