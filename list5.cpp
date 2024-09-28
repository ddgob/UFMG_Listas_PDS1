#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int fat(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial = factorial * i;
    }
    return(factorial);
}

int mdc(int a, int b) {
    int mdc_teste = 1;
    if (a < b) {
        int inverter;
        inverter = b;
        b = a;
        a = inverter;
    }
    if (a % b == 0) return(b);
    do {
        mdc_teste = a % b;
        a = b;
        b = mdc_teste;
    } while (b != 0);
    return(a);
}

int mdc3(int a, int b, int c) {
    int parte1 = mdc(a, b);
    return(mdc(parte1, c));
}

int fib(int n) {
    int fib_0 = 0;
    int fib_1 = 1;
    int fib_2 = 1;
    if (n == 1 || n == 2) return(1);
    for (int i = 3; i <= n; ++i) {
        fib_0 = fib_1 + fib_2;
        fib_1 = fib_2;
        fib_2 = fib_0;
    }
    return(fib_0);
}

bool primo(int n, int divisor) {
    if (n == 0 || n == 1) return(0);
    for (int i = divisor; i > 1; --i) {
        if (n % i == 0 && i == 1) return(1);
        if (n % i == 0 && i != 1 && i != n) {
            printf("\nUm dos divisores de %d é %d.\n", n, i);
            return(0);
        }
    }
}

void decrescente(int x) {
    for (int i = x - 1; i > 0; --i) {
        printf("\n%d", i);
    }
}

int res(int a, int b) {
    if (a == b) return(0);
    if (a < b) return(a);
    do {
        a = a - b;
    } while (a >= b);
    return(a);
}

int form(int n) {
    int soma = 0;
    for (int i = 1; i <= n; ++i) {
        soma = soma + i * i;
    }
    return(soma);
}

int mmc(int a, int b, int mmc_temp) {
    if (a < b) {
        int inverter;
        inverter = b;
        b = a;
        a = inverter;
    }
    if (mdc(a, b) == 1) return(a * b);
    do {
        mmc_temp = mmc_temp - b;
        if ((mmc_temp) % a == 0 && (mmc_temp) % b == 0 && mdc((mmc_temp) / a, (mmc_temp) / b) == 1) break;
    } while (1);
    return(mmc_temp);
}

int div(int a, int b, int contador) {
    if (a < b) return(0);
    if (a == b) return(1);
    do {
        a = a - b;
        ++contador;
    } while (a >= b);
    return(contador);
}

float raiz(float n) {
    float sqrtTemp = 0;
    int contador = 0;
    do {
        if (pow(sqrtTemp, 2) < n) {
            sqrtTemp = sqrtTemp + pow(10, contador);
        } else if (pow(sqrtTemp, 2) > n) {
            sqrtTemp = sqrtTemp - pow(10, contador);
            contador = contador - 1;
        } else break;
        if (contador < -6) break;
    } while (1);
    return(sqrtTemp);
}

int dig(int n) {
    int digTemp = 0;
    if (n < 10) return(n);
    do {
        digTemp = digTemp + n % 10;
        n = n / 10;
    } while (n > 0);
    return(digTemp);
}

float expoente(float k, int n) {
    if (n == 0) {
        return(1);
    }
    float resultTemp = k;
    for (int i = 1; i < n; ++i) {
        resultTemp = resultTemp * k;
    }
    return(resultTemp);
}

void crescente(int x) {
    for (int i = 1; i <= x; ++i) {
        printf("\n%d", i);
    }
}

int main() {
    int a;
    printf("\nDigite um numero: ");
    scanf("%d", &a);
    printf("\nO fatorial de %d eh: %d\n", a, fat(a));

    int b, c;
    printf("\nDigite dois numeros: \n");
    scanf("%d%d", &b, &c);
    printf("\nO mdc de %d e %d eh: %d\n", b, c, mdc(b, c));

    int d, e, f;
    printf("\nDigite tres numeros: \n");
    scanf("%d%d%d", &d, &e, &f);
    printf("\nO mdc de %d, %d e %d eh: %d\n", d, e, f, mdc3(d, e, f));

    int g;
    printf("\nDigite um numero\n");
    scanf("%d", &g);
    printf("\nO %d-esimo termo da serie de Fibonacci eh: %d\n", g, fib(g));

    int h;
    printf("\nDigite um numero: \n");
    scanf("%d", &h);
    printf("\n%d eh primo? %d\n", h, primo(h, raiz(h)));

    int i;
    printf("\nDigite um numero: ");
    scanf("%d", &i);
    decrescente(i);

    int j, k;
    printf("\nDigite dois numeros: \n");
    scanf("%d%d", &j, &k);
    printf("\nO resto de %d e %d eh: %d\n", j, k, res(j, k));

    int l;
    printf("\nDigite um numero: ");
    scanf("%d", &l);
    printf("\nO valor do somatorio de i*i, com i variando de 1 ate %d eh : %d\n", l, form(l));

    int m, o;
    printf("\nDigite dois numeros: \n");
    scanf("%d%d", &m, &o);
    printf("\nO mmc de %d e %d eh: %d\n", m, o, mmc(m, o, m * o));

    int p, q;
    printf("\nDigite dois numeros: \n");
    scanf("%d%d", &p, &q);
    printf("\nA divisao inteira entre %d e %d eh: %d\n", p, q, div(p, q, 0));

    float r;
    printf("\nDigite um numero: \n");
    scanf("%f", &r);
    printf("\nA raiz quadrada de %f eh : %f\n", r, raiz(r));

    int s;
    printf("\nDigite um numero: \n");
    scanf("%d", &s);
    printf("\nA soma de todos os digitos de %d eh: %d\n", s, dig(s));

    float t;
    int u;
    printf("\nDigite dois numeros: \n");
    scanf("%f%d", &t, &u);
    printf("\n%f elevado a %d eh: %f\n", t, u, expoente(t, u));

    int v;
    printf("\nDigite um numero: ");
    scanf("%d", &v);
    crescente(v);
    printf("\n");

    return(0);
}
