#include <iostream>
using namespace std;
int main() {
    /*cout << "Hello, World!" << endl;
    int primerNumero;
    int numeroSeleccinado;
    int opcionSeleccionada =5;

    if(opcionSeleccionada > 4){
        cout<<"cumple la condicion"<<endl;
    }
    if(opcionSeleccionada < 5){
        cout<<"Es menor que 5"<< endl;
    }else{
        cout<<"Es un numero valido"<<endl;
    }
    for(int i=0; i<5; i++){
        cout<<"ejecusion de ciclo "<< i<<endl;
    }
    while(opcionSeleccionada<10){
        cout<<"opcion seleccionada "<< opcionSeleccionada<<endl;
        opcionSeleccionada=opcionSeleccionada+1;
    }*/
    //CONSTANTES
    /*
            const double IVA=0.12;
            const double PROPINA=0.10;
            int montoGASTADO=0;
            cout<< "Ingrese el monto de consumo"<<endl;
            cin>>montoGASTADO;
            cout<< "El monto a cobrar es "<<montoGASTADO + montoGASTADO* (IVA + PROPINA);
*/
    //ANIDANDO ESTTRUCTURAS DE CONTROL

    /* char continuar='s';

     while (continuar=='s'||continuar=='S') {
         int numero;
         cout << "Ingrese un numero ";
         cin >> numero;
         if (numero > 0) {
             cout << "El numero es positivo " << endl;
         } else if (numero < 0) {
             cout << "El numero es negativo " << endl;
         } else {
             cout << "El numero es cero " << endl;

         }
         do {
             cout << "Desea ingresar otro numero? (S/N) : ";
             cin >> continuar;
         } while (continuar != 's' && continuar != 'S' && continuar != 'n' && continuar != 'N');
     }
     cout << "Fin del programa "; */

    //EJERCICIOS EN CLASE
    //TABLAS DE MULTIPLICAR

    /* int multiplicacion, num1 = 4, a = 1;
     int multiplicacion2, num2 = 6, b = 1;

     cout << "Las tablas de multiplicar del 4 y del 6: "<< endl;
     cout << "La tabla del numero 4 es:  " << endl;
     do {
         multiplicacion = num1 * a;
         cout << num1 << " x " << a << " = " << multiplicacion << endl;
         a++;
     } while (a <= 10);

     cout << "La tabla del numero 6 es:  " << endl;
     do {
         multiplicacion2 = num2 * b;
         cout << num2 << " x " << b << " = " << multiplicacion2 << endl;
         b++;
     } while (b <= 10);
 */
    
    //FACTORIAL
    /* int n,i;
     long double factorial; // se declara long double para poder representar números grandes
     cout << "Introduce un numero: ";
     cin >> n;
     factorial=1;
     for(i=1;i<=n;i++)
         factorial = factorial * i;
     cout << endl << "Factorial de " << n << " -> " << factorial << endl;
     system("pause");*/

    //FABIONACCI
    /*
    int n,x=0,y=1,z=1;

    cout<<"Escribe el numero de elementos: ";cin>>n;

    for(int i=1;i<=n;i++) {
        z = x + y;
        cout << z << " ";
        x = y;
        y = z;
    }
*/

    //NUMEROS PRIMOS
/*
    int n, i;
    cout << "\nIntroduce un numero: ";
    cin >> n;

    if(n==1)
    {
        cout << "\nNo es primo" << endl;
    }
    else
    {
        i=2;
        while(n%i!=0)
        {
            i++;
        }
        if(i==n)
            cout << "\nPrimo" << endl;
        else
            cout << "\nNo es primo" << endl;
    }
    system("pause");
    */


    //NUMEROS PARES
/*
       int numero;
    div_t resultado;

    cout << "Ingrese un numero para verificar si es par: " << endl;

    cin >> numero;

    resultado=div(numero,2);

    if (resultado.rem>0)

    {
        cout << numero << " es impar." << endl;
    }

    else {

        cout << numero << " es par." << endl;

    }

    cin.get();

    cin.ignore();
*/


//TABLAS DE MULTIPLICAR A ELECCION
/*
    int multis, tabla, a = 1;
    cout << "Ingrese el numero de la tabla: ";
    cin >> tabla;

    cout << "La tabla del " << tabla << " es: " << endl;
    do {
        multis = tabla * a;
        cout << tabla << " x " << a << " = " << multis << endl;
        a++;
    } while (a <= 10);
    */


    return 0;

}



