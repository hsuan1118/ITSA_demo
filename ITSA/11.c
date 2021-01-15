#include<stdio.h>

int main(){
    int c,r;
    while(scanf("%d%d", &c, &r)!=EOF){
        int m[c][r];
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                scanf("%d", &m[i][j]);
            }
        }

        int ans[r][c];
        int oc=0, or=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                ans[i][j]=m[or][oc];
                or++;
            }
            oc++;
            or = 0;
        }

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf("%d",ans[i][j]);
                if((j+1)!=c){
                    printf(" ");
                }
        }
        printf("\n");
        }
    }

    return 0;
}
