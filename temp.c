#include <stdio.h>

float CtK(float c)
{
    return c + 273.15;
}
float CtF(float c)
{
    return c * 9 / 5 + 32;
}
float KtC(float k)
{
    return k - 273.15;
}
float KtF(float k)
{
    return (k - 273.15) * 9 / 5 + 32;
}
float FtC(float f)
{
    return (f - 32) * 5 / 9;
}
float FtK(float f)
{
    return (f - 32) * 5 / 9 + 273.15;
}

int main()
{
    int i;
    float k;
    printf("Conversor de temperatura\n1.\tCelsius a Kelvin\n2.\tCelsius a Fahrenheit\n3.\tKelvin a Celsius\n4.\tKelvin a Fahrenheit\n5.\tFahrenheit a Celsius\n6.\tFahrenheit a Kelvin\n>. ");
    scanf("%d", &i);
    switch (i)
    {
    case 1:
        printf("Celsius: ");
        scanf("%f", &k);
        printf("Kelvin: %f\n", CtK(k));
        break;
    case 2:
        printf("Celsius: ");
        scanf("%f", &k);
        printf("Fahrenheit: %f\n", CtF(k));
        break;
    case 3:
        printf("Kelvin: ");
        scanf("%f", &k);
        printf("Celsius: %f\n", KtC(k));
        break;
    case 4:
        printf("Kelvin: ");
        scanf("%f", &k);
        printf("Fahrenheit: %f\n", KtF(k));
        break;
    case 5:
        printf("Fahrenheit: ");
        scanf("%f", &k);
        printf("Celsius: %f\n", FtC(k));
        break;
    case 6:
        printf("Fahrenheit: ");
        scanf("%f", &k);
        printf("Kelvin: %f\n", FtK(k));
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }
    return 0;
}