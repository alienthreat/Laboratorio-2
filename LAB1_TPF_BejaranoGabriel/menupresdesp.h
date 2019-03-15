//#############################################################################
// ARCHIVO             : menupresdesp.h
// AUTOR/ES            : Bejarano Gabriel Alejandro
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 29/6/2016
// ULTIMA ACTUALIZACION: 29/6/2016
// LICENCIA            : GPL (General Public License) - Version 3.
//#############################################################################

//*****************************************************************************
//DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION   : void batalla
// ACCION    : Se ocupa de mostrar el tablero, y realizar las comparaciones entre
//             matriz interna y de usuario. Es la base del juego.
// PARAMETROS: int disparos
// DEVUELVE  : void
//-----------------------------------------------------------------------------
#ifndef MENUPRESDESP_H_INCLUDED
#define MENUPRESDESP_H_INCLUDED
#include "Funciones.h"
using namespace std;

// FUNCION   : void Presentacion
// ACCION    : Presentacion del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Presentacion()
{
    cout<<"                  i!!!!!!!!!!!!!!!~{:!!!!i                 "<<endl;
    cout<<"              i!~!!))!!!!!!!!!!!!!!!!!!!!!!!!              "<<endl;
    cout<<"           i!!!{!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i           "<<endl;
    cout<<"        i!!)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!           "<<endl;
    cout<<"     77h!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         "<<endl;
    cout<<"   '!!`77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i       "<<endl;
    cout<<"    /!!!~77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      "<<endl;
    cout<<" ' ':)!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     "<<endl;
    cout<<"   ~:!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<" ..!!!!!/!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<"  `!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  "<<endl;
    cout<<"  ~ ~!!!)!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~  "<<endl;
    cout<<" ~~'~{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:'~ "<<endl;
    cout<<" {-{)!!{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:! "<<endl;
    cout<<" `!!!!{!~!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!':!!!"<<endl;
    cout<<" ' {!!!{>)`!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!)!!~.."<<endl;
    cout<<" :!{!!!{!!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!! -!!!: "<<endl;
    cout<<" !!!~:!4~/!!!!!!!!!!!!!!!!!!!~!77!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!:~!!~)(!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!``~!!).~!!!!!!!!!!!!!{!!!!!!!77!7777777777777!!!!!!!:"<<endl;
    cout<<" :!!!!!!!!!'' ~  '!/!!!!!!!!!!(!!!!!!777777777777777!!!!!~:"<<endl;
    cout<<" :         !!~-!!!!'--`!!!!!!!!\/:\\!77777777777777777!!!!!:"<<endl;
    cout<<"  :            ``-.!!!!`~!{!`)(>~/777777777777777777777!!:"<<endl;
    cout<<"   .               ~`_!!!: `{{`.!{77777777777777777777!/  "<<endl;
    cout<<"    .                 \ :.\\?.{\!!!:!!777777777777777777:!!  "<<endl;
    cout<<"     \:                ~ !{:!!!\!!~!!!77777777777777777.>!   "<<endl;
    cout<<"     '!!~               '{!!!{!!!t!!!777777777777777!!!    "<<endl;
    cout<<"      '!!!!.            {!!!!!!!!!!!!!777777777777!77!     "<<endl;
    cout<<"       ~!!..`~:.       {!!!!!!!!!!:!!!!7777777777:!!      "<<endl;
    cout<<"        `!!!!!!h:!?!!!!!!!!!!!!!(!!!!::!!!!!!!{!!!!.       "<<endl;
    cout<<"          4!!!!!!!!!!!!!!!!!!!!!~!{!~!!!!!!!!!!!!'         "<<endl;
    cout<<"           `!!!!!!!!!!!!!!!!!!!!(~!!!!!!!!!!!!!~           "<<endl;
    cout<<"             `!!!!!!!!!!!{\``!!``(!!!!!!!!!~~!!            "<<endl;
    cout<<"              `!!!!!!!!!!!!!!!!!!!!!!!!!!!!(!:             "<<endl;
    cout<<"    xINTRUDERx  .!!!!!!!!!!!!!!!!!!!!!!!!!!\~   xINTRUDERx "<<endl;
    cout<<"                 .`!!!!!!!/`.;;~;;`~!!!!!!!'               "<<endl;
    cout<<"   SPACE PIRATES   -~!!!!!!!!!!!!!(!!!!!!!/   SPACE PIRATES"<<endl;
    cout<<"                     `!!!!!!!!!!!!!!!!!!!'                 "<<endl;
    cout<<"                       `\!!!!!!!!!!!!!/~                   "<<endl;
    cout<<"                                                           "<<endl;
    cout<<"                  BIENVENIDO A BORDO, CAPITAN!              "<<endl;
}

