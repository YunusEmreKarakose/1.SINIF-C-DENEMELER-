#include<stdio.h>
//Girilen sayinin asal olup olmamasýný kontrol eder
int asalmi(int sayi){//Sayi asal ise 1 deðilse 0 döndürür
	int i;
	for(i=2;i<sayi;i++){
		if(sayi%i==0){
		return 0;
		}
	}
	return 1;
}

int main (){
	int n;
	printf("sayi giriniz:");
	scanf("%d",&n);
	
	if(asalmi(n )==0){
		printf("asal degildir");
	}
	
	else{
		printf("bu sayi asaldir");
	}
return 0;
}



