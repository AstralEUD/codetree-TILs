#include <stdio.h>

int arr[100] = {0};

int suwol(int n) {
    int i, t , cnt, v, q=0;
    i=0; v=n-1;cnt=0;
    if((n==0) || (n==1)) {
        arr[n] = 1;
        return 1;
    }
    while ((i<=n-1) && (v>=0)) {
        q=arr[i] * arr[v];
        cnt+=q;
        i++;
        v--;
    }
    arr[n] = cnt;
    return cnt;
}

int main() {
    int n, i, t;
    scanf("%d",&n);
    for (i=0; i<=n; i++) {
        t = suwol(i);
    }
    printf("%d",t);
    return 0;
}