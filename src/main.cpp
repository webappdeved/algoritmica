/* 
   ====================================================================
   Materia: Laboratorio de Programación (LPR) — 5° Año
   Institución: E.E.S.T. N° 1 "Eduardo Ader" — Vicente López
   Archivo: src/main.cpp
   Actividad 9: Práctica En Papel "Pensar Antes De Programar
   Docente: Mansilla Muñoz York
   Estudiante: Zacarias Gabriel
   ====================================================================
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    // DEFINIR nombre COMO TEXTO
    string nombre;
    
    // DEFINIR anioNacimiento, edad COMO ENTERO
    int anioNacimiento, edad;

    // ESCRIBIR "Ingrese su nombre:" / LEER nombre
    cout << "Ingrese su nombre: ";
    getline(cin, nombre);

    // ESCRIBIR "Ingrese su año de nacimiento:" / LEER anioNacimiento
    cout << "Ingrese su año de nacimiento: ";
    cin >> anioNacimiento;

    // Cálculo de edad
    edad = 2026 - anioNacimiento;

    // ESCRIBIR resultado final
    cout << "Hola " << nombre << ", tu edad estimada en 2026 es: " << edad << " años." << endl;

    return 0;
}
