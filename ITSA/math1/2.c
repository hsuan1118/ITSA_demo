#include <stdio.h>

int main(){
    double bottom, height;

    scanf("%lf%lf", &bottom, &height);
    float ans = bottom * height /2 ;
    printf("%.1f\n", ans);

    return 0;
}
