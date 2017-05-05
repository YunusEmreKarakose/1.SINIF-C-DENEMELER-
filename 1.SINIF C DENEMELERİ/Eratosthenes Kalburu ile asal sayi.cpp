#include<stdio.h>

/*Eratosthenes Kalburu ile belli bir tam say�ya kadar olan asal say�lar rahatl�kla bulunabilinir.
 �ncelikle bi say�ya kadar olan asal say�lar� bulmak i�in boyutu o say� kadar olan ve her eleman�
 1 olan bir integer dizi olu�turulur
 
 Dizinin ikinci eleman� 1 olarak kal�r ve dizinin 2'nin t�m katlar� olan elemanlar� 0 yap�l�r.
 Dizinin ���nc� eleman� 1 olarak kal�r ve dizinin 3'�n t�m katlar� olan elemanlar� 0 yap�l�r.
 Devam�nda dizinin 1 olan eleman� al�n�p istenilen say�ya kadar olan katlar� 0 yap�l�r.
 
 Sonu� olarak elde edilen dizide de�eri 1 olan indisin de�eri bize istenilen say�ya kadar olan 
 asal say�lar� verir.
*/
int kat(int a,int dizi[],int BOYUT);//indisi a n�n kat� olan dizi elemanlar�n� 0 yapar
int bul(int dizi[],int BOYUT);//Asal say�lar� bulup yaz�d�r

int main(){
	int BOYUT;
	printf("Hangi sayiya kadar olan asal sayilar bulunsun?... ");
	scanf("%d",&BOYUT);
	int dizi[BOYUT];
	int i;
	for(i=2;i<BOYUT;i++){dizi[i]=1;	}//B�t�n elemanlar� 1 olan dizi olu�turuldu.
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
	
	if(dizi[i]==1){ kat(i,dizi,BOYUT);	}/* Burdaki if olmadanda �al���r fakat bu if bulunmazsa
	                                       program�n �al��mas� daha uzun s�rer �rn:4, 2nin kat� 
										   olmas�na ra�men 4� kat fonksiyonuna g�nderir ve zaten 
										   0 olan elemanlar gereksiz yere tekrar 0 a e�itlenir*/
		i++;	
		}
	for(i=0;i<BOYUT;i++){if (dizi[i]==1){ printf("%d\n",i);	} }
}
