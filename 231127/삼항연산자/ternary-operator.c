#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, c;
    scanf("%d",&a);
    c = a == 100 ? 1 : 0;
    if (c==0) {
        printf("failure");
    } else {
        printf("pass");
    }
    return 0;
}