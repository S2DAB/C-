#ifndef PROFESOR_H
#define PROFESOR_H
#include "Persona.h"
class Profesor : public Persona
{
private:
    std::string m_categoria;
    int m_NUE;

public:
    Profesor();
    Profesor(string categoria);
    ~Profesor();



    void mostrarCategorias();

    void asignarNUE (int NUE);
    void asignarCategoria(string categoria);


    int obtenerNUE();
    string obtenerCategoria();
    void enviarSaludo();
    };










#endif // Profesor_H

