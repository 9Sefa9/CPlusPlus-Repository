#include <stdio.h>
void printChar(int charArraySize ,char *names);
int main(void){
    //array gegeben:
    char *names[] = {"David","Matt","Christopher"};
    char *ptr;
    ptr = names[0];
    printChar(22,ptr);

}
void printChar(int charArraySize, char *names){

    for(int i = 0 ; i<charArraySize;i++){
        printf("%i te element: %c\n",i,names[i]);
    }
}