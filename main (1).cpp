//#include<iostream>
#include "Persona.h"
#include "Profesor.h"
//#include "Profesor.h"
//using namespace std;
#include <vector>


int main ()
{
    int nuevaEdad;
    Persona p = Persona("César", "Villa Real");
    Persona q = Persona( "Alejandra", "Titanio");
    vector <Persona> personas;
    personas.push_back (p);
    personas.push_back (q);
    for (int i=0; i<2; i++)
{

        personas.at(i).asignarEdad (18);
    personas.at(i).mostrarDatos();
}
    p.asignarEdad(19);
    p.enviarSaludo();
    p.mostrarDatos();

    cout << "Los datos de q son :" << endl;
    q.mostrarDatos();


    nuevaEdad = p.obtenerEdad() + 10;
    p.asignarEdad (nuevaEdad);
    p.mostrarDatos();


    Profesor prof = Profesor("Asociado A");
    prof.mostrarDatos ();
    prof.mostrarCategorias();
    prof.asignarEdad(23);
    prof.asignarNombre("Luis");
    prof.asignarDireccion("San Pedro");
    prof.asignarNUE(456);
    prof.mostrarDatos();
    cout << "Desde"

















    return 0;
}
