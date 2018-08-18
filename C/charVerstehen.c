#include <stdio.h>

void swap(int x, int y);

int main(void) {
    //strings werden als character array gesehen. ich werde jetzt versuchen etwas zu testen.
   // char h[] = "Hello world\n";
   // printf("%s",h);

   // char *h2[] ={"blup,blurp,blpru"};
   // printf("c und h2: %c\n",h2);
   // printf(" ?: %s\n", h2[1]);
   // return 0;

    int a = 100;
    int b = 200;

    printf("Before swap, value of a : %d\n", a );
    printf("Before swap, value of b : %d\n", b );

    /* calling a function to swap the values */
    swap(a, b);

    printf("After swap, value of a : %d\n", a );
    printf("After swap, value of b : %d\n", b );

    return 0;

}
void swap(int x, int y) {

    int temp;

    temp = x; /* save the value of x */
    x = y;    /* put y into x */
    y = temp; /* put temp into y */

}
