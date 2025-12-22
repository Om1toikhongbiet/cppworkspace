#include <stdio.h>
int main () {
    int T;
    scanf("%i",&T);
    for (int testcase=1; testcase<=T ;testcase++){
    double n;
    
    
    scanf("%lf",&n);
    double x=1/n;
    printf("%.15lf\n",x);
}
    return 0;
}
