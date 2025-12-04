#include <stdio.h>
int main() {
int r, c;
// Input number of rows and columns
printf("Enter number of rows: ");
scanf("%d", &r);
printf("Enter number of columns: ");
scanf("%d", &c);
int A[r][c], B[r][c], Sum[r][c];
// Read first matrix
printf("\nEnter elements of Matrix A:\n");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &A[i][j]);
}
}
// Read second matrix
printf("\nEnter elements of Matrix B:\n");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
scanf("%d", &B[i][j]);
}
}
// Add both matrices
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
Sum[i][j] = A[i][j] + B[i][j];
}
}
// Print result

printf("\nSum of the two matrices:\n");
for(int i = 0; i < r; i++) {
for(int j = 0; j < c; j++) {
printf("%d ", Sum[i][j]);
}
printf("\n");
}
return 0;
}