#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main () {
  
    int testcase;
    scanf("%d",&testcase);
     getchar();

    for( int f=0; f<testcase; f++){
          int kitula=0;
       
    int check= 0;
    char so[10000];
    int freq[10]={0};
    gets(so);
    int len = strlen(so);
    if(so[0]=='0'){
        printf("INVALID\n");
        continue;
    }
    for ( int i = 0; i< len; i++){
        
        if ( so[i]>='0' && so[i]<='9'){
            freq[so[i]-'0']++;
        }else{ kitula=1;
            break;
           
            
        }



    }
    if ( kitula==1){
        printf("INVALID\n");
        continue;
    }
    for ( int i =0; i < 10; i++){
        if ( freq[i]>0){
            continue;
        }else{
        
            check=1;
            
        }
    }
    if (check==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
}}
