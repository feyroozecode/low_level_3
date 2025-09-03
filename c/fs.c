#include <stdio.h>
#include <stdlib.h>

int main(){
   printf("This an File R/W on CLI in c \n");

   FILE *file  = fopen("example.txt", "w"); // Open the file in write mode
   if(file == NULL){
     printf("Erreur lors de l'ouverture du fichier .\n");
     return -1;
   }
   fprintf(file, "Ceci est un exemle de fichier text.\n"); // write an text on the file
   fclose(file);  // close the file

   file = fopen("example.txt", "r"); // Open file in read Mode
   if(file == NULL){
    printf("Erreur lors de l'ouverture du fichiers=.\n");
    return -1;
   }

   char buffer[100];
   while(fgets(buffer, sizeof(buffer), file) != NULL){
      printf("Lecture  du fichier: %s", buffer);
   }
   fclose(file);

   return 0;
}
