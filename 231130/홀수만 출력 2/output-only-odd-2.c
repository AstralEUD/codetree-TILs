#include <stdio.h>

int main() {
    int a, b, i;
    scanf("%d %d",&b,&a);
    for (i=b; i>=a; i--) {
        if (i%2 == 1) {
            printf("%d ",i);
        }
    }
    return 0;
}