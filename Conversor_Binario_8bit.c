    #include <stdio.h>
    int main(){

    int resultado;
    int B1, B2, B3, B4, B5, B6, B7, B8;
    int RD1, RD2, RD3, RD4, RD5, RD6, RD7, RD8;

    //interface do usuario

    printf ("numero binario:");
    scanf ("%i", &B1);
    while (B1 != 0 && B1 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B1);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B2);
    while (B2 != 0 && B2 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B2);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B3);
    while (B3 != 0 && B3 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B3);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B4);
    while (B4 != 0 && B4 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B4);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B5);
    while (B5 != 0 && B5 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B5);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B6);
    while (B6 != 0 && B6 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B6);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B7);
    while (B7 != 0 && B7 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B7);
    }
        printf ("\n");

    printf ("numero binario:");
    scanf ("%i", &B8);
    while (B8 != 0 && B8 != 1)
    {
        printf("incorreto, tente novamente:");
        scanf ("%i", &B8);
    }
        printf ("\n");

    //conversor e impressor decimal
    RD1 = B1*128;
    RD2 = B2*64;
    RD3 = B3*32;
    RD4 = B4*16;
    RD5 = B5*8;
    RD6 = B6*4;
    RD7 = B7*2;
    RD8 = B8*1;

    resultado = RD1+RD2+RD3+RD4+RD5+RD6+RD7+RD8;

    printf ("decimal: %i\n", resultado);


     //conversor e impressor octal

    printf("octal: %o\n", resultado);

    //conversor e impressor hexadecimal

    printf("hexadecimal: %X", resultado);

    return 0;
}
