#include <stdio.h>
int main()
{
	int dia, mes, anio;
	printf("Ingrese el dia: "); scanf_s("%d", &dia);
	printf("Ingrese el mes: "); scanf_s("%d", &mes);
	printf("Ingrese el anio: "); scanf_s("%d", &anio);
	dia++;

	if (dia == 5 && mes == 10 && anio == 1582)
	{
		dia = 15;
		printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
	}
}