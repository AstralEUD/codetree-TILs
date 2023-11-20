#include <stdio.h>

int main() {
    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    printf("%.0f\n%d",a+b+c,(int)(a+b+c)/3);
    return 0;
}