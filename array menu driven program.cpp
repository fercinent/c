#include <stdio.h>
#define SIZE 100
int arr[SIZE];
int n = 0; // Current number of elements
// Function to insert an element
void insert() {
if (n >= SIZE) {
printf("Array is full!\n");
return;
}
int val, pos;
printf("Enter value to insert: ");
scanf("%d", &val);
printf("Enter position (0 to %d): ", n); // n is allowed (to insert at end)
scanf("%d", &pos);
if (pos < 0 || pos > n) {
printf("Invalid position!\n");
return;
}
// Shift elements right to make space
for (int i = n; i > pos; i--) {
arr[i] = arr[i - 1];
}
arr[pos] = val;
n++;
printf("Inserted %d at position %d\n", val, pos);
}
// Function to search for an element
void search() {
int key, found = 0;
printf("Enter value to search: ");
scanf("%d", &key);
for (int i = 0; i < n; i++) {
if (arr[i] == key) {
printf("Found at position %d\n", i);
found = 1;
break;
}
}
if (!found) {
printf("Element not found\n");
}
}
// Function to delete an element
void deleteElement() {
int key, found = 0;
printf("Enter value to delete: ");
scanf("%d", &key);
for (int i = 0; i < n; i++) {
if (arr[i] == key) {
for (int j = i; j < n - 1; j++) {
arr[j] = arr[j + 1];
}
n--;
found = 1;
printf("Deleted %d\n", key);
break;
}
}
if (!found) {
printf("Element not found\n");
}
}
// Function to sort the array
void sort() {
for (int i = 0; i < n - 1; i++) {
for (int j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
int temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
}
printf("Array sorted in ascending order.\n");
}
// Function to display the array
void display() {
if (n == 0) {
printf("Array is empty\n");
return;
}
printf("Array elements: ");
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
// Main function with menu
int main() {
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
switch (choice) {
case 1:
insert();
break;
case 2:
search();
break;
case 3:
deleteElement();
break;
case 4:
sort();
break;
case 5:
display();
break;
default:
printf("Invalid choice. Try again.\n");
}
}
return 0;
}

