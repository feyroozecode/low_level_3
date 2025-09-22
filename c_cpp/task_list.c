
#include <_string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INITIAL_CAPACITY 2

typedef struct {
    char *description;
    int completed;
} Task;

typedef  struct {
    Task *tasks;
    int size;
    int capacity;
} TodoLListC;

void initTodo(TodoLListC *list){
   list->tasks = (Task *)malloc(sizeof(Task) * INITIAL_CAPACITY);
   if(list->tasks == NULL ){
       printf("Error: Failed to allocate memory.\n");
       exit(EXIT_FAILURE);
   } 
   list -> size = 0; // Initial size is zero
   list -> capacity = INITIAL_CAPACITY; // Initial capacity
}

// add task 
void add_task_c(TodoLListC *list, const char *description) {
    if(list->size == list->capacity) {
        
        list->capacity *=2;
        list->tasks = (Task *)realloc(list->tasks,  sizeof(Task) * list->capacity);
        
        if (list->tasks == NULL) {
            printf("Error: Failed to duplicate memory.\n");
            exit(EXIT_FAILURE);
        }}
        list->tasks[list->size].description = strdup(description);
        list->tasks[list->size].completed = 0;
        list->size++;
        printf("Task added successfully.");
    
}
 
void list_tasks_c(const TodoLListC *list ){
    if (list->size == 0) {
        printf("No tasks found.\n");
    } else {
        printf("Tasks:\n");
        for (int i = 0; i < list->size; i++) {
            printf("%d. %s\n", i + 1, list->tasks[i].description);
        }
    }
 return;
}

void free_tasks_list_c(TodoLListC *list){
    printf("Freeing memory...");
   for(int i =0; i< list->size; i++){
    free(list -> tasks[i].description);
   }
   free(list->tasks);
   list->tasks = NULL;
   list->size = 0;
   list->capacity = 0;
}

int main(){
    TodoLListC list;
    initTodo(&list);

    add_task_c(&list, "Buy groceries");
    add_task_c(&list, "Clean the house");
    add_task_c(&list, "Read a book");

    list_tasks_c(&list);

    free_tasks_list_c(&list);

    return 0;

}


