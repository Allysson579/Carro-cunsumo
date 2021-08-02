#include <stdio.h>

int main(){

int hex[10];
int numero,resultado,controle2,controle =0,base;

printf("Digite um valor em DECIMAL.\n");
scanf("%d",&numero);

resultado = numero;

printf("--------\n");
printf("Seleciona a base para qual base sera transformado o numero.\n\n");
printf("hexadecimal - digite 1\n");
printf("octal - digite 2\n");
printf("--------\n");
scanf("%d",&base);

if(base == 1){
base = 16;
}else{
        base = 8;
}

for(;;){

if(numero / base < base){
hex[controle] = resultado % base;
controle = controle-1;
break;
}
hex[controle] = resultado % base;
resultado = resultado / base;
if(resultado < base){
hex[controle+1] = resultado;
break;
}
controle++;
}
for(controle2 = controle+1; controle2 >= 0; controle2--){

switch(hex[controle2]){

case 10:
printf("a");
break;
case 11:
printf("b");
break;
case 12:
printf("c");
break;
case 13:
printf("d");
break;
case 14:
printf("e");
break;
case 15:
printf("f");
break;
default:
printf("%d",hex[controle2]);

}

}
return(0);

}
