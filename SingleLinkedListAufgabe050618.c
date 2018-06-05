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


int main(void){
    linkedList list;
    addFirst(&list,2);
}


//Füge Element am Ende der Listei
void addLast(linkedList *list,int element){
}
//Füge Element am Anfang der List
void addFirst(linkedList *list,int element){
    if((*list).first ==NULL){
        list ->first = malloc(sizeof(struct node));
        list->first->data = element;
        list->last = list->first;

    }else {
        list->last->next = malloc(sizeof(struct node));
        list->last->data = element;
        list->last = list->last->next;
    }
    printf("%d\n",*list);

}