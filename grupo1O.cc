#include <iostream>

void IngresarStock(int &stock, int cantidad)
{
    if (cantidad < 0)
    {
        std::cout << "No se permiten numeros negativos" << std::endl;
    }

    else
    {
        stock += cantidad;
        std::cout << "Operación Exitosa. Se ingresaron: " << cantidad << " unidades" << std::endl;
    }
}

int main()
{
}