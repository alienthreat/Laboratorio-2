//#############################################################################
// ARCHIVO             : Funciones.h
// AUTOR/ES            : Bejarano Gabriel Alejandro
// VERSION             : 0.02 beta.
// FECHA DE CREACION   : 29/6/2016
// ULTIMA ACTUALIZACION: 29/6/2016
// LICENCIA            : GPL (General Public License) - Version 3.
//#############################################################################

#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>
#include "CSYSTEM/csystem.h"

using namespace std;
struct casilla
{
    int i;
    char u;
};

struct barco
{
    int fb;
    int cb;
    int tb;
    int db;
};

barco barco4, barco3a, barco3b, barco2a, barco2b, barco2c, barco1, barco1a, barco1b, barco1c;

//*****************************************************************************
//DEFINICION DE LAS FUNCIONES
//=============================================================================
// FUNCION   : void initTablero
// ACCION    : Inicializa el tablero
// PARAMETROS: casilla m[12][12]
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void initTablero(casilla m[12][12])
{
    for(int f=0; f<12; f++)
    {
        for(int c=0; c<12; c++)
        {
            m[f][c].i=0;
        }
    }
}

//=============================================================================
// FUNCION   : bool tocaPared
// ACCION    : Comprueba si el barco toca la pared para su ubicación.
// PARAMETROS: int f, int c, int d, int t
// DEVUELVE  : 1 si toca pared, 0 si no lo hace
//-----------------------------------------------------------------------------
bool tocaPared(int f, int c, int d, int t)
{
    bool result = false;
    if(d==0)//Horizontal
    {
        result = (c+t)>11;
    }
    else
    {
        result = (f+t)>11;
    }
    return result;
}

//=============================================================================
// FUNCION   : bool tocaBarco
// ACCION    : Comprueba si el barco toca o se superpone a otro para su ubicación.
// PARAMETROS: casilla m[12][12], int f, int c, int d, int t
// DEVUELVE  : 1 si toca pared, 0 si no lo hace
//-----------------------------------------------------------------------------
bool tocaBarco(casilla m[12][12], int f, int c, int d, int t)
{
    bool result = false;
    if(d==0)//Horizontal
    {
        for(int fm=f-1; fm<=f+1; fm++)
        {
            for(int cm=c-1; cm<=c+t; cm++)
            {
                if(m[fm][cm].i!=0)
                {
                    return true;
                }
            }
        }
    }
    else
    {
        for(int fm=f-1; fm<=f+t; fm++)
        {
            for(int cm=c-1; cm<=c+1; cm++)
            {
                if(m[fm][cm].i!=0)
                {
                    return true;
                }
            }
        }
    }
    return false;
}


//=============================================================================
// FUNCION   : void colocarBarco
// ACCION    : Coloca el barco en una posición de la matriz que no toque pared ni otro barco.
// PARAMETROS: casilla m[12][12], int f, int c, int d, int t
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void colocarBarco(casilla m[12][12], int f, int c, int d, int t)
{
    if(d==0)//Horizontal
    {
        for(int cm=c; cm<c+t; cm++)
        {
            m[f][cm].i=t;
        }
    }
    else
    {
        for(int fm=f; fm<f+t; fm++)
        {
            m[fm][c].i=t;
        }
    }
}


//=============================================================================
// FUNCION   : void cargarBarco
// ACCION    : Carga los diferentes tipos de barco para colocarlos, omprueba si toca o no
//             pared o a otro barco y los coloca. También guarda las posiciones de dichos barcos.
// PARAMETROS: casilla m[12][12], int t, int flagbarcos
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void cargarBarco(casilla m[12][12], int t, int flagbarcos)
{
    int f, c, d;
    bool tp, tb;
    do
    {
        f=sys::random(10)+1;
        c=sys::random(10)+1;
        d=sys::random(2); //Horizontal = 0; Vertical = 1;
        tp = tocaPared(f, c, d, t);
        if(!tp)
        {
            tb = tocaBarco(m, f, c, d, t);
        }
    }
    while(tp||tb);
    if(flagbarcos==0)
    {
        barco4.fb = f;
        barco4.cb = c;
        barco4.db = d;
        barco4.tb = t;
    }
    else if(flagbarcos==1)
    {
        barco3a.fb = f;
        barco3a.cb = c;
        barco3a.db = d;
        barco3a.tb = t;
    }
    else if(flagbarcos==2)
    {
        barco3b.fb = f;
        barco3b.cb = c;
        barco3b.db = d;
        barco3b.tb = t;
    }
    else if(flagbarcos==3)
    {
        barco2a.fb = f;
        barco2a.cb = c;
        barco2a.db = d;
        barco2a.tb = t;
    }
    else if(flagbarcos==4)
    {
        barco2b.fb = f;
        barco2b.cb = c;
        barco2b.db = d;
        barco2b.tb = t;
    }
    else if(flagbarcos==5)
    {
        barco2c.fb = f;
        barco2c.cb = c;
        barco2c.db = d;
        barco2c.tb = t;
    }
    else if(flagbarcos==6)
    {
        barco1.fb = f;
        barco1.cb = c;
        barco1.db = d;
        barco1.tb = t;
    }
    else if(flagbarcos==7)
    {
        barco1a.fb = f;
        barco1a.cb = c;
        barco1a.db = d;
        barco1a.tb = t;
    }
    else if(flagbarcos==8)
    {
        barco1b.fb = f;
        barco1b.cb = c;
        barco1b.db = d;
        barco1b.tb = t;
    }
    else if(flagbarcos==9)
    {
        barco1c.fb = f;
        barco1c.cb = c;
        barco1c.db = d;
        barco1c.tb = t;
    }
    colocarBarco(m, f, c, d, t);
}


