#include<stdio.h>
#define boyut 9
void mod(int a[],int size);
void medyan(int a[],int size);
int main(){
	int dizi[boyut];
	int i;
	printf("sayilari gir:\n");
	for(i=0;i<boyut;i++){
		scanf("%d",&dizi[i]);
	}
	
mod(dizi,boyut);	
medyan(dizi,boyut);	
}
void mod(int a[],int size){
	//En çok tekrar eden mod. mod un tekrar sayýsý frekans
	int i,j,k,x,max,sayi=0;
	int tek[size];//indislerin tekrar sayýsý;
	for(k=0;k<size;k++){ tek[k]=0;	}
	
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[i]==a[j]){ 	tek[i]++;		}
		
		}
		
	}
	max=tek[0];
	for(x=0;x<size;x++){ if(tek[x]>max){ max=tek[x]; sayi=x;	} 	}		
    sayi=a[sayi];
    printf("%d mod %d frekans\n",sayi,max);
}
void medyan(int a[],int size){
	// küçükten büyüðe sýraladýktan sonra ortadaki medyan. elem sayýsý tekse meydan= (eleman sayýsý+1)/2 :çiftse eleman sayýsý/ 2 ve eleman sayýsý/2 +1 yani 2 medyan olabilir.
	int mod,i,j,tamp;
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			if(a[i]>a[j]){
			tamp=a[j];
			a[j]=a[i];
			a[i]=tamp;
			}			
		}
	}
	
	if(size%2==0){
		printf(" medyanlar %d  %d",a[size/2],a[(size/2)-1]);
	}
	else{
		printf("medyan %d",a[(size-1)/2]);
	}
	
}
