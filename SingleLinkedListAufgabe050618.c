#include <stdio.h>
#include <malloc.h>

//Was ist mir hier so alles eingefallen ? nunja :  dieses verfluchte pfeil!
//es soll sowas heißen : a->b   <=>   (*a).b  wobei a ein pointer sein sollte!
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
void removeFirst(linkedList *list,int element);
void printList(linkedList *list);

struct node *rootPointer=NULL;
int main(void){
    linkedList list;
    addFirst(&list,1);
    addFirst(&list,2);
    addLast(&list,3);
    addLast(&list,4);
    addLast(&list,5);
    removeFirst(&list,2);
    printList(&list);

}


//Füge Element am Ende der Listei
void addLast(linkedList *list,int element){
    if(rootPointer == NULL){
        list->first = malloc(sizeof(struct node));
        list->first->data = element;
        list->last = list->first;
        rootPointer = list->last;
        list->last->next= NULL;
    }else {
        list->last->next = malloc(sizeof(struct node));
        list->last = list->last->next;
        list->last->data = element;
        list->last->next = NULL;
    }
}
//Füge Element am Anfang der List
void addFirst(linkedList *list,int element){
    if(rootPointer == NULL){
        list->first = malloc(sizeof(struct node));
        list->first->data = element;
        list->last = list->first;
        rootPointer = list->first;
        list->last->next= NULL;
    }else {
        n *newNode= malloc(sizeof(struct node));
        newNode->data = element;
        newNode->next = list->first;
        list->first= newNode;
    }

}
void removeFirst(linkedList *list,int element){
    n *tmpNode = list->first;
    n *previousNode = NULL;
    n *nextNode = list->first->next;
       while(tmpNode != NULL){
           if(tmpNode->data == element){
               list->first = nextNode;
               previousNode->next->next = nextNode;
               //list->first = previousNode;
               //list->first->data = previousNode->data;
               //list->first->next = NULL;
            break;
           }else{
               previousNode = tmpNode;
               tmpNode = tmpNode->next;
               nextNode = nextNode->next;
           }
       }
}
void printList(linkedList *list){
    n *tmpNode = list->first; //äquivalent zu list->first
    while(tmpNode != NULL){
    printf("%d\n",tmpNode->data);
    tmpNode = tmpNode->next;
    }
}