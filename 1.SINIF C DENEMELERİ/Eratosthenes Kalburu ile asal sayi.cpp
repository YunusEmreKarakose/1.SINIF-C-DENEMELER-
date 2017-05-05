#include<stdio.h>

/*Eratosthenes Kalburu ile belli bir tam sayýya kadar olan asal sayýlar rahatlýkla bulunabilinir.
 Öncelikle bi sayýya kadar olan asal sayýlarý bulmak için boyutu o sayý kadar olan ve her elemaný
 1 olan bir integer dizi oluþturulur
 
 Dizinin ikinci elemaný 1 olarak kalýr ve dizinin 2'nin tüm katlarý olan elemanlarý 0 yapýlýr.
 Dizinin üçüncü elemaný 1 olarak kalýr ve dizinin 3'ün tüm katlarý olan elemanlarý 0 yapýlýr.
 Devamýnda dizinin 1 olan elemaný alýnýp istenilen sayýya kadar olan katlarý 0 yapýlýr.
 
 Sonuç olarak elde edilen dizide deðeri 1 olan indisin deðeri bize istenilen sayýya kadar olan 
 asal sayýlarý verir.
*/
int kat(int a,int dizi[],int BOYUT);//indisi a nýn katý olan dizi elemanlarýný 0 yapar
int bul(int dizi[],int BOYUT);//Asal sayýlarý bulup yazýdýr

int main(){
	int BOYUT;
	printf("Hangi sayiya kadar olan asal sayilar bulunsun?... ");
	scanf("%d",&BOYUT);
	int dizi[BOYUT];
	int i;
	for(i=2;i<BOYUT;i++){dizi[i]=1;	}//Bütün elemanlarý 1 olan dizi oluþturuldu.
	bul(dizi,BOYUT);
}
int kat(int a,int dizi[],int BOYUT){
	int b,i=2;
	while(i<BOYUT){ 
	b=a*i; 
	if(b<BOYUT){dizi[b]=0;} 
	i++;	}
}
int bul(int dizi[],int BOYUT){
	int i=2;
	
	while(i<BOYUT){
	
	if(dizi[i]==1){ kat(i,dizi,BOYUT);	}/* Burdaki if olmadanda çalýþýr fakat bu if bulunmazsa
	                                       programýn Çalýþmasý daha uzun sürer örn:4, 2nin katý 
										   olmasýna raðmen 4ü kat fonksiyonuna gönderir ve zaten 
										   0 olan elemanlar gereksiz yere tekrar 0 a eþitlenir*/
		i++;	
		}
	for(i=0;i<BOYUT;i++){if (dizi[i]==1){ printf("%d\n",i);	} }
}
