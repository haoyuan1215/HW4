#include <stdio.h>
int main()   {
    int chess[8][8]={{0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,0,0,0,0,0,0,0},
                     {0,2,2,2,1,0,0,0},
                     {0,0,0,1,2,0,0,0},
                     {0,0,0,0,2,0,0,0},
                     {0,0,0,0,2,0,0,0},
                     {0,0,0,0,0,0,0,0}};
    for (int i=0;i<8;i++) {
        for(int j=0;j<8;j++) {
            printf("%d",chess[i][j]);
        }
        printf("\n");
    }
    int i,j,n=1;
    scanf("%d%d",&i,&j);
    if(chess[i][j]==0) {
        printf("ªÅ");
    }
    if (chess[i][j]==1) {
        for(int dx=-1;dx<=1;dx++) {
            for(int dy=-1;dy<=1;dy++) {
                if(chess[i+dx][j+dy]==2) {
                    while(chess[i+n*dx][j+n*dy]!=0) {
                        if(i+n*dx<0||i+n*dx>=8||j+n*dy<0||j+n*dy>=8||chess[i+n*dx][j+n*dy]==1) {
                            n=0;
                            break;
                        }
                        else {
                            n++;
                        }
                    }
                    if(n>0) {
                        printf("%d(%d,%d)\n",n,dx,dy);
                    }
                    else{
                        printf("0");
                    }
                }
            }
        }
    }
    if (chess[i][j]==2) {
        for(int dx=-1;dx<=1;dx++) {
            for(int dy=-1;dy<=1;dy++) {
                if(chess[i+dx][j+dy]==1) {
                    while(chess[i+n*dx][j+n*dy]!=0) {
                        if(i+n*dx<0||i+n*dx>=8||j+n*dy<0||j+n*dy>=8||chess[i+n*dx][j+n*dy]==2) {
                            n=0;
                            break;
                        }
                        else {
                            n++;
                        }
                    }
                    if(n>0) {
                        printf("%d(%d,%d)\n",n,dx,dy);
                    }
                    else {
                        printf("0");
                    }
                }
            }
        }
    }
    return 0;
}
