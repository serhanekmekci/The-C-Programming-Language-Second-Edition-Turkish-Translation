#include <stdio.h>
#include <limits.h>
#include <float.h>

main ()
{
	/* Header dosyasını dahil ederek bastırmak. */
	printf("signed char'ın genişliği %d ve %d arasındadır.\n",CHAR_MIN,CHAR_MAX);
	printf("unsigned char'ın genişliği %d ve %u arasındadır.\n",0,UCHAR_MAX);
	printf("\n");

	printf("signed short'un genişliği %d ve %d arasındadır.\n",SHRT_MIN,SHRT_MAX);
	printf("unsigned short'un genişliği %d ve %u arasındadır.\n",0,USHRT_MAX);
	printf("\n");

	printf("signed int'in genişliği %d ve %d arasındadır.\n",INT_MIN,INT_MAX);
	printf("unsigned int'in genişliği %d ve %u arasındadır.\n",0,UINT_MAX);
	printf("\n");

	printf("signed long'un genişliği %ld ve %ld arasındadır.\n",LONG_MIN,LONG_MAX);
	printf("unsigned long'un genişliği %d ve %lu arasındadır.\n",0,ULONG_MAX);
	printf("\n");

	printf("signed long'un genişliği %ld ve %ld arasındadır.\n",LONG_MIN,LONG_MAX);
	printf("unsigned long'un genişliği %d ve %lu arasındadır.\n",0,ULONG_MAX);
	printf("\n");

	printf("signed float'ın genişliği %f ve %f arasındadır.\n", FLT_MAX, -FLT_MAX);
	printf("\n");

	printf("double'ın genişliği %f ve %f arasındadır.", DBL_MAX, -DBL_MAX);
	printf("\n");

	/* Hesaplayarak bastırmak */
}
