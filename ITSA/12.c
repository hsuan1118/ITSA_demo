#include<stdio.h>

int cal(int x){
    if(x<=1){
        x++;
    }
    else{
        x = cal(x-1) + cal(x/2);
    }
    return x;
}

int main(){
    int x;
    scanf("%d", &x);

    printf("%d\n", cal(x));

    return 0;
}
