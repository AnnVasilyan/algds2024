#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int main(void) {
    int ch, data;
    while (1) {
        printf("1. Insertion\t2. Deletion\n");
        printf("3. Traverset\t4. Exit");
        printf("\nEnter your choice:");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element to insert:");
                scanf("%d", &data);
                insertion(data);
                break;
            case 2:
                printf("Enter the element to delete:");
                scanf("%d", &data);
                deletion(data);
                break;
            case 3:
                inorderTraversal(root);
                printf("\n");
                break;
            case 4:
                exit(0);
            default:
                printf("Not available\n");
                break;
        }
        printf("\n");
    }
    return 0;
}