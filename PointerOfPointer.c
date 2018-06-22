#include <stdio.h>
#include <malloc.h>

void allocate(int **p);

int main(){

    int* p = NULL;
    allocate(&p);
    *p = 42;
    free(p);

    return 0;

}
void allocate(int** p)
{
    *p = malloc(sizeof(int));
}
