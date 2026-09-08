#include <iostream>

void IngresarStock(int &stock, int cantidad);
void RetirarStock(int &stock, int cantidad);
void fConsultarStock(int stock);

int main()
{
    int stock = 50;

    std::cout << "Stock inicial: " << stock << std::endl;

    IngresarStock(stock, 40);
    fConsultarStock(stock);

    RetirarStock(stock, 100);
    fConsultarStock(stock);

    return 0;
}

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

void RetirarStock(int &stock, int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        std::cout << "Se han retirado " << cantidad << " unidades del stock. Stock actual: " << stock << std::endl;
    } else {
        std::cout << "No hay suficientes unidades en el stock." << std::endl;
    }
    
}

void fConsultarStock(int stock)
{
    std::cout << "la cantidad de stock es: " << stock << std::endl;
}