// FUNCION   : void Presentacion1
// ACCION    : Presentacion del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Presentacion1()
{
    cout<<"                         ;;;;;;iiiii;;                     "<<endl;
    cout<<"                  i!!!!!!!!!!!!!!!~{:!!!!i                 "<<endl;
    cout<<"              i!~!!))!!!!!!!!!!!!!!!!!!!!!!!!              "<<endl;
    cout<<"           i!!!{!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i           "<<endl;
    cout<<"        i!!)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!           "<<endl;
    cout<<"     77h!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         "<<endl;
    cout<<"   '!!`77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i       "<<endl;
    cout<<"    /!!!~77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      "<<endl;
    cout<<" ' ':)!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     "<<endl;
    cout<<"   ~:!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<" ..!!!!!/!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<"  `!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  "<<endl;
    cout<<"  ~ ~!!!)!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~  "<<endl;
    cout<<" ~~'~{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:'~ "<<endl;
    cout<<" {-{)!!{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:! "<<endl;
    cout<<" `!!!!{!~!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!':!!!"<<endl;
    cout<<" ' {!!!{>)`!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!)!!~.."<<endl;
    cout<<" :!{!!!{!!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!! -!!!: "<<endl;
    cout<<" !!!~:!4~/!!!!!!!!!!!!!!!!!!!~!77!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!:~!!~)(!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!``~!!).~!!!!!!!!!!!!!{!!!!!!!77!7777777777777!!!!!!!:"<<endl;
    cout<<" :!!!!!!!!!'' ~  '!/!!!!!!!!!!(!!!!!!777777777777777!!!!!~:"<<endl;
    cout<<" :---------!!~-!!!!'--`!!!!!!!!\/:\\!77777777777777777!!!!!:"<<endl;
    cout<<"  :------------``-.!!!!`~!{!`)(>~/777777777777777777777!!:"<<endl;
    cout<<"   .---------------~`_!!!: `{{`.!{77777777777777777777!/  "<<endl;
    cout<<"    .-----------o-----\ :.\\?.{\!!!:!!777777777777777777:!!  "<<endl;
    cout<<"     \:--o-ABDUCTION-o-~ !{:!!!\!!~!!!77777777777777777.>!   "<<endl;
    cout<<"     '!!~-------o-------'{!!!{!!!t!!!777777777777777!!!    "<<endl;
    cout<<"      '!!!!.------------{!!!!!!!!!!!!!777777777777!!77     "<<endl;
    cout<<"       ~!!..`~:.-------{!!!!!!!!!!:!!!!7777777777:!!!      "<<endl;
    cout<<"        `!!!!!!h:!?!!!!!!!!!!!!!(!!!!::!!!!!!!{!!!!.       "<<endl;
    cout<<"          4!!!!!!!!!!!!!!!!!!!!!~!{!~!!!!!!!!!!!!'         "<<endl;
    cout<<"           `!!!!!!!!!!!!!!!!!!!!(~!!!!!!!!!!!!!~           "<<endl;
    cout<<"             `!!!!!!!!!!!{\``!!``(!!!!!!!!!~~!!            "<<endl;
    cout<<"              `!!!!!!!!!!!!!!!!!!!!!!!!!!!!(!:             "<<endl;
    cout<<"    xINTRUDERx  .!!!!!!!!!!!!!!!!!!!!!!!!!!\~   xINTRUDERx "<<endl;
    cout<<"                 .`!!!!!!!/`.;;~;;`~!!!!!!!'               "<<endl;
    cout<<"   SPACE PIRATES   -~!!!!!!!!!!!!!(!!!!!!!/   SPACE PIRATES"<<endl;
    cout<<"                     `!!!!!!!!!!!!!!!!!!!'                 "<<endl;
    cout<<"                       `\!!!!!!!!!!!!!/~                   "<<endl;
    cout<<"                                                           "<<endl;
    cout<<"                         LEVEN ANCLAS!                     "<<endl;
}

// FUNCION   : void derrota
// ACCION    : Imprime en pantalla una "imagen" ascii alusiva a la derrota
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void derrota()
{
   cout<<"DERROTA! Fuiste capturado por los humanos!"<<endl;
cout<<endl;
cout<<"*_______________________________*"<<endl;
cout<<"|MUERE MONSTRUO INTERGALACTICO! |"<<endl;
cout<<"*_______________________________*"<<endl;
cout<<"( Oo) /                   \\|/     o   o"<<endl;
cout<<" | |   r.===O- ~PIUM~~ ~  -O-      )-("<<endl;
cout<<"/   \\_/U]                 /|\\     (O O)"<<endl;
cout<<"||  |_/                         O  \\=/  O"<<endl;
cout<<"\\\\  |                            \\.-8-./"<<endl;
cout<<"{K ||                              )|("<<endl;
cout<<" | PP                              {-}"<<endl;
cout<<" | ||                             _| |_"<<endl;
cout<<" (__\\\\___________________________TTTTTTTT___"<<endl;
}

