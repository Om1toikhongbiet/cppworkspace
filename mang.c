#include <stdio.h>
#include <math.h>
int songuyento (int x){
    for ( int i = 2 ; i < x*x ; i++)
    {
        if ( x % i == 0)
        {
            return 0;
        }
        return 1;
    }
}
int matrix [4][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}};
int main ()  
{
    for ( int i = 0 ; i < 4 ; i++)
    {
        for ( int j = 0; j < 4 ; j++)
        {
            if ( i<=j)
            {
                int so = matrix [i][j];
                songuyento(so);
                if ( songuyento(so)==1)
                {
                    printf ("%d ", so);

            }
            
        }
    }

}
}