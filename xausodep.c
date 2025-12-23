#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>


int main () {
    int testcase;
    scanf ("%d\n", &testcase);
    for (int t =0; t<testcase;t++){
        int check =0;
        int prep=0;
     
    char a[505];
    gets (a);
    int len =strlen(a);
    for( int i =0; i<len;i++){
        if(a[i]=='1' || a[i]=='4'||a[i]=='6'||a[i]=='8'||a[i]=='9'){
        
            printf("NO\n");
            prep=1;
            break;
        }}
    if (prep==1){
        continue;}
     for (int i =0; i<len/2;i++){
        if(a[i]!=a[len - i -1]){
            printf ("NO\n");
                 check=1;
            break;
       
        }
        
    }
   if (check ==0){
        printf ("YES\n");
   }

}}