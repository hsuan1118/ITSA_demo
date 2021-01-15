#include <stdio.h>

int main(){
    int n;
    while(scanf("%d", &n)!=EOF){
        double ans = n*1.6;
        printf("%.1lf\n", ans);
    }

    return 0;
}
