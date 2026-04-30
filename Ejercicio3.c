#include <stdio.h>
int resultado; //variable global
void multiplicar(); // prototipo de la función
int main() 
{
    multiplicar(); //llamado de la función multiplicar 
    printf("El resultado es: %i",resultado);
    return 0;
}
void multiplicar() //función multiplicar 
{
    resultado = 5 * 4;
}
