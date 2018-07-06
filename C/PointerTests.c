#include<stdio.h>
void ersteMoeglichkeit(int test1[4] ,int test2[4]);
void zweiteMoeglichkeit(int test1[4] , int test2 [4]);
int main(void){

    int test1 [] ={2,3,4,5};
    int test2 [] ={4,1,3,6} ;

   // ersteMoeglichkeit(test1,test2);
    zweiteMoeglichkeit(test1,test2);
    return 0;
}
void ersteMoeglichkeit(int test1[],int test2[]){
    int *pointerToTest1,*pointerToTest2;
    pointerToTest1 = test1;
    pointerToTest2 = test2;

    for(int i = 0 ;i<4;i++){
        printf("element of test1 %i ist : %d\n",i,pointerToTest1[i]);

    }
    for(int i = 0 ;i <4; i++){
        printf("element of test2 %i ist : %d\n",i,pointerToTest2[i]);
    }
}
void zweiteMoeglichkeit(int test1[],int test2[]){
    int *pointerToTest1,*pointerToTest2;
    pointerToTest1 = &test1[0];
    pointerToTest2 = &test2[0];

    //bedies funnktioniert
    for(int i = 0 ;i<4;i++){
        printf("element of test1 %i ist : %d\n",i,*(pointerToTest1+i));

    }
    for(int i = 0 ;i <4; i++){
        printf("element of test2 %i ist : %d\n",i,pointerToTest2[i]);
    }
}