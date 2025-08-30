#include <stdio.h>


int main(){
  
  #ifdef  __WIN32__
     printf("OS DETECTED Windows \n"); 

  #elif __linux__
     printf("U are using LINUX OS")
  
  #elif  __APPLE__
    printf("Ok you're on  MACOS");
 
  #else
   printf("Hello from Uknown OS");

  #endif

  return 0;
}
