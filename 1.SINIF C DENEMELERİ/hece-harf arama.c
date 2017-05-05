#include<stdio.h>
#define boyut 1
#define boyut1 30
int harfsay(char dizi[20]){
        
		int say;
	    int i=0;
	    
		while(dizi[i]!='\0'){
		i++;
		say++;
		
	}

return i;
}

int arama(char dizi1[200],char dizi[20]){
	int a=0,b=0,c=0;

	while(dizi[b]!='\0'){
				while(dizi1[a]!='\0'){
					if(dizi1[a]==dizi[b]){	     c++; break;	 }
					
				a++;	
				}
			
	b++;
	}
	
	if(c==harfsay(dizi)){printf("%d. ve %d. indisler arasinda\n ",b-1,a-1); return 1;	}
	else{return 0;
	}
}

int main(){
	
	char dizi1[200];
	char dizi[20];
	int tamp;
	printf("ilk kelimeyi sonra aranacak heceyi giriniz\n");
	scanf("%s",dizi1);
	scanf("%s",dizi);
	

	
    if (arama(dizi1,dizi)){
    	printf("var");
    	}
    	else{printf("yok");		}
    	return 0;
}

