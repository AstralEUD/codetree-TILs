#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d",&a,&b);
    b=b*100*100;
    c=b/(a*a);
    if (c>=25) {
        printf("%d\nObesity",c);
    } else {
        printf("%d",c);
    }
    return 0;
}