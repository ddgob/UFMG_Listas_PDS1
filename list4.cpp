#include <stdio.h>

int fat(int n) {
    if (n == 0) return(1);
    return(n * fat(n - 1));
}

int mdc(int a, int b) {
    if (a > b) {
        if (a % b == 0) return(b);
        if (a % b != 0) return(mdc(b, a % b));
    }
    if (b % a == 0) return(a);
    if (b % a != 0) return(mdc(a, b % a));
}

int mdc3(int a, int b, int c) {
    return(mdc(mdc(a, b), c));
}

int fib(int n) {
    if (n == 1) return(1);
    if (n == 2) return(1);
    if (n >= 3) return(fib(n - 1) + fib(n - 2));
}

int primo(int x, int divisor) {
    if (divisor == 1) return(1);
    if (x % divisor == 0) return(0);
    return(primo(x, divisor - 1));
}

void decrescente(int x) {
    if (x == 0) return;
    printf("%d\n", x);
    return(decrescente(x - 1));
}

int res(int a, int b, int multiplo) {
    if (a < b) return(a);
    if (a == b * multiplo) return(0);
    if (a < b * multiplo) return(a - b * (multiplo - 1));
    if (multiplo == 0) return(1);
    return(res(a, b, multiplo + 1));
}

int form(int n) {
    if (n == 1) return(1);
    return(n * n + form(n - 1));
}

int mmc(int a, int b, int mmc_chute) {
    if (a < b) {
        int inverter;
        inverter = b;
        b = a;
        a = inverter;
    }
    if (mdc(a, b) == 1) return(a * b);
    if (mmc_chute % a == 0 && mmc_chute % b == 0 && mdc(mmc_chute / a, mmc_chute / b) == 1) return(mmc_chute);
    return(mmc(a, b, mmc_chute - b));
}

int div(int a, int b, int cont) {
    if (b * cont == a) return(cont);
    if (a < b * cont) return(cont - 1);
    return(div(a, b, cont + 1));
}

float raiz(float n, float chute) {
    if (chute * chute <= n + 0.001 && chute * chute >= n - 0.001) return(chute);
    if (chute > n + 0.001) return(raiz(n, chute / 2.0));
    return(raiz(n, chute * 3.0 / 2.0));
}

int dig(int n) {
    if (n < 10) return(n);
    return(n % 10 + dig(n / 10));
}

int elevado(int k, int n) {
    if (n == 1) return(k);
    return(k * elevado(k, n - 1));
}

void crescente(int x, int cont, int stay) {
    if (x > 1 && x <= stay && cont < stay) return(crescente(x - 1, cont + 1, stay));
    printf("%d\n", x);
    if (x < stay) crescente(x + 1, cont, stay);
    return;
}

int main() {
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number);
    printf("O fatorial de %d: %d\n", number, fat(number));

    int a, b;
    printf("Digite dois numeros: ");
    scanf("%d%d", &a, &b);
    printf("O maximo divisor comum de %d e %d eh: %d\n", a, b, mdc(a, b));

    int c, d, e;
    printf("Digite tres numeros: ");
    scanf("%d%d%d", &c, &d, &e);
    printf("O maximo divisor comum de %d, %d e %d eh: %d\n", c, d, e, mdc3(c, d, e));

    int f;
    printf("Digite um numero: ");
    scanf("%d", &f);
    printf("O %d-esimo termo da serie de Fibonacci eh: %d\n", f, fib(f));

    int g;
    printf("Digite um numero: ");
    scanf("%d", &g);
    printf("O numero %d eh primo? %d\n", g, primo(g, g - 1));

    int h;
    printf("Digite um numero: ");
    scanf("%d", &h);
    printf("Em ordem decrescente, todos os inteiros maiores que 0 e menores ou iguais a %d:\n", h);
    decrescente(h);

    int i, j, k;
    k = 1;
    printf("Digite dois numeros: ");
    scanf("%d%d", &i, &j);
    printf("O resto da divisao de %d por %d eh: %d\n", i, j, res(i, j, k));
    printf("%d\n", i % j);

    int l;
    printf("Digite um numero: ");
    scanf("%d", &l);
    printf("O valor do somatorio de i*i, com i variando de 1 ate n. eh: %d\n", form(l));

    int m, n;
    printf("Digite dois numeros: ");
    scanf("%d%d", &m, &n);
    printf("O mmc entre %d e %d eh: %d\n", m, n, mmc(m, n, m * n));

    int o, p, q;
    q = 1;
    printf("Digite dois numeros: ");
    scanf("%d%d", &o, &p);
    printf("O resultado da divisao inteira de %d por %d eh: %d\n", o, p, div(o, p, q));

    float r;
    printf("Digite um numero: ");
    scanf("%f", &r);
    printf("A raiz quadrada de %f (com precisao de 0.001) eh: %f\n", r, raiz(r, r));

    int t;
    printf("Digite um numero: ");
    scanf("%d", &t);
    printf("A soma dos digitos de %d eh: %d\n", t, dig(t));

    int v, w;
    printf("Digite dois numeros: ");
    scanf("%d%d", &v, &w);
    printf("%d elevado a %d eh: %d\n", v, w, elevado(v, w));

    int x, y;
    y = 1;
    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a %d:\n", x);
    crescente(x, y, x);

    return(0);
}
