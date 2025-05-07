#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    // Entrada de dados
    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    // Verificação da temperatura
    if (temperatura > 30) {
        printf("Temperatura está alta\n");
    } else {
        printf("Temperatura está dentro dos parâmetros\n");
    }

    // Verificação da umidade
    if (umidade > 50) {
        printf("Umidade está elevada\n");
    } else {
        printf("Umidade está dentro dos parâmetros\n");
    }

    // Verificação do estoque
    if (estoque < estoqueMinimo) {
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque normal!\n");
    }

    return 0;
}