//=============================================================================
// FUNCION   : void cargarBarcos
// ACCION    : Carga los diferentes tipos de barco que serán colocados.
//             También colabora en guardar las posiciones de dichos barcos.
// PARAMETROS: casilla m[12][12]
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void cargarBarcos(casilla m[12][12])
{
    int flagbarcos = 0;
    cargarBarco(m, 4, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 3, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 3, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 2, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 2, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 2, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 1, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 1, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 1, flagbarcos);
    flagbarcos++;
    cargarBarco(m, 1, flagbarcos);
    flagbarcos++;
}


//=============================================================================
// FUNCION   : void mostrarTablero
// ACCION    : Muestra el tablero interno(Donde están las posiciones de los barcos).
// PARAMETROS: casilla m[12][12]
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void mostrarTablero(casilla m[12][12])
{
    for(int f=0; f<12; f++)
    {
        for(int c=0; c<12; c++)
        {
            cout<<m[f][c].i;
        }
        cout<<endl;
    }
}
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////
//TABLERO DEL USER(O LO QUE SE VA A MOSTRAR)

//=============================================================================
// FUNCION   : void initTablero
// ACCION    : Inicializa el tablero que se le va a mostrar al usuario.
// PARAMETROS: casilla m[12][12]
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void initTablerou(casilla m[12][12])
{
    for(int f=0; f<12; f++)
    {
        for(int c=0; c<12; c++)
        {
            m[f][c].u='.';
        }
    }
}



//=============================================================================
// FUNCION   : void mostrarTablerou
// ACCION    : Muestra el tablero al usuario.
// PARAMETROS: casilla m[12][12], int disparos
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void mostrarTablerou(casilla m[12][12], int disparos)
{
    cout<<"||||||||||||||||||||||||||||"<<endl;
    cout<<"|||Restan "<<disparos<<" disparos|||||||Ayuda: Ingresa las coordenadas 200:200"<<endl;
    cout<<"||||||||||||||||||||||||||||Flash(Unico uso): Ingresa las coordenadas 100:100"<<endl;
    cout<<"||||||||||||||||||||||||||||Volver al Menu: Ingresa las coordenadas 50:50"<<endl;
    cout<<endl;
    int a=1;
    cout<<"|0|";
    for(int f=0; f<1; f++)
    {
        for(int c=0; c<9; c++)
        {
            cout<<a<<"|";
            a++;
        }
    }
    cout<<"10*"<<endl;
    a=0;
    for(int f=1; f<11; f++)
    {
        if(a<9)
        {
            cout<<"|";
        }
        a++;
        cout<<a<<"|";
        for(int c=0; c<10; c++)
        {
            cout<<m[f][c].u<<"|";
        }
        cout<<"-";
        cout<<endl;
    }
    cout<<"-------------------------"<<endl;
}


