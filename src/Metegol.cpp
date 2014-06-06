#include "Metegol.h"

using namespace std;

Metegol::Metegol(unsigned int pelotas, string local, string visitante) {

    /* asegura que la cantidad de pelotas sea mayor a cero */
    this->pelotasPorJugar = pelotas > 0 ? pelotas : 1;

    this->nombreLocal = local;
    this->nombreVisitante = visitante;

    this->puntosLocal = 0;
    this->puntosVisitante = 0;
}

Metegol::~Metegol() {
}

