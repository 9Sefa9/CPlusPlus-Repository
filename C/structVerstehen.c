#include <stdio.h>
#include <stdbool.h>

typedef struct Result {
    char value[20];
    bool success;
}Result;

Result doSomething();
int main(){
    Result result;
    printf("vorher: %d\n",result.success);
    Result r = doSomething();
    printf("nachher: %d\n",r.success);
}
Result doSomething (void) {
    Result res;
    res.success = true;
    return res;
}