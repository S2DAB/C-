#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>

using namespace std;

 class Persona
 {
     protected:
     string m_nombre;
     string m_direccion;
     int m_edad;

     public:
     Persona();
     Persona (string nombre, string direccion);
     ~Persona();
     void mostrarDatos();
     virtual void enviarSaludo(){ cout << "Saludos desde César" << endl; }
     //Getters

     int obtenerEdad();
     string obtenerNombre();
     string obtenerDireccion();

     //Setters
     void asignarEdad (int edad);
     void asignarNombre(string nombre);
     void asignarDireccion(string direccion);
 };








#endif // PERSONA
