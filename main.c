#include <stdio.h>
#include "libmatematica.h"


void main(){
    float angulo_radianos;
    scanf("%f", &angulo_radianos);

    printf("o seno eh: %.3f", calcular_seno(angulo_radianos));
    printf("\no cosseno eh: %.3f", calcular_cosseno(angulo_radianos));
    printf("\na tangente eh: %.3f", calcular_tangente(angulo_radianos));
}