#include<stdio.h>
#include<conio.h>
int palid(int sayi){
		int ters,tamp=0,tamp2;
		tamp2=sayi;
		while(sayi>0){
		
		ters=sayi%10;
		tamp=tamp*10+ters;
		sayi=sayi/10;	
			
	}
	if(tamp2==tamp){return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int sayi,tamp,pal;
	printf("sayi giriniz:");
	scanf("%d",&sayi);
	pal=palid(sayi);
	if(1==pal){
		printf("palidrom sayidir ");
	}
	else{
		printf("palidrom sayi degildir ");
	}

	
	return 0;
	
	
}
