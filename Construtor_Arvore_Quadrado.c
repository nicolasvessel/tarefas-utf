#include <stdio.h>
int main (){

int opc; //opcao
int t; //tamanho
int x,y;

printf("qual forma deseja imprimir?\n");
printf("(1)quadrado\n(2)arvore\n(3)sair\n");
scanf("%i",&opc);

switch(opc){

//quadrado
case 1:
printf("\nqual o tamanho?\n");
scanf("%i",&t);

    for(x=0;x<t;x++){
        for(y=0;y<t;y++){
            if(x==0 || x==t-1||y==0||y==t-1){
            printf("*");
                                            }
            else
            {
                printf(" ");
            }
                        }
        printf("\n");
                        }break;
//arvore
case 2:
printf("\nqual o tamanho?\n");
scanf("%i",&t);

    for(x=0;x<t;x++){
        for(y=0;y<t-x-1;y++){
            printf(" ");
                            }
            printf("*");
        for( y=0; y<x ; y++){
            printf("I*");
                            }
        printf("\n");
                    }break;
//sair
case 3:
    printf("\nSAINDO\n");
    break;

//qualquer outra entrada
default:
    printf("\nERRO! OPCAO INVALIDA");
            }
return 0;
}
