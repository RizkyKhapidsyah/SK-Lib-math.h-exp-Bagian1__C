/* exp example */
#include <stdio.h>      /* printf */
#include <math.h>       /* exp */
#include <conio.h>		/* _getch() */

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

int main() {
	double x, result;
	x = 5.0;

	result = exp(x);
	
	printf("The exponential value of %f is %f.\n", x, result);

	_getch();
	return 0;
}