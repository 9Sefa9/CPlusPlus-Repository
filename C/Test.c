#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>
#include <malloc.h>

//-----------function prototyping-------------
/*int getAddition(int a,int b){
    return a+b;
}
int main(){
    int(*addition)(int,int);
    addition = &getAddition;
    printf("functionspointer mit malloc: %d",addition(2,3));
    return 0;
}*/
//-----------Manual Management in C--------------------------------
int main(void){
    int *p1= malloc(sizeof(int));
    *p1 = 5;
    //int *p2=p1;
    free(p1);
    printf("Invoking free does NOT assign null to any pointers.\n You have to take care of that manually.\n");
    printf("p1: %i\n",*p1);
    //printf("p2: %i\n",*p2);
    return 0;
}
//------------------------------------------------------
