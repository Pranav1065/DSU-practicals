Lost and Found Item Tracker

#include <stdio.h>
#include <string.h>

struct Item {
    int id;
    char name[50];
    char location[50];
    char status[10];
};

int main() {
    struct Item items[100];
    int choice, n = 0, i, found, id;

    do {
        printf("\n--- Lost and Found Tracker ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            items[n].id = n + 1;

            printf("Enter item name: ");
            scanf(" %49[^\n]", items[n].name);

            printf("Enter location: ");
            scanf(" %49[^\n]", items[n].location);

            printf("Enter status (Lost/Found): ");
            scanf("%9s", items[n].status);

            n++;
            printf("Item added successfully!\n");
        }

        else if (choice == 2) {
            if (n == 0)
                printf("No items recorded.\n");

            for (i = 0; i < n; i++) {
                printf("\nID: %d", items[i].id);
                printf("\nName: %s", items[i].name);
                printf("\nLocation: %s", items[i].location);
                printf("\nStatus: %s\n", items[i].status);
            }
        }

        else if (choice == 3) {
            printf("Enter item ID to search: ");
            scanf("%d", &id);
            found = 0;

            for (i = 0; i < n; i++) {
                if (items[i].id == id) {
                    printf("Item: %s\n", items[i].name);
                    printf("Location: %s\n", items[i].location);
                    printf("Status: %s\n", items[i].status);
                    found = 1;
                    break;
                }
            }

            if (found == 0)
                printf("Item not found!\n");
        }

        else if (choice == 4)
            printf("Thank you!\n");

        else
            printf("Invalid choice!\n");

    } while (choice != 4);

    return 0;
}
