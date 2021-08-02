#include<stdio.h>

main()

{

float metros, decimetros, centimetros, milimetros;

printf("Digite o valor em metros: ");

scanf("%f",&metros);

decimetros=metros*10;

centimetros=metros*100;

milimetros=metros*1000;

printf("\n O resultado em decimetros E:%f", decimetros);

printf("\n O resultado em centimetros E:%f", centimetros);

printf("\n O resultado em milimetros E:%f", milimetros);

}
