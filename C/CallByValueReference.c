#include<stdio.h>
void swap(int x, int r);
void swap2(int *x, int *r);
int main(void){

    //call by value:
    int a = 100;
    int b = 200;

    printf("call by Value :: Before swap, value of a : %d\n", a );
    printf("Before swap, value of b : %d\n", b );

    swap(a, b);

    printf("After swap, value of a : %d\n", a );
    printf("After swap, value of b : %d\n", b );
    int *ptr1,*ptr2;
    ptr1 = &a;
    ptr2 = &b;
    //call by Reference
    printf("call by Reference :: Before swap, value of a : %d\n", a );
    printf("Before swap, value of b : %d\n", b );

    swap2(ptr1,ptr2);

    printf("After swap, value of a : %d\n", a );
    printf("After swap, value of b : %d\n", b );
    return 0;

}
void swap2(int *x, int *r){
    *x=23;
    *r=24;
}
void swap(int x, int y) {

    int temp;

    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */

}