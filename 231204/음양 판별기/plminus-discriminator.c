#include <stdio.h>

int main() {
    int a, n, i = 0;
    scanf("%d",&n);
    while (i<n) {
        scanf("%d",&a);
        if (a>0) {
            printf("plus\n");
        } else if (a<0) {
            printf("minus\n");
        } else {
            printf("zero\n");
        }
        i++;
    }
    return 0;
}