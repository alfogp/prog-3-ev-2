// Alfonso Carvallo 
// C.I 30.039.952
//U.C: PROGRAMACION 3 SECCION 2
//UNERG AIS
                        //ALGORITMO BASICO CON EJEMPLOS DE CLASES, ATRIBUTOS, METODOS E INSTANCIAS, BAJO EL LENGUAJE DE C++
                                                     //EJEMPLOS DE AUTOMOVILES Y MOTOS:


#include <iostream>
#include <windows.h>
using namespace std; 
//Clase

class CarroGeepetta{

//Atributos

public: int year;
public: int matricula; 
public: char color;

//Metodos 

public:
void EncenderMotor () {
    system ("sonido de motor.mp3")
    std::cout << "Se encendió el motor" << std::endl;

}
public:  
void Acelerar () {
        system ("acelerar.mp3")
    std::cout << "El carro arranco.." << std::endl;
}
public: 
void Frenar (){ 
        system ("freno.mp3")
    std::cout << "Se encendio el motor..." << std::endl;
}

//Instancias:
CarroGeepetta Lamborghini;

Lamborghini.year= 2018; 
Lamborghini.matricula= 6541652132
Lamborghini.color= 'A';
std::cout << "El color del Auto es:" << Lamborghini.color << std::endl;

CarroGeepetta Mustang;

Mustang.year= 2007; 
Mustang.matricula= 5415645
Mustang.color= 'V';
std::cout << "El color del Auto es:" << Mustang.color << std::endl;

CarroGeepetta Ferrari;

Ferrari.year= 2007; 
Ferrari.matricula= 5415645
Ferrari.color= 'R';
std::cout << "El color del Auto es:" << Ferrari.color << std::endl;

};

//Clase #2:
#include <iostream>
#include <windows.h>
using namespace std; 


class MotoGP{

//Atributos

public: int year;
public: int matricula; 
public: char color;

//Metodos 

public:
void EncenderMotor () {
    system ("sonido de motor.mp3")
    std::cout << "Se encendió el motor" << std::endl;

}
public:  
void Acelerar () {
        system ("acelerar.mp3")
    std::cout << "la moto arranco.." << std::endl;
}
public: 
void Frenar (){ 
        system ("freno.mp3")
    std::cout << "Se encendio el motor..." << std::endl;
}

//Instancias:
MotoGP Yamaha;

Yamaha.year= 2019; 
Yamaha.matricula= 4624252
Yamaha.color= 'M';
std::cout << "El color de la moto es:" << Yamaha.color << std::endl;

MotoGP KAWAZAKI;

KAWAZAKI.year= 2007; 
KAWAZAKI.matricula= 564654
KAWAZAKI.color= 'B';
std::cout << "El color de la moto es:" << KAWAZAKI.color << std::endl;

MotoGP EMPIRE;

EMPIRE.year= 2011; 
EMPIRE.matricula= 656965
EMPIRE.color= 'R';
std::cout << "El color de la moto es:" << EMPIRE.color << std::endl;

};

