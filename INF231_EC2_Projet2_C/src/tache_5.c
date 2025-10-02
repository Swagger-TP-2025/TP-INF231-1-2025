#include <stdio.h>
#include <stdlib.h>

struct CNode {
    int data;
    struct CNode *next;
};

void insertTailCircular(struct CNode **head, int val) {
    struct CNode *newNode = malloc(sizeof(struct CNode));
    newNode->data = val;

    if (*head == NULL) {
        newNode->next = newNode;
        *head = newNode;
        return;
    }

    struct CNode *temp = *head;
    while (temp->next != *head)
        temp = temp->next;

    temp->next = newNode;
    newNode->next = *head;
}

// Affichage
void printCircular(struct CNode *head) {
    if (head == NULL) return;
    struct CNode *temp = head;
    do {
        printf("%d -> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(retour au debut)\n");
}

int main() {
    struct CNode *head = NULL;
    int n, val;

    printf("Combien d'elements ? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &val);
        insertTailCircular(&head, val);
    }

    printf("Liste circulaire apres insertions en queue:\n");
    printCircular(head);

    return 0;
}
