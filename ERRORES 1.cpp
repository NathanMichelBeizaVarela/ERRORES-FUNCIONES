#include <stdio.h>


float perimetrofigura(float numero) {
    float perimetro;
    perimetro = 4 * numero;
    return perimetro;
}


float areafigura(float numero) {
    float area;
    area = numero * numero;
    return area;
}

int main() {
    float num; 
    printf("Lado del cuadrado: ");
    scanf("%f", &num); 
    printf("Per�metro: %f\n", perimetrofigura(num));
    printf("�rea: %f\n", areafigura(num));
    return 0;
}

