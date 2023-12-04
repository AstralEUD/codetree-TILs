#include <stdio.h>
int arr[1005][1005] = {0};
int cnt=0;

void check_2 (int v, int z) {
    int i;
    if (arr[v][z] == 1) {
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
            cnt--;
        }
    }
    return;
}


void check (int v, int z, int q){
    int i;
    if (arr[v][z] == 1) {
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
    return;
}

int main() {

    int n, i, p, q, x, y, v, z;
    scanf("%d",&n);
    for (p=1; p<=n; p++) {
        scanf("%d %d",&x,&y);
        x++; y++;
        check_2(x+1,y);
        check_2(x-1,y);
        check_2(x,y+1);
        check_2(x,y-1);

        arr[x][y] = 1;
        check(x,y,p);
        check(x+1,y,p);
        check(x-1,y,p);
        check(x,y+1,p);
        check(x,y-1,p);

        printf("%d\n",cnt);
    }
    return 0;
}