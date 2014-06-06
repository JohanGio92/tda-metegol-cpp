#include <iostream>
#include "Metegol.h"
using namespace std;

int main() {

    cout << ".:: Metegol ::." << endl;

    Metegol partido(6, "Deportivo Bucle", "Atletico Condicional");

    cout << "Partido iniciado" << endl;
    cout << "Pelotas por jugar: " << partido.obtenerPelotasPorJugar() << endl;

    return 0;
}
