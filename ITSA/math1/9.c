#include <stdio.h>

int main(){
    int a, ans=1;
    scanf("%d", &a);
    if( a > 31 ){
        printf("Value of more than 31\n");
    }
    else{
        ans = ans << a ;
        printf("%d\n", ans);
    }

    return 0;
}
