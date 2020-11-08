#include <stdio.h>

/* Günümüz terminallerinde buffer bulunduğundan EOF sinyalini her daim verdiğimizden diğer koşulu göstermek bir miktar zor.*/

main ()
{
	printf("Bir tuşa basın.\n\n");
	printf("getchar() != EOF açıklaması eşittir %d\n", getchar() != EOF);
}
