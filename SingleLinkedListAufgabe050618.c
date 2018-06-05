#include <stdio.h>
#include <malloc.h>
typedef struct singleLinkedList{

    struct node *first;
    struct node *last;
}linkedList;

struct node{
    int data;
    struct node *next;
};
//Prototypen
void addLast(linkedList *list,int element);
void addFirst(linkedList *list,int element);

struct node *rootPointer=NULL;
int main(void){
    linkedList list;
    addFirst(&list,2);
    //addFirst(&list,3);

    printf("first:%d\n",rootPointer->data);
  //  printf("second: %d\n",rootPointer->next->data);
}


//Füge Element am Ende der Listei
void addLast(linkedList *list,int element){
}
//Füge Element am Anfang der List
void addFirst(linkedList *list,int element){
    if(rootPointer == NULL){
        list->first = malloc(sizeof(struct node));
        list->first->data = element;
        list->last = list->first;
        rootPointer = list->first;

    }else {
        list->last->next = malloc(sizeof(struct node));
        list->last->data = element;
        list->last = list->last->next;

    }

}