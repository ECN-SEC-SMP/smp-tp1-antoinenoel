#include "fibonnaci.h"

int main()
{
    Fibonacci fib = Fibonacci(); // creation de l'objet
    fib.calculFibonacci(0,1);
    fib.printFibonacci();
}