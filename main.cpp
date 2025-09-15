/*  Jean M. Ramos Molina Github Username: JeanRamosUPR
    CCOM 3033-002
    Lab3: Numeros Aleatorios*/

// Incluir librerias

#include <iostream>
using namespace std; 
#include <cstdlib>

int main () 
    {

    srand(time(0));

    // Crear variables

    int numeroAleatorio1 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio2 = rand() % (100 - 0 + 1) + 0;
    int numeroAleatorio3 = rand () % (100 - 0 + 1) + 0;

    //Mostrar numeros aleatorios generados

    cout << "Los numeros aleatorios generados son: " << numeroAleatorio1 << ',' << ' ' << numeroAleatorio2 << ',' << ' ' << numeroAleatorio3 << endl;

    //Realizar estructura de decision para determinar el orden

    // Caso 1: numeroAleatorio1 mayor igual que numeroAleatorio2 y numeroAleatorio2 mayor igual que numeroAleatorio3 
    // Orden: 1, 2, 3

    if (numeroAleatorio1 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio3) {

        // Mostrar resultados del Caso 1

        cout << "Orden descendiente: " << numeroAleatorio1 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio3 << endl;
    } 
    
    // Caso 2: numeroAleatorio2 mayor igual que numeroAleatorio1 y numeroAleatorio1 mayor igual que numeroAleatorio3 
    // Orden: 2, 1, 3
     
    else if  (numeroAleatorio2 >= numeroAleatorio1 && numeroAleatorio1 >= numeroAleatorio3) {

        // Mostrar resultados del Caso 2

        cout << "Orden descendiente: " << numeroAleatorio2 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio3 << endl;

    }
    // Caso 3: numeroAleatorio3 mayor igual que numeroAleatorio2 y numeroAleatorio2 mayor igual que numeroAleatorio1 
    // Orden: 3, 2, 1

    else if  (numeroAleatorio3 >= numeroAleatorio2 && numeroAleatorio2 >= numeroAleatorio1) {

        //Mostrar resultados del caso 3

        cout << "Orden descendiente: " << numeroAleatorio3 << " >= " << numeroAleatorio2 << " >= " << numeroAleatorio1 << endl;
    }

    // Caso 4: numeroAleatorio2 mayor igual que numeroAleatorio3 y numeroAleatorio3 mayor igual que numeroAleatorio1 
    // Orden: 2, 3, 1

    else if (numeroAleatorio2 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio1)   {

        // Mostrar resultados del caso 4
        cout << "Orden descendiente: " << numeroAleatorio2 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio1 << endl;
    }

    // Caso 5: numeroAleatorio1 mayor igual que numeroAleatorio3 y numeroAleatorio3 mayor igual que numeroAleatorio2
    // Orden: 1, 3, 2 

    else if  (numeroAleatorio1 >= numeroAleatorio3 && numeroAleatorio3 >= numeroAleatorio2)  {

        // Mostrar resultados del caso 5
        cout << "Orden descendiente: " << numeroAleatorio1 << " >= " << numeroAleatorio3 << " >= " << numeroAleatorio2 << endl;

    }

    // Caso 6: numeroAleatorio3 mayor igual que numeroAleatorio1 y numeroAleatorio1 mayor igual que numeroAleatorio2
    // Orden: 3, 1, 2

    else    {

        // Mostrar resultados del caso 6
        cout << "Orden descendiente: " << numeroAleatorio3 << " >= " << numeroAleatorio1 << " >= " << numeroAleatorio2 << endl;

    }   
    
// FIN 
     
return 0;
}
