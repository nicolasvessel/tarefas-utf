#include <stdio.h>
#include <math.h>

int main(){

    int opcao;
    float num1, num2, num3, delta, r1, r2;

    printf("QUAL OPERACAO?\n");
    printf("ESCOLHA UMA DAS OPCOES ABAIXO\n");
    printf("\n(1)Adicao");
    printf("\n(2)Subtracao");
    printf("\n(3)Multiplicacao");
    printf("\n(4)Divisao");
    printf("\n(5)Exponenciacao");
    printf("\n(6)Bhaskara\n");
    scanf("%i", &opcao);

    switch (opcao){

    //adicao
    case 1:
    printf("primeiro numero:");
    scanf ("%f", &num1);
    printf("segundo numero:");
    scanf ("%f", &num2);
    printf ("***************************************************");
    printf("\n\nSOMA:%.2f", num1 + num2);
    break;

    //subtracao
    case 2:
    printf("primeiro numero:");
    scanf ("%f", &num1);
    printf("segundo numero:");
    scanf ("%f", &num2);
    printf ("***************************************************");
    printf("\n\nSUBTRACAO:%.2f", num1 - num2);
    break;

    //multiplicacao
    case 3:
    printf("numero para multiplicar:");
    scanf ("%f", &num1);
    printf("multiplicar por:");
    scanf ("%f", &num2);
    printf ("***************************************************");
    printf("\n\nMULTIPLICACAO:%.2f", num1*num2);
    break;

    //divisao
    case 4:
    printf("dividendo:");
    scanf ("%f", &num1);
    printf("divisor:");
    scanf ("%f", &num2);
    printf ("***************************************************");
    if (num2 != 0){
    printf("\n\nDIVISAO:%.2f", num1 / num2);
    }
    else printf("\n\nDIVISAO INVALIDA");
    break;

    //exponenciacao
    case 5:
    printf("base:");
    scanf ("%f", &num1);
    printf("expoente:");
    scanf ("%f", &num2);
    printf ("***************************************************");
    printf("\n\nEXPONENCIACAO:%.2f", pow (num1, num2));
    break;

    //bhaskara
    case 6:
    printf("valor de A:");
    scanf ("%f", &num1);
    printf("valor de B:");
    scanf ("%f", &num2);
    printf("valor de C:");
    scanf ("%f", &num3);
    printf ("***************************************************");

    //calculo
    delta = num2*num2 - 4*num1*num3;
    if (delta > 0){
    r1 = (-num2 + sqrt(delta)) / (2*num1);
    r2 = (-num2 - sqrt(delta)) / (2*num1);
    printf("\n\nRESULTADO X1:%.2f",r1);
    printf("\n\nRESULTADO X2:%.2f",r2);
    }
    else printf("\n\n DELTA INVALIDO");
    break;

    default:
        printf("ERRO, OPCAO INVALIDA");
    }
return 0;
}
