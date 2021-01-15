#include <stdio.h>

int main(){
    int month, data;
    scanf("%d%d", &month, &data);

    if( (month == 1 && data >= 21) || (month == 2 && data <= 18) ){
        printf("Aquarius\n");
    }
    else if( (month == 2 && data >= 19) || (month == 3 && data<=20) ){
        printf("Pisces\n");
    }
    else if( (month == 3 && data >= 21) || (month == 4 && data<=20) ){
        printf("Aries\n");
    }
    else if( (month == 4 && data >= 21) || (month == 5 && data<=21) ){
        printf("Taurus\n");
    }
    else if( (month == 5 && data >= 22) || (month == 6 && data<=21) ){
        printf("Gemini\n");
    }
    else if( (month == 6 && data >= 22) || (month == 7 && data<=22) ){
        printf("Cancer\n");
    }
    else if( (month == 7 && data >= 23) || (month == 8 && data<=23) ){
        printf("Leo\n");
    }
    else if( (month == 8 && data >= 24) || (month == 9 && data<=23) ){
        printf("Virgo\n");
    }
    else if( (month == 9 && data >= 24) || (month == 10 && data<=23) ){
        printf("Libra\n");
    }
    else if( (month == 10 && data >= 24) || (month == 11 && data<=22) ){
        printf("Scorpio\n");
    }
    else if( (month == 11 && data >= 23) || (month == 12 && data<=21) ){
        printf("Sagittarius\n");
    }else if( (month == 12 && data >= 22) || (month == 1 && data<=20) ){
        printf("Capricorn\n");
    }

    return 0;
}
