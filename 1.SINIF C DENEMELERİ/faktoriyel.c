#include<stdio.h>

int fakt(int n);

int main(){
	int a;
	printf("faktoriyeli istenen sayi:\n");
	scanf("%d",&a);
	
	printf("%d nin faktoriyeli %d",a,fakt(a));
	return 0;
}

int fakt(int n){
	if(n<=1){return 1;	}
	else{return(n*fakt(n-1));	}	
}
