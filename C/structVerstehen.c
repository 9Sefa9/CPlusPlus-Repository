#include <stdio.h>
#include <stdbool.h>

typedef struct Result {
    char value[20];
    bool success;
}Result;

Result doSomething();
int main(){
    Result result;
    result.success = false;
    printf("vorher: %d\n",result.success);
    Result r = doSomething();
    result = r.success;
    printf("nachher: %d\n",result.success);
}
Result doSomething (void) {
    Result res;
    res.success = true;
    return res;
}