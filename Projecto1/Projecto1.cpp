#include "pch.h"

using namespace System;

int fibonacci(int n) {
    return (n <= 1) ? n : fibonacci(n - 1) + fibonacci(n - 2);
}

int sumaFibonacci(int n) {
    if (n <= 0) return 0;
    int a = 0, b = 1, suma = 0;
    for (int i = 0;i <= n;i++) {
        suma += a;
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }
    return suma;
}

int main(array<System::String ^> ^args)
{
    Console::WriteLine(fibonacci(10));
    Console::WriteLine(sumaFibonacci(3));
    return 0;
}

