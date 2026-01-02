#include<stdio.h>

int main() {
	int tonhat;
	
	scanf("%d", &tonhat);
	for(int so=1;so<=tonhat;so++){
        int tong = 0;
	for (int i = 1; i * i <= so; i++) {
        if(so==i){
            tong-=i;
        }
		if (so % i == 0) {
			tong += i;
			if (i != so / i&&so/i!=so) {  // Nếu là ước số kép, chỉ cộng một lần
				tong += so / i;
			}
		}
	}
	

    if( tong==so){

    
	printf("%d ", tong);
	
}   }}