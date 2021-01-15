#include <stdio.h>

int main(){
    double top, bottom, height;

    scanf("%lf%lf%lf", &top, &bottom, &height);
    float ans = ( top + bottom ) * height /2 ;
    printf("Trapezoid area:%.1f\n", ans);

    return 0;
}
