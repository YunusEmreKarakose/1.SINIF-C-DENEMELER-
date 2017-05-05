#include<stdio.h>


int main(){
	int i,sinir,sayi=1;
	
	scanf("%d",&sinir);
	printf("tau sayilar\n");
	while(sayi<sinir){
		int bolensayi=0;
		for(i=1;i<=sayi;i++){
			
			if(sayi%i==0){ bolensayi++;		}
			
		}
		
		if(sayi%bolensayi==0){	printf("%d\n",sayi);	}
		sayi++;
	}

	return 0;
}


