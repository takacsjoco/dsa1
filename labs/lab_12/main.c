#include <stdio.h>
#include <stdlib.h>

#include "bst.h"
#include "konyv.h"

int main(void) {
    Konyv konyv = {"Programozas kezdoknek",
                   "John Connor",
                   2003,
                   0};
    kiirKonyv(konyv);
    Node *fa = NULL;
    while (1) {
        printf("Opciok:"
           "\n0. Program befejezese"
           "\n1. Konyvek beolvasasa"
           "\n2. Konyvek kolcsonzee"
           "\n3. Konyvek visszahozasa"
           "\n4. Konyvek listaja"
           "\n5. Regi konyvek"
           "\nValassz");

        int opcio;
        scanf("%d", &opcio);
        switch (opcio) {
            case 0: {
                printf("Program vege\n");
                exit(1);
            }
            case 1: {
                printf("\nKonyvek beolvasasa....\n");
                if(!freopen("konyvek.txt", "r", stdin)) {
                    printf("FILE ERROR");
                    exit(-1);
                }
                int n;
                scanf("%d", &n);
                printf("%d\n", n);
                for (int i=0; i<n; ++i) {
                    Konyv k;
                    beolvasKonyv(&k);
                    fa = insert(fa, k);
                    // kiirKonyv(k);
                }
                printf("Beolvasas kesz, fa feltoltve: \n");
                //inorderTraversal(fa);


                freopen("CON", "r", stdin);
                break;
            }
            case 2:
                break;
            case 3:
                break;
            case 4:
                printf("A konyvek listaja: \n");
            inorderTraversal(fa);
            break;
            default:
                printf("Nincs ilyen opcio");
        }
    }
    return 0;
}
