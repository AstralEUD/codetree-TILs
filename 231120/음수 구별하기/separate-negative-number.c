#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a<0) {
        printf("%d\nminus",a);
    } else {
        printf("%d",a);
    }
    return 0;
}