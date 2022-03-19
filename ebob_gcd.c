#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //for using getch() in .exe files.

int commonDivisor(int x, int y);

int main() {
    int num1;
    int num2;
    
    printf("enter 2 numbers to find their greatest common divisor\n\n");
    scanf("%d%d", &num1, &num2);
    
    printf("GCD: %d",commonDivisor(num1, num2));
    
    
	getch();
	return 0;
}

int commonDivisor(int x, int y) {
	
	/*taking the mode of y and the mode of x and y.
	
	ex. if we input fun(3,6) we would get 3%6=3 and then fun(6,3) ->
	= 6%3 = 0 -> fun(3,0). when y is equal to zero, we return x. (3) */
	
    if (y != 0) {
        return commonDivisor(y, x%y); 
    } 
	//if y = 0, the gcd must be x. (you can test this)
	else {
        return x;
    }
    
}
