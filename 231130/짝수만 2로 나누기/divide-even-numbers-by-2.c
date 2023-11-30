#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i, x;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&x);
        if (x%2 == 0) {
            printf("%d ",x/2);
        } else {
            printf("%d ",x);
        }
    }
    return 0;
}