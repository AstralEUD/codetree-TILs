#include <stdio.h>

int main() {
    int n, m, k, i, p, q, v, o;
    char arr[15][15];
    scanf("%d %d %d",&n,&m,&k);
    for (p=0; p<n; p++) {
        scanf("%s ",arr[p]);
    }
    for (p=0; p<n; p++) {
        for (o=0; o<k; o++) {
            for (q=0; q<m; q++) {
                for (v=0; v<k; v++) {
                    printf("%c",arr[p][q]);
                }
            }
            printf("\n");
        }
    }
    return 0;
}