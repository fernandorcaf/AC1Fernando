#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int valida_mail(char *s);
int main()
{
    char email[65];
    char *s = email;
    printf("Insira seu email:");
    scanf("%64[^\n]", email);
    if(valida_mail(s) == 1)
        printf("Email valido");
    else
        printf("Email invalido");
    return 0;
}

int valida_mail(char *s){
    int i, j;
    int n = strlen(s);
    int erro = 1;
    char limits[] = "1234567890-_.";
    char dot = '.';
    if (n < 2){
        erro = 0;
    }
    for (i = 0; i < 13; i++){
        if (s[0] == limits[i]){
            erro = 0;
        }
        if (n == 2 && s[1] == limits[i]){
            erro = 0;
        }
    }
    for (j = 1; j < n; j++){
        if (s[j] == dot && s[j] == s[j-1]){
            erro = 0;
        }
        if (s[j] < 'a' || s[j] > 'z'){
            if(s[j] < 'A' || s[j] > 'Z'){
                erro = 0;
            }
        }
    }

    if (s[n - 1] == dot){
        erro = 0;
    }
    return erro;
}
