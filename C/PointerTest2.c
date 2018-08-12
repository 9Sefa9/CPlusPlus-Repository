#include <stdio.h>
int a = 3;

void foo(int x);

int main(void) {
    foo(a++ + 10);
}
void foo(int x) {
    printf("a:%i x:%i", a, x);
}