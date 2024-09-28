#include <stdio.h>
#include <math.h>

float max(float a, float b, float c) {
    if (a > b && a > c) return (a);
    if (b > c) return (b);
    return (c);
}

float min(float a, float b, float c) {
    if (a < c && a < b) return (a);
    if (b < c) return (b);
    return (c);
}

int par(int x) {
    return (!(x % 2));
}

float dentro(float x, float y, float z) {
    if (x >= y && x <= z) return (1);
    return (0);
}

float fora(float x, float y, float z) {
    if (!dentro(x, y, z)) return (1);
    return (0);
}

int bissexto(int ano) {
    if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) return (1);
    return (0);
}

int main() {
    float x, y, z;
    printf("Digite 3 numeros: ");
    scanf("%f%f%f", &x, &y, &z);
    printf("O maior numero entre %f, %f e %f eh: %f\n", x, y, z, max(x, y, z));
    printf("O menor numero entre %f, %f e %f eh: %f\n", x, y, z, min(x, y, z));

    int q;
    printf("Digite um numero: ");
    scanf("%d", &q);
    printf("%d eh par? %d\n", q, par(q));

    float a, b, c;
    printf("Digite 3 numeros (sendo o segundo menor que o terceiro): ");
    scanf("%f%f%f", &a, &b, &c);
    printf("%f esta dentro do intervalo [%f, %f]? %f\n", a, b, c, dentro(a, b, c));

    float r, s, t;
    printf("Digite 3 numeros (sendo o segundo menor que o terceiro): ");
    scanf("%f%f%f", &r, &s, &t);
    printf("%f esta fora do intervalo [%f, %f]? %f\n", r, s, t, fora(r, s, t));

    int year;
    printf("Digite um ano qualquer: ");
    scanf("%d", &year);
    printf("O ano %d eh bissexto? %d\n", year, bissexto(year));

    return (0);
}
