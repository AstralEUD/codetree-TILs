#include <stdio.h>

int suwol(int n) {
    int i, t , cnt, v, q=0;
    i=0; v=n-1;cnt=0;
    if((n==0) || (n==1)) {
        return 1;
    }
    while ((i<=n-1) && (v>=0)) {
        q=suwol(i) * suwol(v);
        cnt+=q;
        i++;
        v--;
    }
    return cnt;
}

int main() {
    int n, i, t;
    scanf("%d",&n);
    t = suwol(n);
    printf("%d",t);
    return 0;
}