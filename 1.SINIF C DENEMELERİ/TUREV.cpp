#include<stdio.h>
#include<math.h>
#include<conio.h>

int main(){
    int islem,katsayi,katsayi2,ust,ust2,taban,terimi,turev;
	while(1){
	printf("\n\nSecenekler:\n1:Basit Turev\n2:Ustel Fonksiyonun Turevi\n3:Logaritmik Fonksiyon Turevi\n4:Trigonometrik Fonksiyon Turevi\n\n\n'");
	printf("Turevi alinacak terimin turunu seciniz:");
	
	scanf("%d",&islem);
	
	switch (islem){
		case 1:
			printf("X'li terimin katsayisini ve ustunu sirayla giriniz:\n");
			scanf("%d",&katsayi);
			scanf("%d",&ust);
		    katsayi=katsayi*ust;
		    ust=ust-1;
			printf("%d x^%d",katsayi,ust);
			break;
		
		case 2:
		   printf("Fonksiyonun sirayla katsayisi,tabani(+tam sayi) ve ustel fonkun katsayisi ve ustunu yaziniz(2 (3^(2x^3))):\n");
		   scanf("%d",&katsayi);
		   scanf("%d",&taban);
		   scanf("%d",&katsayi2);
		   scanf("%d",&ust2);
		   
		        katsayi=katsayi2*ust2*katsayi;
		        ust2=ust2-1;
		        printf("%dx^%d %d^%dx^%d ln%d",katsayi,ust2,taban,katsayi2,ust2,taban);
	       
		   break;   
		   
		case 3:
			printf("Logaritmanintabanini ve fonkun katsayi ve ust degerlerini giriniz:\n");
			scanf("%d",&taban);
			scanf("%d",&katsayi);
			scanf("%d",&ust);
			katsayi2=ust*katsayi;
			ust2=ust-1;
			printf("(%dx^%d)/(%dx^%d) * log%de",katsayi2,ust2,katsayi,ust,taban);
			
			break;
	}

}
	
	
	
	getch();
	return 0;
}
