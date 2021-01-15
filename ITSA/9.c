#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int tmp = 0, total = 0;
    while(tmp<=n){
        total += tmp;
        tmp+=3;
    }

    printf("%d\n", total);

    return 0;
}
