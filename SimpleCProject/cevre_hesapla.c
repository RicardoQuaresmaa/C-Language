#include <stdio.h>

# define PI_SAYISI 3.14

int main(int argc, char *argv[])
{
	
int yaricap;

float cevre;

printf("\n Yar�cap� giriniz:");

scanf("%d", &yaricap);

cevre = 2 * PI_SAYISI * yaricap;

printf("Dairenin �evresi:%.2f\n", cevre);

return 0;

}

