#include<stdio.h>
#include<math.h>
#include<conio.h>
struct ogrenci{
	int number;
	float vize1;
	float final;
};//Öðrenci numarasý vizesi ve finalini tutan bi struct

float AritmetikOrt(float a[],int size);//Aritmetik ortalama hesabý
void harfnot (float sap,float Ort,float ogrort);//harf notlarýnýn belirlenmesi

int main(){
	int ogrsayi;

	int i;
	
	printf("ogrenci sayisini giriniz:\n");
	scanf("%d",&ogrsayi);
	struct ogrenci ogrenciler[ogrsayi];
	
	float NotOrt[ogrsayi],stsap,tamp,ort;
	
	for(i=0;i<ogrsayi;i++){	
	    printf("Ogrencinin numarasi ve vize final notlari:");
		scanf("%d %f %f",&ogrenciler[i].number,&ogrenciler[i].vize1,&ogrenciler[i].final);
		NotOrt[i]=(ogrenciler[i].vize1+ogrenciler[i].final)/2;
	}
	ort=AritmetikOrt(NotOrt,ogrsayi);
	
	for(i=0; i<ogrsayi; i++){
		tamp += pow(NotOrt[i]-ort, 2.0);
	}
       

    stsap = sqrt( tamp/(ogrsayi-1) );
	
	
	
	printf("ort %f\n",AritmetikOrt(NotOrt,ogrsayi));
	printf("stsap %f\n",stsap);
	
	
	for(i=0;i<ogrsayi;i++){
			printf("%d numarali ogrenci %f ",ogrenciler[i].number,NotOrt[i]);
			harfnot(stsap,AritmetikOrt(NotOrt,ogrsayi),NotOrt[i]);
			
	}

   getch();
}
float AritmetikOrt(float a[],int size){
	float tamp=0;
	int i;
	for(i=0;i<size;i++){
		tamp=tamp+a[i];
	}
	
	return tamp/size;
	
}
void harfnot (float sap,float Ort,float ogrort){
	if(0<=ogrort && ogrort<Ort-(sap/2)-3*sap ){ printf("FF\n");	} 
	if(Ort-(sap/2)-3*sap<ogrort && ogrort<Ort-(sap/2)-2*sap ){ printf("FD\n");	} 
	if(Ort-(sap/2)-2*sap<ogrort && ogrort<Ort-(sap/2)-sap ){ printf("DD\n");	} 
	if(Ort-(sap/2)-sap<ogrort && ogrort<Ort-(sap/2) ){ printf("DC\n");	} 
	if(Ort-(sap/2)<ogrort && ogrort<Ort+(sap/2) ){ printf("CC\n");	} 
	if(Ort+(sap/2)<ogrort && ogrort<Ort+(sap/2)+sap ){ printf("CB\n");	} 
	if(Ort+(sap/2)+sap<ogrort && ogrort<Ort+(sap/2)+2*sap ){ printf("BB\n");	} 
	if(Ort+(sap/2)+2*sap<ogrort && ogrort<Ort+(sap/2)+3*sap ){ printf("BA\n");	} 
	if(Ort+(sap/2)+3*sap<ogrort && ogrort<=100 ){ printf("AA\n");	} 
}


