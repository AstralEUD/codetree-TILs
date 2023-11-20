#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a < 5) {
        printf("%d\ntiny",a*a);
    } else {
        printf("%d",a);
    }
    return 0;
}