# include <stdio.h>
int main() {
    float numeros[4];
    float soma = 0.0, media;
    
    // Leitura dos números usando um laço for
    for (int i = 0; i < 4; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%f", &numeros[i]);
        soma += numeros[i];
    }
    
    // Cálculo da média
    media = soma / 4.0;
    
    // Exibição dos resultados
    printf("\n--- RESULTADOS ---\n");
    printf("Soma = %.2f\n", soma);
    printf("Media = %.2f\n", media);
    
    return 0;
}