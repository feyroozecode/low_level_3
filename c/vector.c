#include <_time.h>
#include <stdio.h>
#include <stdlib.h>

// Declare object of the Vector
typedef struct {
    int *data;
    size_t size;      // Number of element that saved NOW
    size_t capacity;  // Total capacity of the Vector
} IntVector ;

// Initialize a new vector
void init_vector(IntVector *vec, size_t initial_capacity){
    vec->data = (int *) malloc(initial_capacity * sizeof(int));
    if(vec->data == NULL){
        perror("Error of Allocate Memory for the Vector");
        exit(EXIT_FAILURE);
    }
    vec->size = 0;
    vec->capacity = initial_capacity;
}

/// Adust an element to the vector end
void add_element(IntVector *vec, int el){
    if(vec->size == vec->capacity) {
        // Double the capacity if necessary
        vec->capacity *= 2;
        vec->data = (int *) realloc(vec->data, vec->capacity * sizeof(int));
        if(vec->data == NULL){
            perror("Error of reallocating memor to the vector");
        }
    }
    vec->data[vec->size++] = el;
}

// Free memory allocated to the vector
void free_vector(IntVector *vec){
    free(vec->data);
    vec->data = NULL;
    vec->size = 0;
    vec->capacity = 0;
}

int main(){
    printf("Vector Allocation Test...");
    IntVector my_vector;
    init_vector(&my_vector, 2); // Start with a capacity of 2

    add_element(&my_vector, 10);
    add_element(&my_vector, 20);
    add_element(&my_vector, 30);  //it can Trigger

    printf("Element of the Vector: ");
    for (size_t i ; i<my_vector.size; i++) {
        printf("%d", my_vector.data[i]);
    }
    printf("\n");
    printf("Actual size: %zu, Capacity: %zu\n", my_vector.size, my_vector.capacity);

    free_vector(&my_vector);

    return 0;
}
