#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud d'une liste doublement chaînée
struct DNode {
    int data;
    struct DNode *prev, *next;
};

// Insertion en tête
void insertHead(struct DNode **head, int val) {
    struct DNode *newNode = malloc(sizeof(struct DNode));
    newNode->data = val;
    newNode->prev = NULL;
    newNode->next = *head;

    if (*head != NULL)
        (*head)->prev = newNode;

    *head = newNode;
}

// Affichage dans les deux sens
void printList(struct DNode *head) {
    struct DNode *temp = head;
    printf("De la tete vers la fin: ");
    while (temp != NULL) {
        printf("%d <-> ", temp->data);
        if (temp->next == NULL) break;
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct DNode *head = NULL;
    int n, val;

    printf("Combien d'elements dans la liste initiale ? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &val);
        insertHead(&head, val);
    }

    printf("Liste finale (insertion en tete successives) :\n");
    printList(head);

    return 0;
}
