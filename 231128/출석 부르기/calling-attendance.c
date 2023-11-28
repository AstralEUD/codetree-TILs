#include <stdio.h>

int main() {
    int a; 
    scanf("%d",&a);
    if (a==1) {
        printf("John");
    } else  if (a==2) {
        printf("Tom");
    } else {
        printf("Paul");
    }
    return 0;
}