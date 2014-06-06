#include <string>
#include "gtest/gtest.h"

#include "Metegol.cpp" // hack

using namespace std;

TEST( MetegolTest, crearMetegol ) {

    Metegol partido(14, "Deportivo Bucle", "Atletico Condicional");
}

TEST( MetegolTest, obtenerPelotasPorJugar ) {

    Metegol partido(5, "Deportivo Bucle", "Atletico Condicional");

    unsigned int pelotas = partido.obtenerPelotasPorJugar();

    ASSERT_EQ(5, pelotas);
}
