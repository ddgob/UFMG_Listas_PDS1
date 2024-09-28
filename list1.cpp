#include <stdio.h>
#include <math.h>
int main(){
    //Exercício 1
    printf("1-a) O resultado da expressao eh: %d\n", 3 + 4);
    printf("1-b) O resultado da expressao eh: %d\n", 7 / 4);
    printf("1-c) O resultado da expressao eh: %f\n", pow(3, 2));
    printf("1-d) O resultado da expressao eh: %f\n", 5.3 * 2.1);
    printf("1-e) O resultado da expressao eh: %d\n", 2 * 5 - 2);
    printf("1-f) O resultado da expressao eh: %d\n", 2 + 2 * 5);
    printf("1-g) O resultado da expressao eh: %d\n", (2 + 5) * 3);
    printf("1-h) O resultado da expressao eh: %f\n", sin(3.141502));
    printf("1-i) O resultado da expressao eh: %f\n", sqrt(5));
    printf("1-j) O resultado da expressao eh: %d\n", 1 + 2 + 3);
    printf("1-k) O resultado da expressao eh: %d\n", 1 * 2 * 3);
    printf("1-l) On resultado da expressao eh: %f\n", (1 + 2 + 3) / 3.0);
    printf("1-m) O resultado da expressao eh: %d\n", (2 + 4) * (3 - 1));
    printf("1-n) O resultado da expressao eh: %d\n", (9 / 3) + (3 * 2));
    printf("1-o) O resultado da expressao eh: %f\n", sin(4.5) + cos(3.7));
    printf("1-p) O resultado da expressao eh: %f\n", log(2.3) - log(3.1));
    printf("1-q) O resultado da expressao eh: %f\n", log(7) + (log(7) *
    log(7) - cos(log(7))));
    printf("1-r) O resultado da expressao eh: %f\n", (10.3 + 8.4) / 50.3 -
    (10.3 + 8.4));
    printf("1-s) O resultado da expressao eh: %f\n", (cos(0.8) + sin(0.8)) *
    (cos(0.8) - sin(0.8)));

    //Exercício 2
    float a, b, c, d;
    scanf("%f%f%f%f", &a, &b, &c, &d);
    printf("2-a) O resultado da expressao eh: %f\n", a + b);
    printf("2-b) O resultado da expressao eh: %f\n", a / c);
    printf("2-c) O resultado da expressao eh: %f\n", pow(a, 2));
    printf("2-d) O resultado da expressao eh: %f\n", b * c);
    printf("2-e) O resultado da expressao eh: %f\n", a * b - c);
    printf("2-f) O resultado da expressao eh: %f\n", a + b * c);
    printf("2-g) O resultado da expressao eh: %f\n", (a + b) * c);
    printf("2-h) O resultado da expressao eh: %f\n", sin(a));
    printf("2-i) O resultado da expressao eh: %f\n", sqrt(b));
    printf("2-j) O resultado da expressao eh: %f\n", a + b + c);
    printf("2-k) O resultado da expressao eh: %f\n", a * b * c);
    printf("2-l) O resultado da expressao eh: %f\n", (a + b + c) / d);
    printf("2-m) O resultado da expressao eh: %f\n", (a + b) * (a - d));
    printf("2-n) O resultado da expressao eh: %f\n", (b / c) + (a * d));
    printf("2-o) O resultado da expressao eh: %f\n", sin(b) + cos(c));
    printf("2-p) O resultado da expressao eh: %f\n", log(a) - log(c));
    printf("2-q) O resultado da expressao eh: %f\n", log(a) + (log(b)* 
    log(d) - cos(log(c))));
    printf("2-r) O resultado da expressao eh: %f\n", (b + a) / c - (d + a));
    printf("2-s) O resultado da expressao eh: %f\n", (cos(d) + sin(c)) *
    (cos(b) - sin(a)));

    //Exercício 3
    float e, f, g;
    scanf("%f%f%f", &e, &f, &g);
    printf("3-a) A media eh: %f\n", (e + f + g) / 3);
    printf("3-b) A media ponderada eh: %f\n", (e * 3 + f * 4 + g * 5) / (3 +
    4 + 5));
    printf("3-c) O perimetro do circulo eh: %f\n", 2 * 3.14159265359 * e);
    printf("3-d) A area do circulo eh: %f\n", 3.14159265359 * pow(e, 2));
    printf("3-e) A area do triangulo eh: %f\n", f * g / 2);
    printf("3-f) O comprimento da hipotenusa eh: %f\n", sqrt(pow(f, 2) +
    pow(g, 2)));
    printf("3-g) As raizes da equacao sao: %f e %f\n", (-f + sqrt(pow(f, 2)
    - 4 * e * g)) / 2 * e, (-f - sqrt(pow(f, 2) - 4 * e * g)) / 2 * e);
    return(1);
}