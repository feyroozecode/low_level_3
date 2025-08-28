#include <stdio.h>
#include <stdlib.h>
typedef struct {
    char name[50];
    int age;
} Person;

int main(){
    // Allocation de memoire dynamique
    //
    int *ptr_int = (int *) malloc(sizeof(int));
    if(ptr_int == NULL){
        printf("Erreur d'allocaition de mémoire.\n");
    }
    *ptr_int = 10;
    printf("Valeur alouée dynamiquement: %d\n", *ptr_int);
    free(ptr_int); // liberer la mémoire
}
