#include <stdio.h>

int main() 
{
    int vetor[8];
    int i, numero, posicao = -1;

    printf("Digite 8 números inteiros:\n");
    for (i = 0; i < 8; i++) 
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = 0; i < 8; i++) 
    {
        if (vetor[i] == numero) 
        {
            posicao = i;
            break;
        }
    }

    if (posicao != -1) 
    {
        printf("O número %d está na posição %d do vetor.\n", numero, posicao);
    } else 
    {
        printf("O número %d não existe no vetor.\n", numero);
    }

    return 0;
}
