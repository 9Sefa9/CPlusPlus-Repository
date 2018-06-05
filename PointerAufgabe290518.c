#include<stdio.h>
#include <stdbool.h> //das sind präprocessor direktive

bool equals(int sizeOfA,int* a,int sizeOfB,int* b);
bool equalsAlternativ(int sizeOfA,int* a,int sizeOfB,int* b);
bool equalsLehrerVersion(int *content, int* toCompare,int length);
int main(void){
    int a[] ={3,1,2,4,7};
    int b[] ={3,1,2,4,7};

    int *pointerToA;
    int *pointerToB;

    pointerToA = a;
    pointerToB = b;

    printf("first version / is a equal b ? : %s\n", equals(5,pointerToA,5,pointerToB) ? "true":"false");

    pointerToA = &a[0];
    pointerToB = &b[0];

    printf("second version / is a equal b ? : %s\n", equalsAlternativ(5,pointerToA,5,pointerToB) ? "true":"false");



}
//vorsichtig sein. Denndas macht eignetlich der Compiler. Sollte lieber nciht verwenet weden.

bool equals(int sizeOfA, int *a,int sizeOfB, int *b){
    if(sizeOfA == sizeOfB ){
        for(int i = 0 ;i<sizeOfA;i++){
            if(a[i] != b[i]){
                return false;
            }
        }
    }
    return true;
}
bool equalsAlternativ(int sizeOfA, int *a,int sizeOfB, int *b){
    if(sizeOfA == sizeOfB ){
        for(int i = 0 ;i<sizeOfA;i++){
            if(*(a+i) != *(b+i)){
                return false;
            }
        }
    }
    return true;
}
bool equalsLehrerVersion(int *content, int* toCompare,int length){
        bool result = true;
        for(int i = 0;i<length;i++){
            //result = result & geht nicht . das hier aber schon: result = result && ..
            result &= result & *(content+i) == *(toCompare+i);//nimm den wert an der stelle, die ocntent zeigt.
        }
        return result;
}