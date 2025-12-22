#include <stdio.h>
int main () {
    
    int ngay ;
    scanf ("%i",&ngay);
    if (ngay>1000){
        return 1;
        
    }else{
    int nam = ngay / 365 ;
    int tuan = (ngay-nam*365 )/7;
    float tuandu= (ngay-nam*365 )%7;
    int thu = ngay- nam*365 - tuan*7 ;
   
    printf ("%i %i %i",nam , tuan , thu );}
    return 0;
}