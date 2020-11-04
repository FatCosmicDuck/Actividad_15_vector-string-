#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> cadenas;
    string tempString;
    int op;

    do{
        cout << "1.- Agregar al final" << endl;
        cout << "2.- Mostrar         " << endl;
        cout << "3.- Inicializar     " << endl;
        cout << "4.- Frente          " << endl;
        cout << "5.- Ultimo          " << endl;
        cout << "6.- Ordenar         " << endl;
        cout << "7.- Insertar        " << endl;
        cout << "8.- Eliminar        " << endl;
        cout << "9.- Eliminar Ultimo " << endl;
        cout << "0.- Salir           " << endl;
        cout << "Opcion: ";
        cin >> op;

        switch (op)
        {
        case 1:
            cout << "Cadena: ";
            cin >> tempString;

            cadenas.push_back(tempString);
            cin.get();

            break;

        case 2:
            for (size_t i(0); i < cadenas.size(); i++){
                cout << cadenas[i] << ", ";
            }
            cout << endl;
            cin.get();

            break;

        case 3:
            size_t n;

            cout << "tam: ";
            cin >> n;
            cout << "Cadena: ";
            cin >> tempString;
            cin.ignore();

            cadenas = vector<string>(n, tempString);
            break;
        
        case 4:
            if(cadenas.empty()){
                cout << "El vector esta vacio..." << endl;
            }
            else{
                cout << "Frente: "<< cadenas.front() << endl;
            }
            cin.get();

            break;
        
        case 5:
            if(cadenas.empty()){
                cout << "El vector esta vacio..." << endl;
            }
            else{
                cout << "Ultimo: " << cadenas.back() << endl;
            }
            cin.get();

            break;
        case 6:

            sort(cadenas.begin(), cadenas.end());
            //sort(cadenas.begin(), cadenas.end(), greater<int>());
            
            break;
        case 7:
            size_t p;

            cout << "Posicion: ";
            cin >> p;
            cout << "Cadena: ";
            cin >> tempString;

            if(p >= cadenas.size()){
                cout << "Posicion invalida..." << endl;
            }
            else{
                cadenas.insert(cadenas.begin()+p, tempString);
            }
            break;

        case 8:
            size_t p1;

            cout << "Posicion: ";
            cin >> p1;

            if(p1 >= cadenas.size()){
                cout <<"Posicion invalida..." << endl;
            }
            else{
                cadenas.erase(cadenas.begin()+p);
            }
            break;

        case 9:
            if(cadenas.empty()){
                cout << "El vector esta vacio..." << endl;
            }
            else{
                cadenas.pop_back();
            }
            break;

        case 0:
            cout << "Programa finalizado..." << endl;
            cin.get();

            break;

        default:
        cout << "Opcion invalida..." << endl;
            break;
        }
    }while(op != 0);
    
    

    return 0;
}