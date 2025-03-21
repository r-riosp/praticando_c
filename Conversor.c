//
// Created by rafae on 21/03/2025.
//

#include <stdio.h>

int converteDecimal() {
    int valorConvertido;
    printf("Digite um valor para ser convertido:\n");
    scanf("%d", &valorConvertido);
    printf("O valor %d convertido para hexadecimal equivale a: %X\n", valorConvertido, valorConvertido);
    return valorConvertido;
}

int converteAscii() {
    char caractere;
    printf("Digite um caractere:\n");
    getchar();
    scanf("%c", &caractere);
    printf("O caractere equivale a %X na tabela ASCII.", caractere);
    return caractere;
}

int main() {
    int teste;
    printf("Seja bem-vindo ao Programa de Conversao!\n\n");
    printf("Para converter um numero decimal para hexadecimal, digite 1.\n");
    printf("Para converter um caractere para o equivalente na Tabela ASCII, digite 2.\n");
    scanf("%d", &teste);
    teste == 1 ? converteDecimal() : converteAscii();
    return 0;
}