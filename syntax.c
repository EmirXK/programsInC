#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void properties();

int main(){
	printf("Yazi giriniz: ");
	properties();
	return 0;
}

void properties(){
	int upper=0,lower=0,num=0,symbol=0,i;
	
	char text[35];
	fgets(text,35,stdin);
	
	for(i=0;i<strlen(text);i++){
		if(text[i]>= 65 && text[i]<= 90){
			upper++;
		}
		else if(text[i]>= 97 && text[i]<= 122){
			lower++;
		}
		else if(text[i]>= '0' && text[i]<= '9'){
			num++;
		}
		else{
			symbol++;
		}
	}
	
	symbol--;
	
	printf("\nBuyuk harfler: %d\n",upper);
	printf("Kucuk harfler: %d\n",lower);
	printf("Sayilar: %d\n",num);
	printf("Ozel semboller: %d\n",symbol);
}
