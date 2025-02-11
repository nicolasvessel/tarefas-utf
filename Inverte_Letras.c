#include <stdio.h>
#include <string.h>

int main() {
    int i, j;
    int N = 20;
    char vet[N][51];
    char invertida[N][51];

    for (i = 0; i < N; i++) {
        printf("Digite uma palavra: ");
        scanf("%50s", vet[i]);

        // verifica se o usuario digitou "."
        if (strcmp(vet[i], ".") == 0)   {
            printf("\nFIM DA EXECUCAO\n");
            break;
                                        }
                            }

    // invertendo sem alterar as originais
    for (j = 0; j < i; j++) {
        int inv = strlen(vet[j]);
        for (int k = 0; k < inv; k++)   {
            invertida [j][k] = vet[j][inv - k - 1];
                                        }
        invertida[j][inv] = '\0'; // garante que nao apareca \ na saida
                            }

    // palavras invertidas
    printf("\nPALAVRAS INVERTIDAS:\n");
    for (j = 0; j < i; j++) {
        printf("%s\n", invertida[j]);
                            }

        printf("\nPALAVRAS ORDENADAS INVERTIDAS:\n");
    for (int j = i - 1; j >= 0; j--)    {
        printf("%s\n", vet[j]);
                                        }
    return 0;
}
