#include<stdio.h>
#include<string.h>
int main () {
    char s[100];
    long long so;
    int testcase;
    scanf("%d",&testcase);
    for( int t=1;t<=testcase;t++){
    scanf("%lld",&so);
    sprintf(s,"%lld",so);
    int len = strlen(s);
    int check=0;
    for (int i=0;i<len;i++){
        s[i]=s[i]-'0';
    }
    for(int i=0;i<len;i++){
        if(s[i]%2!=0){
            printf("NO\n");
            check=1;
            break;
           
        }
    }
    if(check==0){
        printf("YES\n");
    }


}}