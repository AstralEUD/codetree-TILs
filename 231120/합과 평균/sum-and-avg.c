#include <stdio.h>

int main() {
    float a, b;
    scanf("%f %f",&a,&b);
    printf("%.0f %.1f",a+b,(a+b)/2);
    return 0;
}