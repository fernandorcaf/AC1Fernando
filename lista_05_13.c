#include <stdio.h>
#include <string.h>
int main (void)
{
  char s1[15] = "Curso de C";
  char s2[15] = "Curso de Java";
  int retorno;
  retorno = strncmp(s1, s2, 5);
  printf("retorno = %d\n", retorno);


  	char str[100] = "Programacao";
  	strcat(str, " estruturada em C");

  	printf(" %s\n", str);

  	char name[15];

  	strcpy(name, "nomeNovo");

  	printf("Nome = %s", name);

  return 0;
}
