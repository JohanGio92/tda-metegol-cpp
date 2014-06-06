#ifndef METEGOL_H_
#define METEGOL_H_

#include <string>

class Metegol {

    private:

        unsigned int pelotasPorJugar;

        std::string  nombreLocal;
        unsigned int puntosLocal;

        std::string  nombreVisitante;
        unsigned int puntosVisitante;

    public:

        /*
         * pre : 'pelotas' es mayor a 0.
         * post: inicia el partido de Metegol entre los equipos 'local' y
         *       'visitante', ambos sin puntos.
         *       El partido finalizará al anotar tantos goles como 'pelotas'.
         */
        Metegol(unsigned int pelotas, std::string local, std::string visitante);

        ~Metegol();
};

#endif /* METEGOL_H_ */
