#include<stdio.h>
#include<math.h>


int main(){
	int loop = 1;
	 while(loop<=2){
	  	int a = 1,x;
        float bolum = 0, fact = 1, pay,sonuc=0;
        
        printf("lutfen e'nin ussunu giriniz:");
        scanf("%d", &x);

        while (a < 15){
            pay = pow(x, a);
			fact=fact*a;
            bolum = (pay / fact);
            a++;
            sonuc=bolum+sonuc;
        }

        printf("e'nin %d. kuvveti = %.3lf\n", x, sonuc+1);
}
return 0;
}

