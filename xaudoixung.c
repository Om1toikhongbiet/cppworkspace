#include<stdio.h>
#include<string.h>
 char a[1000005];
int main (){
    gets(a);
    int len = strlen (a);
    printf ("%d", len-1);
}