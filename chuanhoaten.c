#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main () {
    int testcase;
    scanf("%d",&testcase);
     getchar();
     for ( int f=0; f<testcase; f++){
        
    char dauvao[1000];
    char tach[1000];
    gets(dauvao);
     char *token = strtok(dauvao, " ");
     int lentok= strlen(token);
     char temp[lentok+1];
     for ( int i=0 ; i < lentok ;i++){
        token[i]= toupper(token[i]);

     }
     strcpy(temp, token);
     token=strtok(NULL, " ");
     while (token !=NULL){
        
        for ( int i =0; i< strlen(token); i++){
            token[i]= tolower ( token[i]);
        }
        token[0]= toupper(token[0]);
        printf ("%s", token);
        char *next=strtok(NULL," ");
        if(next !=NULL){
            printf(" ");
        }
        token= next;
     }
     
     printf (", %s\n", temp);
     

    

       }
   
   
}