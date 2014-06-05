#ifndef METEGOL_H_
#define METEGOL_H_

#include <string>

class Metegol {

    private:

        unsigned int pelotasPorJugar;
        std::string nombreLocal;
        std::string nombreVisitante;

    public:

        /*
         * pre : pelotas es mayor a 0.
         * post: inicia el partido de Metegol entre los equipos 'local' y
         *       'visitante', que finalizará al anotar tantos goles como
         *       'pelotas'.
         */
        Metegol(unsigned int pelotas, std::string local, std::string visitante);

        ~Metegol();
};

#endif /* METEGOL_H_ */
