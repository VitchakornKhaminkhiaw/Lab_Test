#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct __Node {
    int data;
    struct __Node *next;
};

typedef struct __Node Node;

typedef Node* List;

void insert (List *list, int value);
void print(List list);
void printR(List list);

int main(){
    List head = '\0';
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 9000);
    print(head);
    printf("\n");
    printR(head);
    printf("\n");

    delete(&head, 9);
    printR(head);
    printf("\n");
    return 0;
}
void delete(List *list, int value){
    List current = *list;
    List prev = NULL;

    while (current != NULL){
        if (current->data == value) break;
        prev = current;
        current = current->next;
    }

    if (current == NULL) { // value not found in list
        return;
    }

    if (prev == NULL) { // delete root node
        *list = current->next;
    } else{ //general case
        prev->next = current->next;
    }
    current->next = NULL;
    free(current);
}

void print(List list){ //ปริ้นแบบ while loop
    List current = list;

    while (current != NULL) {
        printf("[%d]->", current->data);
        current = current->next;
    }
}

void printR(List list) { // ปริ้นแบบ recursive
    if (list == NULL) return;
    printf("[%d]->", list->data);
    printR(list->next);
}


void insert(List *list, int value) {
    List node = (List)malloc(sizeof(Node));
    node->data = value;
    node->next = NULL;

    if (*list == NULL){
        *list = node;
        return;
    }
    
    List current = *list;
    List prev = NULL;

    while (current != NULL) {
        prev = current;
        current = current->next;

    }
    prev->next = node;
}