#include <stdio.h>

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0; /* ısı tablosunun en düşük değeri */
	upper = 300; /* ısı tablosunun en yüksek değeri */
	step = 20; /* adım değeri */

	fahr = lower;

	printf(" Fahrenhayt-Selsiyus tablosunu bastır\n"
	"\n"
	"fahr = 0, 20, ... 300 için\n"
	"\n");

	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
