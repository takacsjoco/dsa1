#include <stdio.h>

#include "list.h"

int main(void) {
    Node *head = newNode(1);
    printList(head);

    insertAfter(head, 2);
    printList(head);

    insertAfter(head, 3);
    printList(head);

    printf("\n");

    Node *head2 = newNode(5);
    printList(head2);

    insertAfter(head2, 6);
    printList(head2);

    insertAfter(head2, 7);
    printList(head2);



    return 0;
}
