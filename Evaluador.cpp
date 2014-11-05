#include "Evaluador.h"



void evaluar()
{
    double nota = 0;

    cout<<"sonMayusculas:\t\t";
    if(!sonMayusculas("HOLAs")
        && !sonMayusculas("hOla")
        && !sonMayusculas("retono")
        && !sonMayusculas("CAsa")
        && !sonMayusculas("caMello")
        && !sonMayusculas("aba")
        && !sonMayusculas("o")
        && sonMayusculas("GAGA")
        && sonMayusculas("HOLA")
        && sonMayusculas("TEST")
        && sonMayusculas("MONTANA")
        && sonMayusculas("PARISHILTON")
        && sonMayusculas("GAGA")
        && sonMayusculas("Y")
        )
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"esMayuscula:\t\t";
    if(!esMayuscula('a')
        && !esMayuscula('b')
        && !esMayuscula('w')
        && !esMayuscula('y')
        && !esMayuscula('a')
        && esMayuscula('Z')
        && esMayuscula('E')
        && esMayuscula('A')
        )
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    int a=2;
    int b=4;
    int c=10;
    int d=15;

    elevarAlCuadrado(&a);
    elevarAlCuadrado(&b);
    elevarAlCuadrado(&c);
    elevarAlCuadrado(&d);

    cout<<"elevarAlCuadrado:\t";
    if(a==4 && b==16 && c==100 && d==225)
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"getMayor:\t\t";
    if(getMayor(&a,&b,&c)==c
        && getMayor(&a,&b,&a)==b
        && getMayor(&c,&b,&a)==c
        && getMayor(&a,&b,&d)==d
        && getMayor(&b,&b,&d)==d
        )
    {
        nota+=2.5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/10"<<endl<<endl;
}
