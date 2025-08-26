#include <math.h>
#include <stdio.h>

int add (int a, int b){
    return a+b;
}

int main(){
 int age = 25;
 float weight = 55.7;
 char grade = 'A';

  printf("Donc vous etes agée de %d, poids %1f, VOTRE GRADE est %c\n", age, weight, grade );

  // Operaters
  int a = 14, b = 21;
  printf("Sum: %d , Differences %d \n", (a+b), a - b);

  // Loops
  for (int i = 0; i<= sqrt(25); i++){
      printf("Postion: %d", i);
      printf("\n");
  }
  printf("\n");

  // funciton
  int sume_result = add(a, b);
  printf("Results of Sum of %d and %d = %d \n", a, b, sume_result);

  return 0;

}
