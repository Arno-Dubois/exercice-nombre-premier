#include <stdio.h>
#include "stdlib.h"
#include "time.h"

void nombrePremier (int n){
    int i = 2;
    while (i < n && (n % i != 0)){
        ++i;
    }
    if (i == n){
        printf("Le nombre %d est un nombre premier  \n", n);
    } else {
        printf ("Le nombre %d n'est pas un nombre premier\n", n);
    }
}

int main() {
    srand(time(NULL));
    int randomNumber = rand();
    int nombre;

    printf("Veuillez rentrer un nombre : \n");
    scanf("%d", &nombre);
    nombrePremier(nombre + randomNumber);
    return 0;
}