// FUNCION   : void victoria
// ACCION    : Imprime en pantalla una "imagen" ascii alusiva a la victoria.
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void victoria(int a)
{
cout<<"*_______________________________________________________________________*"<<endl;
cout<<"|Bien hecho Capitan! Hundiste toda la flota humana en "<<a<<" disparos. |"<<endl;
cout<<"*_______________________________________________________________________*"<<endl;
cout<<"                .-+-.                          \\  o   o"<<endl;
cout<<"                )   (         _.---._           \\  )-("<<endl;
cout<<"               /     )      .|       |.          \\(O O)"<<endl;
cout<<"              (_    _)  _.-~===========~-._    -o  \\=/"<<endl;
cout<<"              (_  )_   (___________________)     \\.-8-."<<endl;
cout<<"        __    (     )   .    \\_______/    .        )|( \\"<<endl;
cout<<"        \ \___ (__).__)                              {-}  o"<<endl;
cout<<"      .--||___\\..--|/                             _| |_"<<endl;
cout<<"  ___/|-|||..... ' /                           ___TTTTT_______"<<endl;
cout<<"_/________________/_______________________..-'::::::::::::::::-..___"<<endl;
cout<<"                                           ;;;;;;;;;;;;;;;;;;;;;"<<endl;
}

// FUNCION   : void Ayuda
// ACCION    : Imprime en pantalla las instrucciones y ayuda del juego
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Ayuda()
{
    sys::cls();
    cout<<"                                 INSTRUCCIONES"<<endl;
    cout<<""<<endl;
    cout<<"    JUEGO:"<<endl;
    cout<<"  - El juego consiste en hundir toda la flota enemiga, que esta distri-"<<endl;
    cout<<"   buida en el tablero."<<endl;
    cout<<""<<endl;
    cout<<"  - El jugador debe indicar la coordenada en la cual desea atacar: un numero"<<endl;
    cout<<"   entre 1 y 10 para la fila y un numero entre 1 y 10 para la columna."<<endl;
    cout<<""<<endl;
    cout<<"  - Si en la coordenada ingresada no hay ningun barco se indicara que tocaste"<<endl;
    cout<<"    agua con una 'A'."<<endl;
    cout<<""<<endl;
    cout<<"  - Si en la coordenada ingresada hay parte de un barco, entonces el barco fue"<<endl;
    cout<<"  tocado y se vera una 'T'."<<endl;
    cout<<""<<endl;
    cout<<"  - Si en la coordenada ingresada hay un barco, o si tocaste un barco por com-"<<endl;
    cout<<"    pleto, se vera el barco hundido con una o varias 'H'."<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"     NIVELES:"<<endl;
    cout<<"      - Hay dos niveles para elegir:."<<endl;
    cout<<"        - Nivel 1(Grumete): Podras efectuar 50 disparos."<<endl;
    cout<<"        - Nivel 2(Almirante): Podras efectuar 25 disparos."<<endl;
    cout<<""<<endl;
    cout<<""<<endl;
    cout<<"     EXTRAS:"<<endl;
    cout<<"  - Para abandonar el juego, y regresar al menu principal ingresa las coordenadas 50:50."<<endl;
    cout<<""<<endl;
    cout<<"  - Para ver por unica vez la ubicacion de los barcos  por un breve instante"<<endl;
    cout<<"     ingresa las coordenadas 100:100."<<endl;
    cout<<""<<endl;
    cout<<"  - Para ver las Instrucciones de juego ingresa ingresa las coordenadas 200:200."<<endl;
    cout<<""<<endl;
    cout<<"  - El juego finaliza al hundir todos los barcos o al agotar los lasers."<<endl;
    cout<<""<<endl;
    cout<<"                    iii BUENA SUERTE !!!"<<endl;
    cout<<""<<endl;
    cout<<"Presione enter para continuar..."<<endl;
    sys::pause();
}

