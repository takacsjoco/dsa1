#include <stdio.h>
#include "list.h"

    int main(void) {
        if (!freopen("baratok.txt", "r", stdin)) {
            printf("ERROR WHEN OPENING FILE!");
            return -1;
        }
        Barat uj;
        Node *head=NULL;
        while ((scanf("%[^;];%d;%d;%d;%c;%d\n",
        uj.nev,
        &uj.szuletesiDatum.ev,
        &uj.szuletesiDatum.honap,
        &uj.szuletesiDatum.nap,
        &uj.nem,
        &uj.bulizas) != EOF))

             {
                 if(head==NULL) {
                     head = newNode(uj);
                 }
                 else
                 {
                     insertAtEnd(&head,uj);
                 }
             }
        printList(head);

    return 0;
}
