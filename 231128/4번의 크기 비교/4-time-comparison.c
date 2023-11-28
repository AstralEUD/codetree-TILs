#include <stdio.h>

int main() {
    int a, i;
    int arr[100];
    scanf("%d",&a);
    scanf("%d %d %d %d",&arr[0], &arr[1], &arr[2], &arr[3]);
    for (i=0; i<4; i++) {
        printf("%d\n",a>arr[i]);
    }
    return 0;
}