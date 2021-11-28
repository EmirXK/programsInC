#include <stdio.h>

int main(){
	
	int x,y,save;
	
	
	for(x=5 ; x<15000 ; x++){
		save=0;
		for(y=1; y<x ; y++){
			if(x % y==0){
				save=save+y;
			}
		}
		if(save==x){
			printf("%d  ",x);
		}
	}
}
