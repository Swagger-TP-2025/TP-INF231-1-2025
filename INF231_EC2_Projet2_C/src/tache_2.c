#include <stdio.h>
#include <stdlib.h>

// Définition d'un nœud d'une liste simplement chaînée
struct Node {
    int data;
    struct Node *next;
};

// Fonction pour insérer à la fin (utilisée pour créer la liste initiale)
void insertEnd(struct Node **head, int val) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node *temp = *head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}

// Fonction d'insertion à une position donnée
void insertAtPosition(struct Node **head, int val, int pos) {
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = val;

    if (pos == 1) { // Cas insertion en tête
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node *temp = *head;
    for (int i = 1; i < pos-1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Position invalide.\n");
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

// Fonction d'affichage
void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int n, val, pos;

    printf("Combien d'elements dans la liste initiale ? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Entrez l'element %d : ", i+1);
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("Liste initiale: ");
    printList(head);

    printf("Entrez la valeur a inserer : ");
    scanf("%d", &val);
    printf("Entrez la position d'insertion : ");
    scanf("%d", &pos);

    insertAtPosition(&head, val, pos);

    printf("Liste apres insertion : ");
    printList(head);

    return 0;
}
