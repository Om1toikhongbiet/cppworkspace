#include<stdio.h>
#include<string.h>
char s1[101];
int main () {
    gets(s1);
    char b[101];
    gets(b);
    int len = strlen(s1);
    char *token = strtok(s1, " ");
    while ( token != NULL ) {
      if(  strcmp(token, b)!=0){
        
      
        printf("%s ", token);}
        token = strtok(NULL, " ");
    }}