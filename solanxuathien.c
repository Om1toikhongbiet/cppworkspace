#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main (){
    char sonamtao[100][50];
    int dem[100]={0};
    int vitrisonamtao=0;
    char s[1000];
    gets(s);
    for ( int i = 0; i< strlen(s);i++){
       s[i]= tolower(s[i]);
    }
    char *token = strtok(s, " ");
    while (token!=NULL){
        int bookmark = -1;
        for( int i=0; i<vitrisonamtao;i++){
            if(strcmp(sonamtao[i],token)==0){

                bookmark=i;

                break;
                
            }}
            if(bookmark == -1){



           
                strcpy(sonamtao[vitrisonamtao],token);
                dem[vitrisonamtao]=1;
                vitrisonamtao++;
        }else
        {
            dem[bookmark]++;
        }
        token = strtok(NULL," ");
    }
    for ( int i =0; i< vitrisonamtao;i++){
        printf ("%s %d\n",sonamtao[i],dem[i]);
    }


}

