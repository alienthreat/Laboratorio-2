#ifndef LIBRERIA_H_INCLUDED
#define LIBRERIA_H_INCLUDED
#include <iostream>



#endif // LIBRERIA_H_INCLUDED


using namespace std;

void Saludar()
{
    cout<<"HOLA"<<endl;
};

void Menu(&a)
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
            system("cls");
            Saludar();
            system("pause");
            system("cls");
        break;}
        case 'S':
        case 's':
            {
             &a=1;   
            system("exit");
            break;}
        default:
        {
            cout<<"Ingrese una opciòn correcta."<<endl;
        break;}
    }return a;
        };
