#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main (){
    
    int chu = 0, so = 0, khac = 0;
    char tu [1000];
 
    gets(tu);
    for ( int i =0; i<strlen(tu);i++){
        if (isdigit(tu[i])){
            so++;}
        else if (isalpha(tu[i])){
            chu++;}
        else {
            khac++;}

        }
         printf ("%d %d %d", chu, so, khac);
    }
