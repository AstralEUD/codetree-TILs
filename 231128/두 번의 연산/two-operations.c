#include <stdio.h>

int main() {
    int a;
    if (a%2 == 0) {
        a+=3;
    }

    if (a%3 == 0) {
        a/=3;
    }
    return 0;
}