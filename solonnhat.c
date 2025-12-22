#include<stdio.h>
int main () {
    int testcase;
    scanf("%i",&testcase);
    for(int l=1;l<=testcase;l++){
    int sophantu;
    scanf("%i",&sophantu);
    int a[sophantu+1];
    int b[sophantu+1];
    for (int f =0; f<sophantu;f++){
        scanf("%i",&a[f]);
        b[f]=a[f];
    }
    for (int f =0; f<sophantu;f++){
        int temp;
        if(a[f]>=a[f+1]){
            temp=a[f];
            a[f]=a[f+1];
            a[f+1]=temp;
            

        }else{continue;

        }
    }
    printf("%i \n",a[sophantu-1]);
    for(int f=0;f<sophantu;f++){
        if(a[sophantu-1]==b[f]){
            printf("%i ",f );
        }
    }
    printf("\n");
}
}