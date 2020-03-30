//
// Created by Teo on 21.03.2020.
//

#ifndef SEM2_OLTEANU_TEODORA_712_KONTO_H
#define SEM2_OLTEANU_TEODORA_712_KONTO_H

class Konto {

private:

    double Saldo;

public:
    //Konstruktor
    Konto();

    void Bezahlen(const double & Betrag); // Aus dem Konto nehmen
    void Einzahlung(const double & Betrag);//Im Konto Geld bekommen
    double Kontostand(); // Den Restbetrag zurückgeben
    void Transaktion(double Betrag,const char *typ);
    void Einlesen();

};


#endif //SEM2_OLTEANU_TEODORA_712_KONTO_H
