//
// Created by user on 14.05.2025.
//

#ifndef KONYV_H
#define KONYV_H

typedef struct Konyv {
    char cim[100];
    char szerzo[100];
    int kiadasiEv;
    bool statusz;
}Konyv;

void kiirKonyv(Konyv konyv);
void beolvasKonyv(Konyv *konyv);




#endif //KONYV_H