// FUNCION   : void Ayuda
// ACCION    : Imprime en pantalla el menu principal
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Menu()
{
    cout<<" __________________________________"<<endl;
    cout<<"|  * . .---.   *  .     *      *-- |"<<endl;
    cout<<"|=   _/__~0_\\_     .  *   O      ' |"<<endl;
    cout<<"|.  (_________) *        *       . |"<<endl;
    cout<<"| *    ((L.L     .   *      *   .  |"<<endl;
    cout<<"|*    *    .   *  BATALLA - ) -   *|"<<endl;
    cout<<"| .         .    ovni-NAVAL   *   .|"<<endl;
    cout<<"|    *  .    =O       *    .    *  |"<<endl;
    cout<<"|    *  .  *        *    .   .    *|"<<endl;
    cout<<"|             |.   | *  | *     *  |"<<endl;
    cout<<"|  *   *     )_)  )_)  )_)  *  .  .|"<<endl;
    cout<<"|*          )___))___))___)\  .  .  |"<<endl;
    cout<<"|   .      )____)____)_____)\\  . * |"<<endl;
    cout<<"| .    *  _____|____|____|____\\\__  |"<<endl;
    cout<<"|---------\\                   /----|"<<endl;
    cout<<"|  ^^^^^ ^^^^^^^^^^^^^^^^^^^^^   ^^|"<<endl;
    cout<<"|    ^^^^      ^^^^     ^^^    ^^^^|"<<endl;
    cout<<"| ^^^      ^^^        ^^^^       ^^|"<<endl;
    cout<<"|       ^^^   A - Jugar   ^^^^     |"<<endl;
    cout<<"| ^^^^        B - Ayuda ^^      ^^^|"<<endl;
    cout<<"|    ^^^^     S - Salir ^^^^^^^^^^ |"<<endl;
    cout<<"|        ^^^^      ^^^^     ^^^    |"<<endl;
    cout<<"|  ^^^^      ^^^        ^^^^    ^^^|"<<endl;
    cout<<"|^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^|"<<endl;
}

// FUNCION   : void Despedida
// ACCION    : Despedida del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Despedida()
{
    cout<<"                  i!!!!!!!!!!!!!!!~{:!!!!i                 "<<endl;
    cout<<"              i!~!!))!!!!!!!!!!!!!!!!!!!!!!!!              "<<endl;
    cout<<"           i!!!{!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i           "<<endl;
    cout<<"        i!!)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!           "<<endl;
    cout<<"     77h!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         "<<endl;
    cout<<"   '!!`77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i       "<<endl;
    cout<<"    /!!!~77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      "<<endl;
    cout<<" ' ':)!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     "<<endl;
    cout<<"   ~:!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<" ..!!!!!/!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<"  `!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  "<<endl;
    cout<<"  ~ ~!!!)!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~  "<<endl;
    cout<<" ~~'~{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:'~ "<<endl;
    cout<<" {-{)!!{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:! "<<endl;
    cout<<" `!!!!{!~!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!':!!!"<<endl;
    cout<<" ' {!!!{>)`!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!)!!~.."<<endl;
    cout<<" :!{!!!{!!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!! -!!!: "<<endl;
    cout<<" !!!~:!4~/!!!!!!!!!!!!!!!!!!!~!77!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!:~!!~)(!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!``~!!).~!!!!!!!!!!!!!{!!!!!!!77!7777777777777!!!!!!!:"<<endl;
    cout<<" :!!!!!!!!!'' ~  '!/!!!!!!!!!!(!!!!!!777777777777777!!!!!~:"<<endl;
    cout<<" :         !!~-!!!!'--`!!!!!!!!\/:\\!77777777777777777!!!!!:"<<endl;
    cout<<"  :            ``-.!!!!`~!{!`)(>~/777777777777777777777!!:"<<endl;
    cout<<"   .               ~`_!!!: `{{`.!{77777777777777777777!/  "<<endl;
    cout<<"    .                 \ :.\\?.{\!!!:!!777777777777777777:!!  "<<endl;
    cout<<"     \:                ~ !{:!!!\!!~!!!77777777777777777.>!   "<<endl;
    cout<<"     '!!~               '{!!!{!!!t!!!777777777777777!!!    "<<endl;
    cout<<"      '!!!!.            {!!!!!!!!!!!!!777777777777!!77     "<<endl;
    cout<<"       ~!!..`~:.       {!!!!!!!!!!:!!!!7777777777:!!!      "<<endl;
    cout<<"        `!!!!!!h:!?!!!!!!!!!!!!!(!!!!::!!!!!!!{!!!!.       "<<endl;
    cout<<"          4!!!!!!!!!!!!!!!!!!!!!~!{!~!!!!!!!!!!!!'         "<<endl;
    cout<<"           `!!!!!!!!!!!!!!!!!!!!(~!!!!!!!!!!!!!~           "<<endl;
    cout<<"             `!!!!!!!!!!!{\``!!``(!!!!!!!!!~~!!            "<<endl;
    cout<<"              `!!!!!!!!!!!!!!!!!!!!!!!!!!!!(!:             "<<endl;
    cout<<"    xINTRUDERx  .!!!!!!!!!!!!!!!!!!!!!!!!!!\~   xINTRUDERx "<<endl;
    cout<<"                 .`!!!!!!!/`.;;~;;`~!!!!!!!'               "<<endl;
    cout<<"   SPACE PIRATES   -~!!!!!!!!!!!!!(!!!!!!!/   SPACE PIRATES"<<endl;
    cout<<"                     `!!!!!!!!!!!!!!!!!!!'                 "<<endl;
    cout<<"                       `\!!!!!!!!!!!!!/~                   "<<endl;
    cout<<"                                                           "<<endl;
    cout<<"                       GRACIAS POR JUGAR                   "<<endl;
}

