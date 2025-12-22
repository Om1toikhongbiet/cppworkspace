#include<stdio.h>
#include<string.h>
 int main () {
    int testcase;
    scanf("%i",&testcase);
    for( int t=1;t<=testcase;t++){
    int so1;
    long long so;
    int check = 0;
    scanf("%lli",&so);
    while(so>9){
          so1=so%10;
          so/=10;
          if (so1>= so%10){
            continue;
          }else{
          
            check=1;
            break;
          }

    


    }
    if(check==0){
    printf("YES\n");
    
  
 }else{
    printf("NO\n");
 }}}