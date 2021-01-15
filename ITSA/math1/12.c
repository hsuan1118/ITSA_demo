#include<stdio.h>

int main(){
    int time = 0;
    double dist;
    scanf("%lf", &dist);

    //speed: self = 100, hua = 76.2; 100-76.2 = 23.8
    dist *= 100; //change to cm

    while(dist>0){
        dist -= 23.8;
        time++;
    }

    printf("%d\n", time);

    return 0;
}
