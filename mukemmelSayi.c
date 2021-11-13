#include <stdio.h>

int main()
{
    int i, j, toplam;
        
    for(i=1; i<=15000; i++){
        toplam = 0;

        for(j=1; j<i; j++){
        	
            if(i % j == 0){
            	
                toplam = j+toplam;
            }
        }
 
        if(toplam == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}

