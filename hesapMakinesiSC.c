#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int main() {
	
    float giris1, giris2;
	char islem;
	printf("Hesap makinesi programina hos geldiniz\n");
	printf("Birinci sayiyi giriniz:  ");
	scanf(" %f", &giris1);
	printf("Hangi islemi yapmak istersiniz?\n +\n -\n *\n /\n %%    :   ");
	scanf(" %s", &islem);
	printf("ikinci sayiyi giriniz:  ");	
	scanf(" %f", &giris2);

  switch (islem) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", giris1, giris2, giris1 + giris2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", giris1, giris2, giris1 - giris2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", giris1, giris2, giris1 * giris2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", giris1, giris2, giris1 / giris2);
      break;
    case '%':
    	printf("Mod islemini sectiginiz icin girdiginiz sayilar en yakin tam sayiya yuvarlanmistir.\n");
		printf("Sonuc: %d", (int)round(giris1) % (int)round(giris2));
		break;
    default:
      printf("Yanlis ifade saptandi");
  }

  return 0;
}