// FUNCION   : void Despedida1
// ACCION    : Despedida del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Despedida1()
{
    cout<<"                         ;;;;;;iiiii;;                     "<<endl;
    cout<<"                  i!!!!!!!!!!!!!!!~{:!!!!i                 "<<endl;
    cout<<"              i!~!!))!!!!!!!!!!!!!!!!!!!!!!!!              "<<endl;
    cout<<"           i!!!{!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i           "<<endl;
    cout<<"        i!!)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!           "<<endl;
    cout<<"     77h!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!         "<<endl;
    cout<<"   '!!`77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!i       "<<endl;
    cout<<"    /!!!~77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!      "<<endl;
    cout<<" ' ':)!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!     "<<endl;
    cout<<"   ~:!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<" ..!!!!!/!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!    "<<endl;
    cout<<"  `!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  "<<endl;
    cout<<"  ~ ~!!!)!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!~  "<<endl;
    cout<<" ~~'~{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:'~ "<<endl;
    cout<<" {-{)!!{!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!:! "<<endl;
    cout<<" `!!!!{!~!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!!!!':!!!"<<endl;
    cout<<" ' {!!!{>)`!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!!!)!!~.."<<endl;
    cout<<" :!{!!!{!!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!! -!!!: "<<endl;
    cout<<" !!!~:!4~/!!!!!!!!!!!!!!!!!!!~!77!!!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!:~!!~)(!!!!!!!!!!!!!!!!!!!!77!!!!!!!!!!!!!!!!!!!!!!! "<<endl;
    cout<<" :!!!!``~!!).~!!!!!!!!!!!!!{!!!!!!!77!7777777777777!!!!!!!:"<<endl;
    cout<<" :!!!!!!!!!'' ~  '!/!!!!!!!!!!(!!!!!!777777777777777!!!!!~:"<<endl;
    cout<<" :---------!!~-!!!!'--`!!!!!!!!\/:\\!77777777777777777!!!!!:"<<endl;
    cout<<"  :------------``-.!!!!`~!{!`)(>~/777777777777777777777!!:"<<endl;
    cout<<"   .---------------~`_!!!: `{{`.!{77777777777777777777!/  "<<endl;
    cout<<"    .-----------o-----\ :.\\?.{\!!!:!!777777777777777777:!!  "<<endl;
    cout<<"     \:---o-GOODBYE-o--~ !{:!!!\!!~!!!77777777777777777.>!   "<<endl;
    cout<<"     '!!~-------o-------'{!!!{!!!t!!!777777777777777!!!    "<<endl;
    cout<<"      '!!!!.------------{!!!!!!!!!!!!!777777777777!!77     "<<endl;
    cout<<"       ~!!..`~:.-------{!!!!!!!!!!:!!!!7777777777:!!!      "<<endl;
    cout<<"        `!!!!!!h:!?!!!!!!!!!!!!!(!!!!::!!!!!!!{!!!!.       "<<endl;
    cout<<"          4!!!!!!!!!!!!!!!!!!!!!~!{!~!!!!!!!!!!!!'         "<<endl;
    cout<<"           `!!!!!!!!!!!!!!!!!!!!(~!!!!!!!!!!!!!~           "<<endl;
    cout<<"             `!!!!!!!!!!!{\``!!``(!!!!!!!!!~~!!            "<<endl;
    cout<<"              `!!!!!!!!!!!!!!!!!!!!!!!!!!!!(!:             "<<endl;
    cout<<"    xINTRUDERx  .!!!!!!!!!!!!!!!!!!!!!!!!!!\~   xINTRUDERx "<<endl;
    cout<<"                 .`!!!!!!!/`.;;~;;`~!!!!!!!'               "<<endl;
    cout<<"   SPACE PIRATES   -~!!!!!!!!!!!!!(!!!!!!!/   SPACE PIRATES"<<endl;
    cout<<"                     `!!!!!!!!!!!!!!!!!!!'                 "<<endl;
    cout<<"                       `\!!!!!!!!!!!!!/~                   "<<endl;
    cout<<"                                                           "<<endl;
    cout<<"                     YOU'VE BEEN ABDUCTED                  "<<endl;
}

