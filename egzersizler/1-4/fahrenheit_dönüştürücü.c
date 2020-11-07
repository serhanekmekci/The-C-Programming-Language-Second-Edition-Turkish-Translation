#include <stdio.h>

main()
{
	float selsiyus, fahr=0;
	int max=300, adim=20;

	while(selsiyus <= max) {
		selsiyus = (5.0/9.0)*(fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, selsiyus);
		fahr += adim;
	}
}
