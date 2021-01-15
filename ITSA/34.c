#include <stdio.h>


int main(){
    int s;
    float h, ans=0;
    scanf("%f%d", &h, &s);
    if(s==1){
        ans = (h-80)*0.7;
    }
    else{
        ans = (h-70)*0.6;
    }

    int tmp = (int)ans * 100;
    printf("%d\n", tmp);
    printf("%.1f\n", ans);

    return 0;
}
