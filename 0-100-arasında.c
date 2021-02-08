#include <stdio.h>
int main(){
	
	int a;
	
	printf("Bir sayi giriniz...");
	scanf("%d",&a);
	
	if(0<a<100){
		printf("%d sayisi 0 ile 100 arasindadir...",a);
	}
	else{
		printf("%d sayisi 0 ile 100 arasinda degildir...",a);
	}
	
	
	return 0;
}
