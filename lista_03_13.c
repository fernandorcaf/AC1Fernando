#include <stdio.h>
int main()
{
    int a, b, c, d;
    float e, f, g, h;
    char v[10];
    int x;
    int *ptr = &a;

    // Inteiros

    printf("a: %x\n",&a);
    printf("b: %x\n",&b);
    printf("c: %x\n",&c);
    printf("d: %x\n",&d);

    
    // Floats
    printf("e: %x\n",&e);
    printf("f: %x\n",&f);
    printf("g: %x\n",&g);
    printf("h: %x\n",&h);
    
    // Elementos do vetor
    for (int i = 0 ; i < 10 ; i++)
        printf("vetor elemento %d: %x\n", i+1 ,&v[i]);
    

    printf("x: %x\n",&x);
   
    // Imprimindo ponteiro, e incrementado
    printf("ponteiro de a: %x\n",ptr);
    ++ptr;
    printf("Ponteiro de a incrementado: %x\n",*ptr);


    printf("Endereço do ponteiro de a incrementado não coincide com o endereço de nenhuma outra variavel. \n");


    return 0;
}