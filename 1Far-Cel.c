/* Transforma fahrenheit to celsius */
#include<stdio.h>

int main() {
    float fah, cel;

    printf("INSTRUÇÃO\n");
    printf("Digite um numero de 0 a 100 que represente o fahrenheit para conversão em celsius\n\n");
    
    printf("fah = ");
    scanf("%f", &fah);
    printf("\nfahrenheit: %.2f\n", fah);

    cel = 5.0*(fah-32)/9.0;
    printf("celsius: %.2f\n", cel);

    printf("\n--------------------------\n");
}