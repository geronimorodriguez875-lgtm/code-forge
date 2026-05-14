#include <iostream>
using namespace std;
int main(){
    float R = 0, I = 0, V = 0;
    float v = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0, v6 = 0, v7 = 0, v8 = 0, v9 = 0, v10 = 0, vd, vm;
    float r = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, r6 = 0, r7 = 0, r8 = 0, r9 = 0, r10 = 0, rd, rm;
    float i = 0, i2 = 0, i3 = 0, i4 = 0, i5 = 0, i6 = 0, i7 = 0, i8 = 0, i9 = 0, i10 = 0, id, im;
    int nv = 0, nr = 0, ni = 0;
    int circuito = 0;
    int opcion = 0;
    int salida = 0;
    int t = 0;
    do{
        cout << "Que desea realizar: ";
        cout << "\n 1 Encontrar Voltaje\n";
        cout << "\n 2 Encontrar Resistencia\n";
        cout << "\n 3 Encontrar Corriente\n";
        cout << "\n 4 Encontrar Sumatoria de resistencia en paralelo\n";
        cout << "\n 5 Encontrar Sumatoria de resistencia en serie\n";
        cout << "\n 6 Encontrar Sumatoria de corriente\n";
        cout << "\n 7 Encontrar Sumatoria de voltaje\n";
        cout << "\n 8 Salir";
        cin >> opcion;


        switch (opcion) {
            case '1':
                cout << "Ingrese valor de Corriente: ";
                cin >> I;
                cout << "Ingrese valor de Resistencia: ";
                cin >> R;
                cout << "El valor del Voltaje es: " << I * R << endl;
                break;
                case '2':
                cout << "Ingrese valor de Voltaje: ";
                cin >> V;
                cout << "Ingrese valor de Corriente: ";
                cin >> I;
                cout << "El valor de la Resistencia es: " << V / I << endl;
                break;
            case '3':
                cout << "Ingrese valor de Voltaje: ";
                cin >> V;
                cout << "Ingrese valor de Resistencia: ";
                cin >> R;
                cout << "El valor de la Corriente es: " << V / R << endl;
                break;
            case '4':
                cout << "Ingrese número de resistencias:    (min 2/max 10)";
                cin >> nr;
                switch(nr){
                    case '1':
                    cout << "ya lo tienes";
                    break;
                    case '2':
                    cout << "Ingresa valor de resistencia 1";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2";
                    cin >> r2;
                    rm = r * r2;
                    rd =r + r2;
                    R = rm / rd;
                    cout << "El valor de la resistencia es: " << R << endl;
                    break;
                    case '3':
                    cout << "Ingresa valor de resistencia 1";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3";
                    cin >> r3;
                    rm = r * r2 * r3;
                    rd = r3 * (r2 + r) + r * r2;
                    R = rm / rd;
                    cout << "El valor de resistencia es: " << R << endl;
                    break;
                    case '4':
                    cout << "Ingresa valor de resistencia 1";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3";
                    cin >> r3;
                    cout << "Ingresa valor de resistencia 4";
                    cin >> r4;
                    rm = r4 * (r3 * (r2 + r)+ r * r2) + r * r2 * r3;
                    rd = r * r2 * r3 * r4;
                    R = rm / rd;
                    cout << "El valor de la ressitencia es: " << R << endl;
                    break;
                    case '5':
                    cout << "Ingresa valor de resistencia 1";
                    cin >> r;
                    cout << "Ingresa valor de resistencia 2";
                    cin >> r2;
                    cout << "Ingresa valor de resistencia 3";
                    cin >> r3;
                    cout << "Ingresa valor de resistencia 4";
                    cin >> r4;
                    cout << "Ingresa valor de resistencia 5";
                    cin >> r5;
                }
            break;
            case '5':
            cout << "Ingrese número de resistencias: ";     
            cin >> nr;
            for (int k = 1; k <= nr; k++)
                do{
                    cout << "Ingrese valor de resistencia " << i;
                    cin >> r10;
                    R += r10;
                }
            cout << "El valor de la suma de resistencias es: " << R <<endl;
            break;
            ;
            case '6':
            cout << "\nIngrese la cantidad de corrientes: ";
            cin >> ni;
            for (int l = 1; l <= ni; l++)
                do{
                    cout << "Ingrese valor de corriente: " << l;
                    cin >> i10;

                    I += i10;
                }
            cout << "\nEl valor de la corriente total es: " << I <<endl;
            break;

            case '7':
            cout << "\nIngrese la cantidad de voltajes: ";
            cin >> nv;
            for (int j = 1; j <= nv; j++)
                    do{
                        cout << "Ingrese valor de voltaje " << j;
                        cin >> v10;

                        V += v10;
                    }
            cout << "\nEl valor de Voltaje es: " << V <<endl;
            break;
            
            case '8':
            cout << "Saliendo...";
            salida + 1;
            break;
            
            default:
            cout << "Ingresaste mal la opcion";
            break;
            
        }  

    while(salida =! 1)}

    return 0;
}