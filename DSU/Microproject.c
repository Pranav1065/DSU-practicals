#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Item
{
    int id;
    char name[50];
    char location[50];
    char status[20];
    struct Item *next;
};

struct Item *head = NULL;

void addItem()
{
    struct Item *newItem, *temp;

    newItem = malloc(sizeof(struct Item));

    printf("Enter Item ID: ");
    scanf("%d", &newItem->id);

    printf("Enter Item Name: ");
    scanf(" %49[^\n]", newItem->name);

    printf("Enter Location: ");
    scanf(" %49[^\n]", newItem->location);

    printf("Enter Status (Lost/Found): ");
    scanf(" %19s", newItem->status);

    newItem->next = NULL;

    if (head == NULL)
        head = newItem;
    else
    {
        temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newItem;
    }

    printf("Item added successfully!\n");
}

void displayItems()
{
    struct Item *temp = head;

    if (temp == NULL)
    {
        printf("No records found.\n");
        return;
    }

    while (temp != NULL)
    {
        printf("\nID: %d\n", temp->id);
        printf("Name: %s\n", temp->name);
        printf("Location: %s\n", temp->location);
        printf("Status: %s\n", temp->status);
        temp = temp->next;
    }
}

void searchItem()
{
    struct Item *temp = head;
    char name[50];

    printf("Enter item name to search: ");
    scanf(" %49[^\n]", name);

    while (temp != NULL)
    {
        if (strcmp(temp->name, name) == 0)
        {
            printf("Item found!\n");
            printf("ID: %d\n", temp->id);
            printf("Location: %s\n", temp->location);
            printf("Status: %s\n", temp->status);
            return;
        }

        temp = temp->next;
    }

    printf("Item not found.\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Lost and Found Item Tracker ---\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                addItem();
                break;

            case 2:
                displayItems();
                break;

            case 3:
                searchItem();
                break;

            case 4:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
