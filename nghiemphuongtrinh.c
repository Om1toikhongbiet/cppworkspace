#include<stdio.h>
#include <math.h>
int main ()
 { 
    
   

    float a,e, b;
   
    scanf("%f%f%f",&e,&a,&b);
    if (e==0&&b==0&&a==0){
        return 0;
    }else{

   
    if(e==0)
    {
        
    if (a==0&&b!=0)
    {
        printf("NO");
    }
        else 
        {if(b==0&&a==0)
            {
            printf("Vo so nghiem");
            }else 
                {if(a!=0)
                    { float x = -b/a;
                        printf("%.2f",x);
                    }

                }
                        

        }
    
    }else{
        float delta = a*a -4*e*b;
        if ( delta < 0){
            printf ("NO");
        }else{ float x1=(-a+sqrt(delta))/(2*e), x2=(-a-sqrt(delta))/(2*e);
            if (x1==x2){
                printf("%.2f",x1);
            }else{
                if(x1<x2){
                    printf ("%.2f %.2f",x2,x1);

                }else {
                    printf ("%.2f %.2f",x1,x2);
                }
            }
            
            
        }
       
    }
}}


    
   

   
    
    





































        
    


