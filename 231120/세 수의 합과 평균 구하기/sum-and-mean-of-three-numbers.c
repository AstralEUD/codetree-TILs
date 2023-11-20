#include <stdio.h>

int main() {
    float a, b, c;
    sscanf("%f %f %f",&a,&b,&c);
    printf("%.0f %.0f",a+b+c,(a+b+c)/3);
    return 0;
}