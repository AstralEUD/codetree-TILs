#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a>=100) {
        printf("vapor");
    } else if (a<0) {
        printf("ice");
    } else {
        printf("water");
    }
    return 0;
}