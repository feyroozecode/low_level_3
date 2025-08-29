#include <stdio.h>
#include <stdlib.h>

int add(int a,int b) {return a +b;}
int sub(int x, int y){return x - y;}
int multiply(int x, int y){return x * y;}
int divide(int x, int y){
    if(y < 0){ printf("NAN"); return -1; }
    else { return x/y; }
}

// main
int main(int argc, char *argv[]){

    // Calculatrice, ADD, SUBS, MULTIPLY, DIVIDE
    printf("******* Bienvenue sur la super C-Calc *******\n");
    if(argc != 4){
        printf("Usage: %s <numbre1> <operator> number2\n", argv[0]);
        return 1;
    }

    double num1 = atof(argv[1]);
    char operator = argv[2][0];
    double num2    = atof(argv[3]);
    double result;

    switch (operator) {
        case '+': result = add(num1, num2);         break;
        case '-': result = sub(num1, num2);         break;
        case 'x': result = multiply(num1, num2);    break;
        case '/': result = divide(num1, num2);      break;
        default:  printf("Operateur invalide. Utiliser +, -, x, ou /. \n");
        return 1;
    }
    printf("Résultat: %.2f\n", result);

    return 0;
}
