#include <stdio.h>
#define SIZE 100
int insert(int arr[], int size) {
if (size >= SIZE) {
printf("Array is full!\n");
} else {
int val, pos;
printf("Enter value to insert: ");
scanf("%d", &val);
printf("Enter position (0 to %d): ", size);
scanf("%d", &pos);
if (pos < 0 || pos > size) {
printf("Invalid position!\n");
} else {
// Shift elements right
for (int i = size; i > pos; i--) {
arr[i] = arr[i - 1];
}
arr[pos] = val;
size++;
printf("Inserted %d at position %d\n", val, pos);
}
}
return size;
}
// Function to search for an element
void search(int arr[], int size) {
int key, found = 0;
printf("Enter value to search: ");
scanf("%d", &key);
for (int i = 0; i < size; i++) {
if (arr[i] == key) {
printf("Element %d found at position %d\n", key, i);
found = 1;
break;
}
}
if (!found) {
printf("Element not found.\n");
}
}
// Function to delete an element
int deleteElement(int arr[], int size) {
int key, found = 0;
printf("Enter value to delete: ");
scanf("%d", &key);
for (int i = 0; i < size; i++) {
if (arr[i] == key) {
for (int j = i; j < size - 1; j++) {
arr[j] = arr[j + 1];
}
size--;
printf("Deleted %d\n", key);
found = 1;
break;
}
}
if (!found) {
printf("Element not found.\n");
}
return size;
}
// Function to sort the array
void sort(int arr[], int size) {
for (int i = 0; i < size - 1; i++) {
for (int j = 0; j < size - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
// swap
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
printf("Array sorted in ascending order.\n");
}
// Function to display the array
void display(int arr[], int size) {
if (size == 0) {
printf("Array is empty.\n");
return;
}
printf("Array elements: ");
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
// Main function with menu
int main() {
int arr[SIZE];
int size = 0;
int choice;
while (1) {
printf("\nMenu:\n");
printf("1. Insert\n");
printf("2. Search\n");
printf("3. Delete\n");
printf("4. Sort\n");
printf("5. Display\n");
printf("6. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
// Call functions with local array and size
if (choice == 1)
size = insert(arr, size);
else if (choice == 2)
search(arr, size);
else if (choice == 3)
size = deleteElement(arr, size);
else if (choice == 4)
sort(arr, size);
else if (choice == 5)
display(arr, size);
else if (choice == 6)
return 0;
}
}
