#include <stdlib.h>
#include <stdio.h>
void main() {
    
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    
    printf("contador/valor/valor/endereco/endereco");
    
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i); // i = 0, i = 1, i = 2, i = 3, i = 4
        
        printf(" vet[%d] = %.1f",i, vet[i]); // vet[0] = 1.1, vet[1] = 2.2, vet[2] = 3.3, vet[3] = 4.4, vet[4] = 5.5
        
        printf(" *(f + %d) = %.1f",i, *(f+i)); // *(f + 0) = 1.1, *(f + 1) = 2.2, *(f + 2) = 3.3, *(f + 3) = 4.4, *(f + 4) = 4.4
        
        printf(" &vet[%d] = %X",i, &vet[i]); // &vet[0] = endereco de memoria de vet[0], &vet[1] = endereco de memoria de vet[1], &vet[2] = endereco de memoria de vet[2], &vet[3] = endereco de memoria de vet[3], &vet[4] = endereco de memoria de vet[4]
        
        printf(" (f + %d) = %X",i, f+i); // (f + 0) = endereço de memoria de 1.1, (f + 1) = endereço de memoria de 2.2, (f + 2) = endereço de memoria de 3.3, (f + 3) = endereço de memoria de 4.4, (f + 4) = endereço de memoria de 5.5
    }
    
}
