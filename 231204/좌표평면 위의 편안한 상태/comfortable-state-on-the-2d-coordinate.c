#include <stdio.h>

int main() {
    int arr[1005][1005] = {0};
    int n, i, p, q, x, y, v, z, cnt=0;
    scanf("%d",&n);
    for (p=1; p<=n; p++) {
        scanf("%d %d",&x,&y);
        arr[x][y] = 1;
        cnt=0;
        for (v=1; v<=n; v++) {
            for (z=1; z<=n; z++) {
                i=0;
                if (arr[v][z+1] == 1) {
                    i++;
                } 
                if (arr[v][z-1] == 1) {
                    i++;
                }
                if (arr[v+1][z] == 1) {
                    i++;
                }
                if (arr[v-1][z] == 1) {
                    i++;
                }
                if (i==3) {
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}