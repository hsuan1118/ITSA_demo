#include<stdio.h>

int main(){
    int a, day, hour, min, sec;
    scanf("%d", &a);


    printf("%d days\n", a/86400);
    a = a%86400;

    printf("%d hours\n", a/3600);
    a = a%3600;

    printf("%d minutes\n", a/60);
    a = a%60;

    printf("%d seconds\n", a);


    return 0;
}
