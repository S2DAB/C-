#include "Profesor.h"


Profesor::Profesor(){}
Profesor::~Profesor(){}


Profesor::Profesor(string categoria)
{
    m_nombre =  "Desconocido";
    m_direccion = "No asignada";
    m_categoria = categoria;
}

void Profesor::mostrarCategoria()
{
    cout << endl << "El profesor" << m_nombre << " tiene categoria" << m_categoria << endl;

}
void Profesor::asignarNUE (int NUE){m_NUE = NUE;}
int Profesor::obtenerNUE() {return m_NUE ;}
