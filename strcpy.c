#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int n, nn;
    char aux[10], vetor[10][10] = {
        "Luciano", "Maria", "Zeca", "Bruno", "Enrique", "Gertruide", "Daniel",
        "Kim", "Adriana" };
        printf("Adicione um Aluno");
        for (n = 0; n < 10; n++){
              for (nn = n; nn < 10; nn++){
                    if (strcmp(vetor[n], vetor[nn]) >  0){
                          strcpy (aux, vetor[n]);
                          strcpy (vetor[n], vetor[nn]);
                          strcpy (vetor[nn], aux); }}}

    system ("title Nomes em ordem crescente :3");
    printf("Em ordem:\n\n");
    for (n = 0; n < 10; n++){
          printf("%s\n",vetor[n]); }
    return  0; }
