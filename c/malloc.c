#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    double weight;
} Person;

int main(){
    // Allocation de memoire dynamique
    int *ptr_int = (int *) malloc(sizeof(int));

    if(ptr_int == NULL){
        printf("Erreur d'allocaition de mémoire.\n");
    }
    *ptr_int = 10;
    printf("Valeur alouée dynamiquement: %d\n", *ptr_int);
    free(ptr_int); // liberer la mémoire

   // Allcoation dynamique pour une structure
   Person *p  = (Person *) malloc(sizeof(Person));
   if ( p == NULL) {
     printf("Erreur d'allocation de mémoire pour person.\n");
     return  -1;
   }
   strcpy(p->name, "Ali");
   p->age = 25;
   p->weight = 65.5;
   printf("Person: %s est agé de %d  et vous paisiez %f \n", p->name, p->age, p->weight);

   return 0;
}
