#include <stdio.h>

#define SIZE 100

// Global variables
int arr[SIZE];
int n = 0; // Number of elements in the array

// Function declarations
void insertElement();
void displayArray();
void searchElement();
void deleteElement();
void sortArray();

int main() {
    int choice;

    while (1) {
        printf("\n--- Array Operations Menu ---\n");
        printf("1. Insert Element\n");
        printf("2. Display Array\n");
        printf("3. Search Element\n");
        printf("4. Delete Element\n");
        printf("5. Sort Array\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                insertElement();
                break;
            case 2:
                displayArray();
                break;
            case 3:
                searchElement();
                break;
            case 4:
                deleteElement();
                break;
            case 5:
                sortArray();
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}

// Function to insert element
void insertElement() {
    int value;
    if (n >= SIZE) {
        printf("Array is full! Cannot insert.\n");
        return;
    }
    printf("Enter element to insert: ");
    scanf("%d", &value);
    arr[n] = value;
    n++;
    printf("Element inserted successfully.\n");
}

// Function to display array
void displayArray() {
    int i;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to search element
void searchElement() {
    int value, i, found = 0;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter element to search: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            printf("Element found at position %d.\n", i + 1);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found.\n");
    }
}

// Function to delete element
void deleteElement() {
    int value, i, j, found = 0;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    printf("Enter element to delete: ");
    scanf("%d", &value);
    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            found = 1;
            for (j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            printf("Element deleted successfully.\n");
            break;
        }
    }
    if (!found) {
        printf("Element not found.\n");
    }
}

// Function to sort array (Bubble Sort)
void sortArray() {
    int i, j, temp;
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Array sorted successfully.\n");
}

