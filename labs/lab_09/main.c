#include <stdio.h>
#include "list.h"
#include "binarySearchTree.h"

    int main(void) {
        freopen("baratok.txt", "r", stdin);
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
        // Bináris keresőfa létrehozása a bulizas értékek alapján
        NodeTree *treeRoot = NULL;
        Node *current = head;

        while (current != NULL) {
            if (treeRoot == NULL) {
                treeRoot = createNewNode(current->data.bulizas);
            } else {
                // Azonos érték is mehet jobbra (vagy balra), egyszerű beszúrás
                NodeTree *ptr = treeRoot;
                int val = current->data.bulizas;
                while (1) {
                    if (val < ptr->data) {
                        if (ptr->left == NULL) {
                            ptr->left = createNewNode(val);
                            break;
                        }
                        ptr = ptr->left;
                    } else {
                        if (ptr->right == NULL) {
                            ptr->right = createNewNode(val);
                            break;
                        }
                        ptr = ptr->right;
                    }
                }
            }
            current = current->next;
        }

        // Inorder kiíratás (rendezett bulizas értékek)
        printf("\nBulizas ertekek inorder sorrendben:\n");
        inorderTraversal(treeRoot);
        printf("\n");

        NodeTree *treeRoot = NULL;
        Node *current = head;

        while (current != NULL) {
            treeRoot = insertByName(treeRoot, current->data);
            current = current->next;
        }

        printf("\nBarátok név szerint rendezve (BST inorder):\n");
        inorderPrintByName(treeRoot);

        // Memória felszabadítás
        destroyList(&head);
        destroyBinaryTree(&treeRoot);
        freopen("CON", "r", stdin);
    return 0;
}
