#include "Persona.h"

Persona::Persona()
{
    cout << "Soy el constructor default" << endl;
    //dtor
}
Persona::Persona(string nombre, string direccion)
{
    m_nombre    = nombre;
    m_direccion = direccion;
}
Persona::~Persona()
{
    //dtor

}
void Persona::mostrarDatos()
{
    cout << endl << "Mi nombre es : " << m_nombre << endl;
    cout << "Vivo en : "     << m_direccion << endl;
    cout << "Tengo :  "        << m_edad << " años" << endl;
}


//void Persona::enviarSaludo()
//{
  //  cout << "Saludos enviados por " << m_nombre << endl;
//}

int Persona::obtenerEdad(){return m_edad ;}
string Persona::obtenerNombre() {return m_nombre ;}
string Persona::obtenerDireccion() {return m_direccion ;}

void Persona::asignarEdad(int edad){m_edad = edad;}
void Persona::asignarNombre(string nombre) {m_nombre = nombre;}
void Persona::asignarDireccion(string direccion) {m_direccion = direccion;}


