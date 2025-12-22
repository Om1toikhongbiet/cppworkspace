#include<stdio.h>
int main () {
    int testcase;
    scanf("%d",&testcase);
    for( int t=1;t<=testcase;t++){
    long long so;
    int le=0,chan=0;
    scanf("%lld",&so);
    if(so%2==0){
        printf("NO\n");
 
}
else{
       while(so>0){
            int so1=so%10;
        so/=10;

    
    if(so1%2==0){
    chan++;
}else{
    le++;
    
    }}
       

        if(chan>le){
            printf("NO\n");
        }else{
            printf("YES\n");
        }
       
}
}}