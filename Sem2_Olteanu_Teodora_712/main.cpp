#include <iostream>
#include <cstring>
#include "Konto.h"

using namespace std;

struct structura{
    int i= 7;
};

char *strfind (const char * s, const char * f)
{
    char *p;
    p= strstr(f,s);
    if(p!=NULL)
    {
        return p;
    }
    else
        return NULL;

}

int strlenn(char str[3])
{
    char *p;
    int ct = 0;
    //p= reinterpret_cast<char *>(str);
    p = str;
    while(*p!='\0')
    {
        ct++;
        p++;
    }
    return ct;
}

char *strcpyy(char str[3], char fstr[8])
{
    int n1, n2, i;
    n1= strlenn(str);
    n2 = strlenn(fstr);
    //cout<<n;
    for(i=0;i<n2;i++)
    {
        str[n1+i]=fstr[i];
    }
    str[n1+n2]='\0';
    return str;
}
void removee(int elem, int lista[9]) {
    int i, j;
    for(i=0;i<1;i++)
        if(elem==lista[i])
        {
            //cout<<"i:"<<i;
            for(j=i;j<9;j++)
                lista[j]=lista[j+1];
        }
    for(i=0;i<8;i++)
        cout<<lista[i]<<' ';

}

int main() {

    int lista[9];
    char str[3] = "ab";// fuer s
    char fstr[8] = "avgabva";
    char *s = str, *f = fstr;
    cout<<"strfind in "<<fstr<<" von "<<str<<" :"<<strfind(s,f)<<"\n";

    structura *p;
    p++->i;

    str[2]='\0';
    cout<<"strlenn von "<<str<<" :"<<strlenn(str)<<"\n";
    cout<<"strcpyy von "<<str<<" und "<<fstr<<" :"<<strcpyy(str, fstr)<<"\n";
    lista[0]=0;//lista[1]=1;lista[2]=2;lista[3]=3;lista[4]=4;lista[5]=5;lista[6]=6;lista[7]=7;lista[8]=8;
    //for(int i=0;i<1;i++)
        //cout<<lista[i]<<' ';
    cout<<"\n";
    //removee(0,lista);
    Konto konto;
    konto.Einzahlung(100);
    konto.Bezahlen(20);
    konto.Einzahlung(10);
    cout<<"Kontostand: "<<konto.Kontostand();
    //konto.Einlesen();

    return 0;
}
