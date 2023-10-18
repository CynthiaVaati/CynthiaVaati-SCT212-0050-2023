#include <stdio.h>

int main()
{
float temperature;
printf("Enter your temperature: ");
scanf("%f",&temperature);

printf("CONVERSION OF TEMPERATURE FROM FARENHEIT TO CELCIUS");

while (temperature < 100)

{
float celcius;
celcius=(temperature-32)*5/9;
printf("%.2f fareheit = %.2f degrees/n",temperature,celcius);
temperature=temperature+10;
}
return 0;
}