// FUNCION   : void Adios
// ACCION    : Despedida del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Adios()
{
    int bye;
    for(bye=0; bye<2; bye++)
    {
        sys::cls();
        system("color 17");
        Despedida();
        _sleep(500);
        sys::cls();
        system("color 71");
        Despedida1();
        _sleep(500);
        Beep(300,200), Beep(300,200),Beep(100,100), Beep(200,200), Beep(400,200),Beep(100,300);
        sys::cls();
        system("color 17");
        Despedida();
        _sleep(500);
    }
}


//=============================================================================
// FUNCION   : void batalla
// ACCION    : Se ocupa de mostrar el tablero, y realizar las comparaciones entre
//             matriz interna y de usuario. Es la base del juego.
// PARAMETROS: int disparos
// DEVUELVE  : void
//-----------------------------------------------------------------------------
int batalla(int disparos)
{
    int disparox = disparos;
    int hundidos = 20;
    int z = 0;
    casilla m[12][12];
    initTablero(m);
    initTablerou(m);
    cargarBarcos(m);
    bool salida = false;
    while(salida != true||disparos != 0||hundidos != 0)
    {
        sys::cls();
        mostrarTablerou(m, disparos);
        int fila, columna, a;
        cout<<"Ingrese coordenada horizontal(Fila):"<<endl;
        cin>>fila;
        cout<<"Ingrese coordenada vertical(Columna):"<<endl;
        cin>>columna;
        if(fila>10&&fila!=50&&fila!=100&&fila!=200||columna>10&&columna!=50&&columna!=100&&columna!=200)
        {
            cout<<"Coordenadas invalidas!"<<endl;
            sys::msleep(2);
        }
        else if(fila&&columna==50)
        {
            cin.ignore();
            Menu();
            salida = true;
            return 1;
        }
        else if(fila&&columna==100)
        {
            if(z==0)
            {
                sys::cls();
                mostrarTableroayuda(m);
                sys::msleep(3);
                z++;
            }
            else
            {
                cout<<endl;
                cout<<"Lo siento humano, ya usaste la ayuda (;"<<endl;
                sys::msleep(2);
            }
        }
        else if(fila&&columna==200)
        {
            Ayuda();
        }
        else
        {
            int golpe = comparar(m, fila, columna);
            hundidos -= hundir(m, fila, columna, hundidos);
            if(hundidos == 0)
            {
                sys::cls();
                victoria(disparox - disparos);
                cout<<endl;
                cout<<"La flota estaba en las siguientes coordenadas:"<<endl;
                mostrarTableroayuda(m);
                cout<<endl;
                salida = true;
                disparos=0;
                cout<<"Presione enter para continuar"<<endl;
                sys::pause();
            }
            disparos--;
            disparos += golpe;
            if(disparos==0&&hundidos>1)
            {
                sys::cls();
                derrota();
                cout<<endl;
                cout<<"La flota estaba en las siguientes coordenadas:"<<endl;
                mostrarTableroayuda(m);
                cout<<endl;
                salida = true;
                hundidos = 0;
                cout<<"Presione enter para continuar"<<endl;
                sys::pause();;
            }
        }
    }
}

// FUNCION   : void mostrarpresentacion
// ACCION    : Presentacion del programa
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void mostrarpresentacion()
{
    int a=0;
    while(a!=1)
    {
        system("color 46");
        Presentacion();
        sys::msleep(1.5);
        sys::cls();
        system("color 64");
        Presentacion1();
        sys::msleep(1.5);
        sys::cls();
        system("color 46");
        Presentacion();
        sys::msleep(1.5);
        sys::cls();
        a++;
    }
    system("color 2");
}

