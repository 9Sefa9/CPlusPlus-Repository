#include <stdio.h>

struct liste{
    int HI;
    int *ptr;
};
typedef struct liste *listPtr;
typedef struct liste list;
int main(){
   list list,*listPtr;
    list.HI = 5;

    //ohne Pointer !
    printf("Innerer Wert: %d\n",list.HI);
    printf("Äußerer Wert: %d\n",&list.HI);

    //das ganze jetzt mit pointer!
    listPtr = &list;
    printf("Dieser Syntax: %d\n",listPtr->HI);
    printf("Ist das selbe wie: %d\n",(*listPtr).HI);

    return 0;
}
