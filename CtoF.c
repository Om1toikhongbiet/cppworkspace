#include <stdio.h>
#include <math.h>
#include<string.h>

int main () {
    int testcase;
    scanf("%i",&testcase);
    for( int t=1;t<=testcase;t++){
        int le=0;
        int chan=0;
        char a[20];
        int so;
        int temp;
        scanf("%i",&so);
        sprintf(a,"%i",so);
        int len = strlen(a);
        for (int i=0;i<len;i++){
            a[i]=a[i]-'0';
        }
      
        for(int i = 0; i < len ; i++) {
            if(a[i]%2==0){
                chan++;
            }
          else{
                le++;
          }
        }
        printf("%i %i\n",le,chan);
    }}