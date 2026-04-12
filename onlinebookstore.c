#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int id;
    char name[50];
    char type[20];
    struct Node *child;
    struct Node *sibling;
};

struct Node *createNode(int id, char name[], char type[])
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->id = id;
    strcpy(newNode->name, name);
    strcpy(newNode->type, type);
    newNode->child = NULL;
    newNode->sibling = NULL;
    return newNode;
}

void addChild(struct Node *parent, struct Node *newNode)
{
    if (parent->child == NULL)
    {
        parent->child = newNode;
    }
    else
    {
        struct Node *temp = parent->child;
        while (temp->sibling != NULL)
            temp = temp->sibling;
        temp->sibling = newNode;
    }
}

void display(struct Node *root, int level)
{
    if (root == NULL)
        return;

    for (int i = 0; i < level; i++)
        printf("  ");

    printf("[%d] %s (%s)\n", root->id, root->name, root->type);

    display(root->child, level + 1);
    display(root->sibling, level);
}

struct Node *search(struct Node *root, int id)
{
    if (root == NULL)
        return NULL;

    if (root->id == id)
        return root;

    struct Node *found = search(root->child, id);
    if (found != NULL)
        return found;

    return search(root->sibling, id);
}

void update(struct Node *root, int id)
{
    struct Node *node = search(root, id);
    if (node == NULL)
    {
        printf("Node not found!\n");
        return;
    }

    printf("Enter new name: ");
    scanf(" %[^\n]", node->name);

    printf("Updated successfully!\n");
}

struct Node *deleteNode(struct Node *root, int id)
{
    if (root == NULL)
        return NULL;

    if (root->id == id)
    {
        free(root);
        return NULL;
    }

    struct Node *parent = root;
    struct Node *curr = root->child;

    while (curr != NULL)
    {
        if (curr->id == id)
        {
            parent->child = curr->sibling;
            free(curr);
            printf("Deleted successfully!\n");
            return root;
        }
        parent = curr;
        curr = curr->sibling;
    }

    root->child = deleteNode(root->child, id);
    root->sibling = deleteNode(root->sibling, id);

    return root;
}

int main()
{
    struct Node *root = createNode(0, "Online Bookstore", "Category");

    int choice, id, parentId;
    char name[50], type[20];

    while (1)
    {
        printf("\n--- Online Bookstore Menu ---\n");
        printf("1. Add Node\n");
        printf("2. Delete Node\n");
        printf("3. Update Node\n");
        printf("4. Search\n");
        printf("5. Display\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter ID: ");
            scanf("%d", &id);

            printf("Enter Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Type (Category/Book): ");
            scanf("%s", type);

            printf("Enter Parent ID: ");
            scanf("%d", &parentId);

            struct Node *parent = search(root, parentId);
            if (parent == NULL)
            {
                printf("Parent not found!\n");
            }
            else
            {
                struct Node *newNode = createNode(id, name, type);
                addChild(parent, newNode);
                printf("Node added successfully!\n");
            }
            break;

        case 2:
            printf("Enter ID to delete: ");
            scanf("%d", &id);
            root = deleteNode(root, id);
            break;

        case 3:
            printf("Enter ID to update: ");
            scanf("%d", &id);
            update(root, id);
            break;

        case 4:
            printf("Enter ID to search: ");
            scanf("%d", &id);
            struct Node *found = search(root, id);
            if (found)
                printf("Found: %s (%s)\n", found->name, found->type);
            else
                printf("Not found!\n");
            break;

        case 5:
            printf("\n--- Bookstore Structure ---\n");
            display(root, 0);
            break;

        case 6:
            printf("Exiting...\n");
            exit(0);

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}