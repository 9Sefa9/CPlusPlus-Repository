#include <stdio.h>
#include <malloc.h>
typedef struct singleLinkedList{

    struct node *first;
    struct node *last;
}linkedList;

typedef struct node{
    int data;
    struct node *next;
}n;
//Prototypen
void addLast(linkedList *list,int element);
void addFirst(linkedList *list,int element);
void printList(linkedList *list);

struct node *rootPointer=NULL;
int main(void){
    linkedList list;
    addLast(&list,2);
    addLast(&list,3);
    addFirst(&list,4);
    addFirst(&list,8);
    printf("first:%d\n",*(list.first->next));
    printf("last: %d\n",list.last->data);
    //printList(&list);
}


//Füge Element am Ende der Listei
void addLast(linkedList *list,int element){
    if(rootPointer == NULL){
        list->first = malloc(sizeof(int));
        list->first->data = element;
        list->last = list->first;
        rootPointer = list->last;
        list->last->next= NULL;
    }else {
        list->last->next = malloc(sizeof(int));
        list->last = list->last->next;
        list->last->data = element;
        list->last->next = NULL;
    }
}
//Füge Element am Anfang der List
void addFirst(linkedList *list,int element){
    if(rootPointer == NULL){
        list->first = malloc(sizeof(int));
        list->first->data = element;
        list->last = list->first;
        rootPointer = list->first;
        list->last->next= NULL;
    }else {
        list->first->next = malloc(sizeof(int));
        list->first = list->first->next;
        list->first->data = element;
    }

}
void printList(linkedList *list){
    node *tmpNode = list->first; //äquivalent zu list->first
    while(tmpNode != NULL){
    printf("%d\n",tmpNode->data);
    tmpNode = tmpNode->next;
    }
}