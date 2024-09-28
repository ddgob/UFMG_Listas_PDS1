#include <stdio.h>
#include <math.h>

int primo(int n) {
    for (int i = n - 1; i > 1; i--) {
        if (n % i == 0) return(0);
    }
    return(1);
}

float funcaoQuadratica(float x) {
    return(pow(x, 2) - 5 * x + 1);
}

float funcaoTercGrau(float x, float a, float b, float c, float d) {
    return(a * pow(x, 3) + b * pow(x, 2) + c * x + d);
}

int main() {
    FILE* writeFileQuestion1 = fopen("arquivo_primos.txt", "w+t");
    if (writeFileQuestion1 == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    int a;
    printf("Digite um numero: ");
    scanf("%d", &a);
    for (int i = 2; i <= a; i++) {
        if (primo(i)) fprintf(writeFileQuestion1, "%d\n", i);
    }
    fclose(writeFileQuestion1);

    FILE* readFileQuestion2 = fopen("arquivoDeLeituraNaturais.txt", "r+t");
    if (readFileQuestion2 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return(1);
    }

    FILE* writeFileQuestion2 = fopen("arquivoNaturalEhPrimo.txt", "w+t");
    if (writeFileQuestion2 == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    int b;
    while (!feof(readFileQuestion2)) {
        fscanf(readFileQuestion2, "%d", &b);
        fprintf(writeFileQuestion2, "%d\n", primo(b));
    }
    fclose(readFileQuestion2);
    fclose(writeFileQuestion2);

    FILE* readFileQuestion3 = fopen("arquivoDeLeituraNaturais.txt", "r+t");
    if (readFileQuestion3 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return(1);
    }

    FILE* writeFileQuestion3Primos = fopen("primos.txt", "w+t");
    if (writeFileQuestion3Primos == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    FILE* writeFileQuestion3Outros = fopen("outros.txt", "w+t");
    if (writeFileQuestion3Outros == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    int c;
    while (!feof(readFileQuestion3)) {
        fscanf(readFileQuestion3, "%d", &c);
        if (primo(c)) {
            fprintf(writeFileQuestion3Primos, "%d\n", c);
        } else {
            fprintf(writeFileQuestion3Outros, "%d\n", c);
        }
    }
    fclose(readFileQuestion3);
    fclose(writeFileQuestion3Primos);
    fclose(writeFileQuestion3Outros);

    FILE* readFileQuestion4 = fopen("arquivoDeLeituraReais.txt", "r+t");
    if (readFileQuestion4 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return(1);
    }

    FILE* writeFileQuestion4 = fopen("arquivoResultadosdaFuncaoQuestao4.txt", "w+t");
    if (writeFileQuestion4 == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    float d;
    while (!feof(readFileQuestion4)) {
        fscanf(readFileQuestion4, "%f", &d);
        fprintf(writeFileQuestion4, "%f\n", funcaoQuadratica(d));
    }
    fclose(readFileQuestion4);
    fclose(writeFileQuestion4);

    FILE* readFileQuestion5 = fopen("arquivoDeLeituraReais.txt", "r+t");
    if (readFileQuestion5 == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo");
        return(1);
    }

    FILE* writeFileQuestion5 = fopen("arquivoResultadosdaFuncaoQuestao5.txt", "w+t");
    if (writeFileQuestion5 == NULL) {
        printf("Erro: nao foi possivel criar o arquivo");
        return(1);
    }

    float e, f, g, h, i;
    printf("Digite 4 numeros: ");
    scanf("%f", &f);
    scanf("%f", &g);
    scanf("%f", &h);
    scanf("%f", &i);

    while (!feof(readFileQuestion5)) {
        fscanf(readFileQuestion5, "%f", &e);
        fprintf(writeFileQuestion5, "%f\n", funcaoTercGrau(e, f, g, h, i));
    }
    fclose(readFileQuestion5);
    fclose(writeFileQuestion5);

    return(0);
}