//=============================================================================
// FUNCION   : int ponerh
// ACCION    : Verifica si desde el inicio del barco(de tamaño mayor a 1) hasta el final
//             hay 'T'. De haberlas coloca 'H' en su lugar para indicar que está hundido.
// PARAMETROS: casilla m[12][12], barco barcox, int fb, int db, int tb, int cb
// DEVUELVE  : un entero que se suma a la cantidad de Hundidos que hay(para saber si se ganó
//             el juego.)
//-----------------------------------------------------------------------------
int ponerh(casilla m[12][12], barco barcox, int fb, int db, int tb, int cb)
{
    int a = 0;
    int b = 0;
    if(barcox.db==0)//Horizontal
    {
        for(int c = barcox.cb; c<barcox.cb+barcox.tb; c++)
        {
            if(m[barcox.fb][c-1].u=='T')
            {
                a +=1;
            }
            else
                {
                    a += 0;
                }
        }
        if(a==barcox.tb)
        {
        for(int c = barcox.cb; c<barcox.cb+barcox.tb; c++)
        {
            m[barcox.fb][c-1].u='H';
            b++;
        }
        }
        else
        {
            b += 0;
        }
    }
    else
    {
        for(int f = barcox.fb; f<barcox.fb+barcox.tb; f++)
        {
            if(m[f][barcox.cb-1].u=='T')
            {
                a +=1;
            }
            else
                {
                    a += 0;
                }
        }
        if(a==barcox.tb)
        {
        for(int f = barcox.fb; f<barcox.fb+barcox.tb; f++)
        {
            m[f][barcox.cb-1].u='H';
            b++;
        }
        }
        else
        {
            b += 0;
        }
    }
    return b;
}


//=============================================================================
// FUNCION   : int comparar
// ACCION    : Verifica si hay 'T', 'H', o 'A' para saber si se descuenta o no un disparo.
// PARAMETROS: casilla m[12][12], int fila, int columna
// DEVUELVE  : un entero que se suma a los disparos en caso de no haber tocado agua.
//-----------------------------------------------------------------------------
int comparar(casilla m[12][12], int fila, int columna)
{
    if(m[fila][columna].i==0)
    {
        m[fila][columna-1].u = 'A';
        return 0;
    }
    else if(m[fila][columna-1].u=='H'||m[fila][columna-1].u=='T')
    {
        return 0;
    }
    else if(m[fila][columna].i>0)
    {
        m[fila][columna-1].u = 'T';
        return 1;
    }
}


//=============================================================================
// FUNCION   : int hundir
// ACCION    : Se encarga de poner 'H' donde haya barcos hundidos.
// PARAMETROS: casilla m[12][12], int fila, int columna
// DEVUELVE  : un entero que indica la cantidad de Hundidos que hay(para saber si se ganó
//             el juego.)
//-----------------------------------------------------------------------------
int hundir(casilla m[12][12], int fila, int columna, int hundidos)
{
    int a = 0;
    a += ponerh(m, barco4, barco4.fb, barco4.db, barco4.tb, barco4.cb);
    a += ponerh(m, barco3a, barco3a.fb, barco3a.db, barco3a.tb, barco3a.cb);
    a += ponerh(m, barco3b, barco3b.fb, barco3b.db, barco3b.tb, barco3b.cb);
    a += ponerh(m, barco2a, barco2a.fb, barco2a.db, barco2a.tb, barco2a.cb);
    a += ponerh(m, barco2b, barco2b.fb, barco2b.db, barco2b.tb, barco2b.cb);
    a += ponerh(m, barco2c, barco2c.fb, barco2c.db, barco2c.tb, barco2c.cb);
    a += ponerh(m, barco1, barco1.fb, barco1.db, barco1.tb, barco1.cb);
    a += ponerh(m, barco1a, barco1a.fb, barco1a.db, barco1a.tb, barco1a.cb);
    a += ponerh(m, barco1b, barco1b.fb, barco1b.db, barco1b.tb, barco1b.cb);
    a += ponerh(m, barco1c, barco1c.fb, barco1c.db, barco1c.tb, barco1c.cb);
    return a;
}


//=============================================================================
// FUNCION   : void mostrarTableroayuda
// ACCION    : Muestra el tablero interno(con la posicion de los barcos) por un breve instante.
// PARAMETROS: casilla m[12][12]
// DEVUELVE  : void
//-----------------------------------------------------------------------------
void mostrarTableroayuda(casilla m[12][12])
{
    int a=1;
    cout<<"|0|";
    for(int f=0; f<1; f++)
    {
        for(int c=0; c<9; c++)
        {
            cout<<a<<"|";
            a++;
        }
    }
    cout<<"10*"<<endl;
    a=0;
    for(int f=1; f<11; f++)
    {
        if(a<9)
        {
            cout<<"|";
        }
        a++;
        cout<<a<<"|";
        for(int c=1; c<11; c++)
        {
            cout<<m[f][c].i<<"|";
        }
        cout<<"-";
        cout<<endl;
    }
    cout<<"-------------------------"<<endl;
}


#endif // FUNCIONES_H_INCLUDED
