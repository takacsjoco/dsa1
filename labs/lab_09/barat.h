//
// Created by user on 30.04.2025.
//

#ifndef BARAT_H
#define BARAT_H
typedef struct Datum {
    int ev;
    int honap;
    int nap;
} Datum;

typedef struct Barat {
    char nev[100];
    Datum szuletesiDatum;
    char nem;
    int bulizas;
} Barat;


#endif //BARAT_H