// FUNCION   : void Lvl
// ACCION    : Submenu para elegir la dificultad del juego.
// PARAMETROS:
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void Lvl()
{
    sys::cls();
    cout<<"Nivel de dificultad:"<<endl;
    cout<<endl;
    cout<<"1 - Nivel 1: Grumete (50 disparos)"<<endl;
    cout<<"2 - Nivel 2: Almirante (25 disparos)"<<endl;
    cout<<endl;
    cout<<"Selecciona tu nivel:"<<endl;
    int lvl;
    cin>>lvl;
    switch(lvl)
    {
    case 1:
    {
        sys::cls();
        cout<<"$$$$$$$$  $$$$$$$$  $$    $$  $$       $$  $$$$$$$$ $$$$$$$$ $$$$$$$$"<<endl;
        cout<<"$$        $$    $$  $$    $$  $$$     $$$  $$          $$    $$  "<<endl;
        cout<<"$$        $$    $$  $$    $$  $$$$   $$$$  $$          $$    $$       "<<endl;
        cout<<"$$  $$$$  $$$$$$$   $$    $$  $$ $$ $$ $$  $$$$$       $$    $$$$$    "<<endl;
        cout<<"$$    $$  $$    $$  $$    $$  $$  $$$  $$  $$          $$    $$     "<<endl;
        cout<<"$$    $$  $$    $$  $$    $$  $$   $   $$  $$          $$    $$       "<<endl;
        cout<<" $$$$$$   $$    $$   $$$$$$   $$       $$  $$$$$$$$    $$    $$$$$$$$"<<endl;
        cout<<endl;
        cout<<"                                                  ::"<<endl;
        cout<<"                               .-'`''::..        ::"<<endl;
        cout<<"                             ,'        `''::..  ::"<<endl;
        cout<<"                           ,'               `''::.."<<endl;
        cout<<"                          ,            ____      `''::.."<<endl;
        cout<<"                         :           ,'   Y`.         `''::.."<<endl;
        cout<<"                        :           /        \\            `''::."<<endl;
        cout<<"                       :        _   \\ ()  () /\   _            .'"<<endl;
        cout<<"                      :        { \\.__`. /\\ ,'__./ }         .'"<<endl;
        cout<<"                      :        /_'=-.}|LLLU|{.-='_\\       .'"<<endl;
        cout<<"     :.              :          _  _.=`LLLU'=._   _      '"<<endl;
        cout<<"     ::              :         (_'_.-''`~~`''-._,,_)   .'"<<endl;
        cout<<"     |:             :           {_'              '_}  :"<<endl;
        cout<<"     ||             :       ____                     :"<<endl;
        cout<<"     |:.            :   ..''    ''-.                :"<<endl;
        cout<<"     ||:.           : .'            `.             :"<<endl;
        cout<<"     || `:.          :                `.          :"<<endl;
        cout<<"   __||  `''::..     :                 :.         :"<<endl;
        cout<<".-' '{|'       '::..':                ::.        :"<<endl;
        cout<<"     ::            `''::..            ::  .      :"<<endl;
        cout<<"     `:.                `''::..       ::   :     :           __"<<endl;
        cout<<"      `:.                    `''::.. ::_____:____:__    _.--'"<<endl;
        cout<<"^^^___.-`::..                  _.-'''''             '''''----....''"<<endl;
        cout<<"      `--._`::.           _.-'''                          ^^^^^^^^^^"<<endl;
        cout<<"               `'':: ___.-'      ^^^^^^^^^^      ^^^^^^^^^^     "<<endl;
        cout<<"            ____--''''' ^^^^^^^^^^         ^^^^^^^^^^"<<endl;
        cout<<"      .--.  .----. .----. "<<endl;
        cout<<"     / {} \\ | {}  }| {}  }  "<<endl;
        cout<<"    /  /\\  \\| .-. \\| .-. \\ ARMAS CARGADAS! QUE COMIENCE LA ESCARAMUZA!"<<endl;
        cout<<"    `-´  `-´|_| |_||_| |_|"<<endl;
        cout<<""<<endl;
        cout<<"|||||||||||||||||||||||||||||"<<endl;
        cout<<"|||   Desea continuar?    |||"<<endl;
        cout<<"|||   1 - SI              |||"<<endl;
        cout<<"|||   2 - NO              |||"<<endl;
        cout<<"|||   3 -Regresar al      |||"<<endl;
        cout<<"|||   menu principal      |||"<<endl;
        cout<<"|||||||||||||||||||||||||||||"<<endl;cout<<""<<endl;
        int k;
        cout<<"Ingrese una opcion:"<<endl;
        cin>>k;
        if(k==1)
        {
        batalla(50);
        }
        else if(k==2)
        {
            Lvl();
        }
        else if(k==3)
        {
            Menu();
        }
        else if(k<1||k>3)
        {
            cout<<"Error! Opcion invalida!"<<endl;
            sys::msleep(2);
            Lvl();
        }
    }
    break;
    case 2:
    {
        sys::cls();
        cout<<" $$$$$$  $$    $$       $$  $$  $$$$$$$   $$$$$$  $$    $$ $$$$$$ $$$$$"<<endl;
        cout<<"$$    $$ $$    $$$     $$$  $$  $$    $$ $$    $$ $$$   $$   $$   $$      "<<endl;
        cout<<"$$    $$ $$    $$$$   $$$$  $$  $$    $$ $$    $$ $$$$  $$   $$   $$      "<<endl;
        cout<<"$$$$$$$$ $$    $$ $$ $$ $$  $$  $$$$$$$  $$$$$$$$ $$ $$ $$   $$   $$$$$   "<<endl;
        cout<<"$$    $$ $$    $$  $$$  $$  $$  $$    $$ $$    $$ $$  $$$$   $$   $$      "<<endl;
        cout<<"$$    $$ $$    $$   $   $$  $$  $$    $$ $$    $$ $$   $$$   $$   $$      "<<endl;
        cout<<"$$    $$ $$$$$ $$       $$  $$  $$    $$ $$    $$ $$    $$   $$   $$$$$"<<endl;
        cout<<endl;
        cout<<"                                                  ::"<<endl;
        cout<<"                               .-'`''::..        ::"<<endl;
        cout<<"                             ,'        `''::..  ::"<<endl;
        cout<<"                           ,'               `''::.."<<endl;
        cout<<"                          ,            ____      `''::.."<<endl;
        cout<<"                         :           ,'   Y`.         `''::.."<<endl;
        cout<<"                        :           /        \\            `''::."<<endl;
        cout<<"                       :        _   \\ ()  () /\   _            .'"<<endl;
        cout<<"                      :        { \\.__`. /\\ ,'__./ }         .'"<<endl;
        cout<<"                      :        /_'=-.}|LLLU|{.-='_\\       .'"<<endl;
        cout<<"     :.              :          _  _.=`LLLU'=._   _      '"<<endl;
        cout<<"     ::              :         (_'_.-''`~~`''-._,,_)   .'"<<endl;
        cout<<"     |:             :           {_'              '_}  :"<<endl;
        cout<<"     ||             :       ____                     :"<<endl;
        cout<<"     |:.            :   ..''    ''-.                :"<<endl;
        cout<<"     ||:.           : .'            `.             :"<<endl;
        cout<<"     || `:.          :                `.          :"<<endl;
        cout<<"   __||  `''::..     :                 :.         :"<<endl;
        cout<<".-' '{|'       '::..':                ::.        :"<<endl;
        cout<<"     ::            `''::..            ::  .      :"<<endl;
        cout<<"     `:.                `''::..       ::   :     :           __"<<endl;
        cout<<"      `:.                    `''::.. ::_____:____:__    _.--'"<<endl;
        cout<<"^^^___.-`::..                  _.-'''''             '''''----....''"<<endl;
        cout<<"      `--._`::.           _.-'''                          ^^^^^^^^^^"<<endl;
        cout<<"               `'':: ___.-'      ^^^^^^^^^^      ^^^^^^^^^^     "<<endl;
        cout<<"            ____--''''' ^^^^^^^^^^         ^^^^^^^^^^"<<endl;
        cout<<"      .--.  .----. .----. "<<endl;
        cout<<"     / {} \\ | {}  }| {}  }  "<<endl;
        cout<<"    /  /\\  \\| .-. \\| .-. \\ ARMAS CARGADAS! QUE COMIENCE LA ESCARAMUZA!"<<endl;
        cout<<"    `-´  `-´|_| |_||_| |_|"<<endl;
        cout<<""<<endl;
        cout<<"|||||||||||||||||||||||||||||"<<endl;
        cout<<"|||   Desea continuar?    |||"<<endl;
        cout<<"|||   1 - SI              |||"<<endl;
        cout<<"|||   2 - NO              |||"<<endl;
        cout<<"|||   3 -Regresar al      |||"<<endl;
        cout<<"|||   menu principal      |||"<<endl;
        cout<<"|||||||||||||||||||||||||||||"<<endl;cout<<""<<endl;
        int k;
        cout<<"Ingrese una opcion:"<<endl;
        cin>>k;
        if(k==1)
        {
        batalla(25);
        }
        else if(k==2)
        {
            Lvl();
        }
        else if(k==3)
        {
            Menu();
        }
        else if(k<1||k>3)
        {
            cout<<"Error! Opcion invalida!"<<endl;
            sys::msleep(2);
            Lvl();
        }
    }
    break;
    default:
    {
        cout<<"Error! Opcion invalida! Presione enter para continuar."<<endl;
        cin.ignore();
    }
    break;
    cout<<"Presione enter para continuar"<<endl;
                sys::pause();
    }
}

#endif // MENUPRESDESP_H_INCLUDED
