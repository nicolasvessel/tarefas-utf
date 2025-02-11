#include <stdio.h>
#include <math.h>


//define a estrutura do ponto
typedef struct {
    float x, y;
} ponto;

// maior e o menor valor de x
void maiormenorX
    (ponto pontos[], int numero, int *indicemaiorX, int *indicemenorX) {
    *indicemaiorX = 0;
    *indicemenorX = 0;

    // compara os valores de x
    for (int i = 1; i < numero; i++) {
        if (pontos[i].x > pontos[*indicemaiorX].x) {
            *indicemaiorX = i;  // atualiza o maior ponto (valor x)
        }
        if (pontos[i].x < pontos[*indicemenorX].x) {
            *indicemenorX = i;  // atualiza o menor ponto (valor x)
        }
    }
}

// maior e o menor valor de y
void maiormenorY
    (ponto pontos[], int numero, int *indicemaiorY, int *indicemenorY) {
    *indicemaiorY = 0;
    *indicemenorY = 0;

    // compara os valores de y
    for (int i = 1; i < numero; i++) {
        if (pontos[i].y > pontos[*indicemaiorY].y) {
            *indicemaiorY = i;  // atualiza o maior ponto (valor y)
        }
        if (pontos[i].y < pontos[*indicemenorY].y) {
            *indicemenorY = i;  // atualiza o menor ponto (valor y)
        }
    }
}

int main()
{
    int numero;
    int indicemaiorX, indicemenorX;
    int indicemaiorY, indicemenorY;

    // entrada de pontos
    printf("digite o numero de pontos (ate 100): ");
    scanf("%d", &numero);

    if (numero > 100) {
        printf ("ERRO, VALOR MAIOR QUE 100 PONTOS");
        return 1;
                      }

   ponto pontos[numero];
    printf("digite as coordenadas dos pontos (x y):\n");

    for (int i = 0; i < numero; i++) {
        printf("ponto %d: ", i + 1);

        scanf("%f %f", &pontos[i].x, &pontos[i].y);
    }


    maiormenorX(pontos, numero, &indicemaiorX, &indicemenorX);
    maiormenorY(pontos, numero, &indicemaiorY, &indicemenorY);

    printf ("\nDIFERENCA ENTRE PONTOS X: %.2f", pontos[indicemaiorX].x - pontos[indicemenorX].x);
    printf ("\n\nDIFERENCA ENTRE PONTOS Y: %.2f", pontos[indicemaiorY].y - pontos[indicemenorY].y);

    return 0;
}
