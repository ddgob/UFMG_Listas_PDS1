#include <stdio.h>
#include <math.h>

float media(float* v, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) soma += v[i];
    return (soma / n);
}

float varianciaPopulacional(float* v, int n) {
    float mediaAritmetica = media(v, n);
    float soma = 0;
    for (int i = 0; i < n; i++) soma += pow((v[i] - mediaAritmetica), 2);
    return (soma / n);
}

float maiorNumero(float* v, int n) {
    float max = v[0];
    for (int i = 1; i < n; i++) {
        if (max < v[i]) max = v[i];
    }
    return (max);
}

float menorNumero(float* v, int n) {
    float min = v[0];
    for (int i = 0; i < n; i++) {
        if (min > v[i]) min = v[i];
    }
    return (min);
}

float produtoEscalar(float* u, float* v, int n) {
    float soma = 0;
    for (int i = 0; i < n; i++) {
        soma += u[i] * v[i];
    }
    return (soma);
}

int main(int argc, char** argv) {
    // Esse trecho de codigo abaixo, dado como exemplo pelo professor, só funciona
    // corretamente quando a ultima linha do arquivo (de onde os numeros sao lidos) nao tem
    // nenhum numero, ou seja, é uma linha em branco. Veja o exemplo a seguir:
    // Primeira Linha Do Arquivo: 1
    // Segunda Linha Do Arquivo: 2
    // Terceira Linha Do Arquivo: 57
    // Ultima Linha Do Arquivo:
    //
    // (Obscerve que a ultima linha nao tem nenhum valor. O trecho de código abaixo só funciona
    // quando a ultima linha nao tem nenhum valor)

    /*
    FILE* arquivoQuestao1 = fopen(argv[1], "r+t");
    if (arquivoQuestao1 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    int numeros[1000];
    int contador = 0;
    fscanf(arquivoQuestao1, "%d", &numeros[contador]);
    while (!feof(arquivoQuestao1)) {
        contador++;
        fscanf(arquivoQuestao1, "%d", &numeros[contador]);
    }
    fclose(arquivoQuestao1);
    for (int i = 0; i < contador; i++) printf("%d\n", numeros[i]);
    */

    // Esse trecho de codigo abaixo contempla apenas os arquivos que nao possuem linha em branco
    // Ao contrario do trecho de codigo acima que foi comentado
    FILE* arquivoQuestao1 = fopen(argv[1], "r+t");
    if (arquivoQuestao1 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    int numeros[1000];
    int contador = 0;
    while (!feof(arquivoQuestao1)) {
        fscanf(arquivoQuestao1, "%d", &numeros[contador]);
        contador++;
    }
    fclose(arquivoQuestao1);
    for (int i = 0; i < contador; i++) printf("Questao 1: %d\n", numeros[i]);

    FILE* arquivoQuestao2 = fopen(argv[2], "r+t");
    if (arquivoQuestao2 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    float numerosParaMedia[1000];
    int contador2 = 0;
    while (!feof(arquivoQuestao2)) {
        fscanf(arquivoQuestao2, "%f\n", &numerosParaMedia[contador2]);
        contador2++;
    }
    fclose(arquivoQuestao2);
    printf("A media do arranjo eh: %f\n", media(numerosParaMedia, contador2));

    FILE* arquivoQuestao3 = fopen(argv[3], "r+t");
    if (arquivoQuestao3 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    float numerosParaVariancia[1000];
    int contador3 = 0;
    while (!feof(arquivoQuestao3)) {
        fscanf(arquivoQuestao3, "%f", &numerosParaVariancia[contador3]);
        contador3++;
    }
    fclose(arquivoQuestao3);
    printf("A variancia do arranjo eh: %f\n", varianciaPopulacional(numerosParaVariancia, contador3));

    FILE* arquivoQuestao4 = fopen(argv[4], "r+t");
    if (arquivoQuestao4 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    float numerosParaMax[1000];
    int contador4 = 0;
    while (!feof(arquivoQuestao4)) {
        fscanf(arquivoQuestao4, "%f", &numerosParaMax[contador4]);
        contador4++;
    }
    fclose(arquivoQuestao4);
    printf("O maior elemento do arranjo eh: %f\n", maiorNumero(numerosParaMax, contador4));

    FILE* arquivoQuestao5 = fopen(argv[5], "r+t");
    if (arquivoQuestao5 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    float numerosParaMin[1000];
    int contador5 = 0;
    while (!feof(arquivoQuestao5)) {
        fscanf(arquivoQuestao5, "%f", &numerosParaMin[contador5]);
        contador5++;
    }
    fclose(arquivoQuestao5);
    printf("O menor elemento do arranjo eh: %f\n", menorNumero(numerosParaMin, contador5));

    FILE* arquivoQuestao6A = fopen(argv[6], "r+t");
    if (arquivoQuestao6A == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    FILE* arquivoQuestao6B = fopen(argv[7], "r+t");
    if (arquivoQuestao6B == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return (1);
    }
    float arranjoA[1000], arranjoB[1000];
    int contador6 = 0;
    // Lembre que, pelo enunciado, o numero de elementos de A e B são iguais
    while (!feof(arquivoQuestao6A)) {
        fscanf(arquivoQuestao6A, "%f", &arranjoA[contador6]);
        fscanf(arquivoQuestao6B, "%f", &arranjoB[contador6]);
        contador6++;
    }
    fclose(arquivoQuestao6A);
    fclose(arquivoQuestao6B);
    printf("O produto escalar dos arranjos eh: %f\n", produtoEscalar(arranjoA, arranjoB, contador6));

    return (0);
}
