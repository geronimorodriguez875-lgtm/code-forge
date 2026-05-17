#include <iostream>
using namespace std;
int main(){
    int k = 1, l = 1, j = 1;
    float R = 0, I = 0, V = 0;
    float vsuma;
    float r = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, rd, rm, rsuma = 0;
    float isuma = 0;
    char nr;
	int nv = 0, ni = 0;
    int circuito = 0;
    char opcion;
    int salida = 1;
    while(salida == 1){
        cout << "\nQue desea realizar: \n";
        cout << "\n 1 Encontrar Voltaje\n";
        cout << "\n 2 Encontrar Resistencia\n";
        cout << "\n 3 Encontrar Corriente\n";
        cout << "\n 4 Encontrar Sumatoria de resistencia en paralelo\n";
        cout << "\n 5 Encontrar Sumatoria de resistencia en serie\n";
        cout << "\n 6 Encontrar Sumatoria de corriente\n";
        cout << "\n 7 Encontrar Sumatoria de voltaje\n";
        cout << "\n 8 Salir\n" << " :";
        cin >> opcion;


        switch (opcion) {
            case '1':
                cout << "Ingrese valor de Corriente: ";
                cin >> I;
                cout << "Ingrese valor de Resistencia: ";
                cin >> R;
                cout << "El valor del Voltaje es: " << I * R << endl;
                R = 0; I = 0; V = 0;
                break;
                case '2':
                cout << "Ingrese valor de Voltaje: ";
                cin >> V;
                cout << "Ingrese valor de Corriente: ";
                cin >> I;
                cout << "El valor de la Resistencia es: " << V / I << endl;
                R = 0; I = 0; V = 0;
                break;
            case '3':
                cout << "Ingrese valor de Voltaje: ";
                cin >> V;
                cout << "Ingrese valor de Resistencia: ";
                cin >> R;
                cout << "El valor de la Corriente es: " << V / R << endl;
                R = 0; I = 0; V = 0;
                break;
            case '4':
                cout << "Ingrese numero de resistencias(min 2/max 10):   ";
                cin >> nr;
                switch(nr){
                    case '1':
                    cout << "ya lo tienes";
                    break;
                    case '2':
                    cout << "Ingresa valor de resistencia 1: " ;
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2: ";
                    cin >> r2;
                    rm = r * r2;
                    rd =r + r2;
                    R = rm / rd;
                    cout << "El valor de la resistencia es: " << R << endl;
                    R = 0; r = 0; r2 = 0; rm = 0; rd = 0;
                    break;
                    case '3':
                    cout << "Ingresa valor de resistencia 1: ";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2: ";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3: ";
                    cin >> r3;
                    rm = r * r2 * r3;
                    rd = r3 * (r2 + r) + r * r2;
                    R = rm / rd;
                    cout << "El valor de resistencia es: " << R << endl;
                    R = 0; r = 0; r2 = 0; r3 = 0; rm = 0; rd = 0; 
                    break;
                    case '4':
                    cout << "Ingresa valor de resistencia 1: ";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2: ";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3: ";
                    cin >> r3;
                    cout << "Ingresa valor de resistencia 4: ";
                    cin >> r4;
                    rm = r4 * (r3 * (r2 + r)+ r * r2) + r * r2 * r3;
                    rd = r * r2 * r3 * r4;
                    R = rm / rd;
                    cout << "El valor de la ressitencia es: " << R << endl;
                    R = 0; r = 0; r2 = 0; r3 = 0; r4 = 0; rm = 0; rd = 0; 
                    break;
                    case '5':
                    cout << "Ingresa valor de resistencia 1: ";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2: ";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3: ";
                    cin >> r3;
                    cout << "Ingresa valor de resistencia 4: ";
                    cin >> r4;
                    cout << "Ingresa valor de resistencia 5: ";
                    cin >> r5;
                    
                }
            break;
            case '5':
            cout << "Ingrese numero de resistencias: ";     
            cin >> nr;
            while(k <= nr){
                    cout << "Ingrese valor de resistencia " << k << "\n: ";
                    cin >> rsuma;
                    R += rsuma;
                    k++;
            }    
            cout << "El valor de la suma de resistencias es: " << R <<endl;
            nr = 0; R = 0; k = 1; rsuma= 0;
            break;
            ;
            case '6':
            cout << "\nIngrese la cantidad de corrientes: ";
            cin >> ni;
            while(l <= ni){
                    cout << "Ingrese valor de corriente: " << l << "\n: " ;
                    cin >> isuma;
                    I += isuma;
                    l++;
            }
            cout << "\nEl valor de la corriente total es: " << I <<endl;
            ni = 0; I = 0; l = 1; isuma= 0;
            break;

            case '7':
            cout << "\nIngrese la cantidad de voltajes: ";
            cin >> nv;
            while(j<= nv){
                    cout << "Ingrese valor de voltaje " << j << "\n: ";
                    cin >> vsuma;
                    V += vsuma;
                    j++;
            }
            cout << "\nEl valor de Voltaje es: " << V <<endl;
            nv = 0; V = 0; j = 1; vsuma= 0;
            break;
            
            case '8':
            cout << "Saliendo...";
            salida ++;
            break;
            
            default:
            cout << "Ingresaste mal la opcion\n";
            break;
            
        }  

    }

  return 0;  
}
