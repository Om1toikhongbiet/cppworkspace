#include<stdio.h>
#include<string.h>
int main () {
    char xau[1000];
    scanf ("%s",xau);
    int dodai = strlen (xau);
    int danhdau[100]={0};
    for (int i =0; i<dodai-1;i+=2){
        int hangchuc= xau[i]-'0';
        int hangdonvi= xau[i+1]-'0';
        int sothu = hangchuc*10 + hangdonvi;

        danhdau[sothu]=1;

    }
    for (int i=10; i<100;i++){
        if (danhdau[i]==1){
            printf ("%d ",i);
        }
    }
    printf("\n");
}