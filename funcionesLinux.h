#include <iostream>
using namespace std;

//Funcion para limpiar pantalla
#ifdef _WiN32
    #define CLEAR "cls"
#elif defined (unix)
    #define CLEAR " clear"
#endif

//Funciones para pausar la ejecucion
void pausa(){
    cin.get();
    cout << "Presione enter para continuar" << endl;
    cin.get();
}

void pausa2(){
    cin.get();
    cout << "Presione enter para continuar" << endl;
    cin.get();
}