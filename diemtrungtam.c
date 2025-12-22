#include<stdio.h>
#include<string.h>
int a[1000005];
int len;
int xuathien(){
    for ( int i=0;i<len;i++){
        int count =0;
        for(int j=0; j<len;j++){
            if(a[i]!=-1&&a[i]==a[j]){
                count++;
                a[j]=-1;
            

            }

            if(a[i]==-1){
                break;
            }
        }if(count==len-2){
            return 0;
        }
    }
    return 1;



}
int main () {
    int testcase;
    scanf("%i",&testcase);
    len = testcase*2-2;
    for(int i =0; i<len;i+=2){
        int diem1,diem2;
        scanf("%i %i",&diem1,&diem2);
        a[diem1]++;a[diem2]++;

    }


if(xuathien()==0){
    printf("NO");
}else{
    printf("YES");
}
}