//
// Created by user on 14.05.2025.
//
#include "konyv.h"
#include <stdio.h>

inline void kiirKonyv(Konyv konyv) {
    printf("Cim: %s\n", konyv.cim);
    printf("\t - Szerzo: %s\n", konyv.szerzo);
    printf("\t- Kiadasi ev: %i\n", konyv.kiadasiEv);
    printf("\t- Kolcsonzesi statusz: ");
    if(konyv.statusz) {
        printf("igen\n");
    }
    else printf("nem\n");
}

void beolvasKonyv(Konyv *konyv) {
    scanf("\n%[^\n]", konyv->cim);
    scanf("\n%[^\n]", konyv->szerzo);
    scanf("%d", &konyv->kiadasiEv);
    int kolcsonzes;
    scanf("%d", &kolcsonzes);
    konyv->statusz = kolcsonzes;
}
