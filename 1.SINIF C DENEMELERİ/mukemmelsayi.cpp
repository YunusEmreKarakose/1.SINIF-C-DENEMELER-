#include<stdio.h>
#include<math.h>



int main(){
	int sayi,bolen=1,bolentop=0,i;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	
	while(bolen<sayi){
		if(sayi%bolen==0){
			bolentop=bolentop+bolen;
	      if(bolentop==sayi){
	      	i=1;
		  }
		  
		}
	  
	bolen++;
	}
		if(i==1){
			printf("%d mukemmel sayidir.",sayi);
		}
		else{
			printf("%d mukemmel degil",sayi);
		}
	return 0;
}
