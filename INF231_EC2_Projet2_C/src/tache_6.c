#include <stdio.h>
#include <stdlib.h>

struct DCNode {
    int data;
    struct DCNode *next, *prev;
};

void insertHeadDoublyCircular(struct DCNode **head, int val) {
    struct DCNode *newNode = malloc(sizeof(struct DCNode));
    newNode->data = val;

    if (*head == NULL) {
        newNode->next = newNode->prev = newNode;
        *head = newNode;
        return;
    }

    struct DCNode *last = (*head)->prev;
    newNode->next = *head;
    newNode->prev = last;
    last->next = newNode;
    (*head)->prev = newNode;
    *head = newNode;
}

void printDoublyCircular(struct DCNode *head) {
    if (head == NULL) return;
    struct DCNode *temp = head;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != head);
    printf("(retour au debut)\n");
}

int main() {
    struct DCNode *head = NULL;
    int n, val;

    printf("Combien d'elements ? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &val);
        insertHeadDoublyCircular(&head, val);
    }

    printf("Liste doublement circulaire apres insertions en tete:\n");
    printDoublyCircular(head);

    return 0;
}
