#include <stdio.h>

#include "list.h"

int main(void) {
    Node *head = newNode(3);
    printList(head);

    insertAfter(head, 5);
    printList(head);

    insertAfter(head, 6);
    printList(head);

    insertAfter(head->next, 2);
    printList(head);

    insertAtBeginning(&head, 1);
    printList(head);

    insertAtEnd(&head, 7);
    printList(head);

    return 0;
}
