#include <stdio.h>

int main(){
    int x,y;
    scanf("%d%d", &x, &y);
    int tmp = (x*x)+(y*y);
    if(tmp>=10000){
        printf("outside\n");
    }
    else{
        printf("inside\n");
    }

    return 0;
}
