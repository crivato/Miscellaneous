#include <stdio.h>

int main()
{
    float tempIn;
    char unitsIn;// = 'c';

    printf("Insert temperature and units (0 c/72 f/32 k) : ");
    scanf("%f %c", &tempIn, &unitsIn);

//    printf("Insert temperature units (c/f/k) : ");
 //   scanf("%c", &unitsIn);


    if(unitsIn == 'c' || unitsIn == 'C')
    {
        printf("%1.2f in Celsius is %1.2f in Kelvin and %1.2f in Fahrenheit", tempIn, (tempIn + 273.15), ((tempIn * 1.8) + 32) );
    }
    else if(unitsIn == 'f' || unitsIn == 'F')
    {
        printf("%1.2f in Fahrenheit is %1.2f in Celsius and %1.2f in Kelvin", tempIn, ((tempIn - 32) / 1.8), (((tempIn - 32) / 1.8) + 273.15) );
    }
    else if(unitsIn == 'k' || unitsIn == 'K')
    {
        printf("%1.2f in Kelvin is %1.2f in Celsius and %1.2f in Fahrenheit", tempIn, (tempIn - 273.15), (((tempIn -273.15) * 1.8) + 32) );
    }
    else
    {
        printf("Error only supports (C)elsius (K)elvin and (F)ahrenheit\n");
        printf("Usage as follows:\n0 c\n32 f\n273.15 k\n");
    }

    return 0;
}
