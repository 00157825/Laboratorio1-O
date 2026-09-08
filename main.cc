#include <iostream>
void RetirarStock(int &stock, int cantidad);


int main (){

    return 0;
}

void RetirarStock(int &stock, int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        std::cout << "Se han retirado " << cantidad << " unidades del stock. Stock actual: " << stock << std::endl;
    } else {
        std::cout << "No hay suficientes unidades en el stock." << std::endl;
    }
    
}