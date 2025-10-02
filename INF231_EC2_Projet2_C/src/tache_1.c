#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

// Fonction pour insérer à la fin
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

// Fonction pour supprimer toutes les occurrences
void deleteAllOccurrences(struct Node **head, int val) {
    struct Node *temp = *head, *prev = NULL;

    while (temp != NULL) {
        if (temp->data == val) {
            if (prev == NULL) {
                *head = temp->next;
                free(temp);
                temp = *head;
            } else {
                prev->next = temp->next;
                free(temp);
                temp = prev->next;
            }
        } else {
            prev = temp;
            temp = temp->next;
        }
    }
}

// Affichage
void printList(struct Node *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    int n, val, del;

    printf("Combien d'elements dans la liste ? ");
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        printf("Entrez l'element %d: ", i+1);
        scanf("%d", &val);
        insertEnd(&head, val);
    }

    printf("Liste initiale: ");
    printList(head);

    printf("Entrez la valeur a supprimer (toutes les occurrences): ");
    scanf("%d", &del);
    deleteAllOccurrences(&head, del);

    printf("Liste apres suppression: ");
    printList(head);

    return 0;
}

