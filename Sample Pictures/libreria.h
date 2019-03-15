#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED
#include <iostream>



#endif // LIBRERIA_H_INCLUDED


using namespace std;

void Saludar()
{
    cout<<"HOLA"<<endl;
};

void Menu()
{
    system("cls");
    char opc;
    cout<<"----MENU----"<<endl;
    cout<<"- A-Saludar-"<<endl;
    cout<<"- S-Salir  -"<<endl;
    cout<<"------------"<<endl;
    cout<<"Ingrese una opciòn:"<<endl;
    cin>>opc;
    cin.get();
    cin.ignore();
    switch(opc)
    {
        case 'A':
        case 'a':
        {
            Saludar();
            system("cls");
        }break;
        case 'S':
        case 's':
            {
            system("exit");
            }break;
        default:
        {
            cout<<"Ingrese una opciòn correcta."<<endl;
        }break;
    }
        };
