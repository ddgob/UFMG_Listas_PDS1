#include <stdio.h>
#include <math.h>

float media(float a, float b, float c) {
    return ((a + b + c) / 3);
}

float mediaPonderada(float a, float b, float c) {
    return ((a * 3 + b * 4 + c * 5) / (3 + 4 + 5));
}

float perimetroCirculo(float r) {
    return (2 * 3.14159265359 * r);
}

float areaCirculo(float r) {
    return (3.14159265359 * pow(r, 2));
}

float areaTriangulo(float b, float c) {
    return (b * c / 2);
}

float areaCaixa(float a, float b, float c) {
    return (2 * (a * b + b * c + a * c));
}

float volumeCaixa(float a, float b, float c) {
    return (a * b * c);
}

float areaCilindro(float r, float h) {
    return (2 * areaCirculo(r) + (perimetroCirculo(r) * h));
}

float volumeCilindro(float r, float h) {
    return (areaCirculo(r) * h);
}

float hipotenusaTrianguloRetangulo(float b, float c) {
    return (sqrt(pow(b, 2) + pow(c, 2)));
}

float raizPositivaEquacaoSegundoGrau(float a, float b, float c) {
    return ((-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a));
}

int main() {
    float a, b, c;
    printf("Digite 3 valores: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("1.a) A media entre %f, %f e %f eh: %f\n", a, b, c, media(a, b, c));
    
    printf("1.b) A media ponderada entre %f, %f e %f eh: %f\n", a, b, c, mediaPonderada(a, b, c));
    
    float raioCirculo;
    printf("Digite um valor de raio para um circulo: ");
    scanf("%f", &raioCirculo);
    printf("1.c) O perimetro de um circulo de raio %f eh: %f\n", raioCirculo, perimetroCirculo(raioCirculo));
    printf("1.d) A area de um circulo de raio %f eh: %f\n", raioCirculo, areaCirculo(raioCirculo));
    
    float baseTriangulo, alturaTriangulo;
    printf("Digite um valor de base e altura para um triangulo, respectivamente: ");
    scanf("%f%f", &baseTriangulo, &alturaTriangulo);
    printf("1.e) A area do triangulo de base %f e altura %f eh: %f\n", baseTriangulo, alturaTriangulo, areaTriangulo(baseTriangulo, alturaTriangulo));
    
    float larguraCaixa, comprimentoCaixa, alturaCaixa;
    printf("Digite um valor de comprimento, largura e altura para uma caixa, respectivamente: ");
    scanf("%f%f%f", &comprimentoCaixa, &larguraCaixa, &alturaCaixa);
    printf("1.f) A area da caixa de dimensoes %f, %f e %f eh: %f\n", comprimentoCaixa, larguraCaixa, alturaCaixa, areaCaixa(comprimentoCaixa, larguraCaixa, alturaCaixa));
    printf("1.g) O volume da caixa de dimensoes %f, %f e %f eh: %f\n", comprimentoCaixa, larguraCaixa, alturaCaixa, volumeCaixa(comprimentoCaixa, larguraCaixa, alturaCaixa));
    
    float raioCilindro, alturaCilindro;
    printf("Digite um valor de raio e altura para um cilindro, respectivamente: ");
    scanf("%f%f", &raioCilindro, &alturaCilindro);
    printf("1.h) A area do cilindro de raio %f e altura %f eh: %f\n", raioCilindro, alturaCilindro, areaCilindro(raioCilindro, alturaCilindro));
    printf("1.h) O volume do cilindro de raio %f e altura %f eh: %f\n", raioCilindro, alturaCilindro, volumeCilindro(raioCilindro, alturaCilindro));
    
    float cateto1, cateto2;
    printf("Digite um valor para cada cateto de um triangulo: ");
    scanf("%f%f", &cateto1, &cateto2);
    printf("1.j) A hipotenusa de um triangulo com catetos %f e %f mede: %f\n", cateto1, cateto2, hipotenusaTrianguloRetangulo(cateto1, cateto2));
    
    float coeficienteA, coeficienteB, coeficienteC;
    printf("Digite o valor dos coeficientes a, b e c da equacao ax^2 + bx + c = 0, respectivamente: ");
    scanf("%f%f%f", &coeficienteA, &coeficienteB, &coeficienteC);
    printf("1.k) A raiz positiva para a equacao %fx^2 + %fx + %f = 0 eh: %f\n", coeficienteA, coeficienteB, coeficienteC, raizPositivaEquacaoSegundoGrau(coeficienteA, coeficienteB, coeficienteC));
    
    return 0;
}