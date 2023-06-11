#include <stdio.h>

int Primo(int num) 
{
    if (num <= 1) 
    {
        return 0; 
    }

    int i;
    for (i = 2; i <= num / 2; i++) 
    {
        if (num % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main() 
{
    int vetor[10];
    int i;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Os números primos são: ");
    for (i = 0; i < 10; i++) 
    {
        if (Primo(vetor[i])) 
        {
            printf("%d ", vetor[i]);
        }
    }
    printf("\n");

    return 0;
}
