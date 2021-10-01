#include <iostream>
#include <iomanip>
#include <string>>

using namespace std;

void menu(){

    int user;
    char password[5];
    string passw;
    passw = "class";

    cout << "Seleccione su usuario\n";
    cout << "1) ADMINISTRADOR\t\t2) EMPLEADO" << endl;
	cin >> user;
	
	if (user == 1){
		//Clean screen
		system ("cls");
		bool validation = true;
        //Printing
		cout << "Bienvenido, por favor introduzca la contrasena para continuar: ";
		cin >> password;

        if (password == passw) {
            cout << "Bienvenido al sistema";
        } else {
            cout << "Contraseña erronea, intente de nuevo";
            system ("pause");
            system ("cls");
            return;
        }
    } else if (user == 2) {
        cout << "Bienvenido al sistema" << endl;
        cout << "Su turno de traabajo se ha iniciado\nFeliz dia" << endl;
    } else {
        cout << "Error al seleccionar la opcion" << endl;
        system ("pause");
        system ("cls");
    }
			     

}