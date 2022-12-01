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
	else if (!((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0) && mes == 2)
	{
		if (dia == 29 && mes == 2)
		{
			dia = 1;
			mes++;
			printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
		}
	}
	else {
		printf("La fecha del dia siguiente es:%2d %2d %4d", dia, mes, anio);
	}
}
