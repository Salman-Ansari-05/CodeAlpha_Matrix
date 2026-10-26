#include <stdio.h>

void addition(int a[10][10], int b[10][10], int r, int c);
void multiplication(int a[10][10], int b[10][10], int r1, int c1, int c2);
void transpose(int a[10][10], int r, int c);

int main() {
    int a[10][10], b[10][10];
    int r1, c1, r2, c2;
    int i, j, choice;

    printf("Enter rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

    printf("Enter rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (r1 <= 0 || r1 > 10 || c1 <= 0 || c1 > 10 ||
        r2 <= 0 || r2 > 10 || c2 <= 0 || c2 > 10) {
        printf("Invalid matrix size! Use dimensions from 1 to 10.\n");
        return 1;
    }

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n1. Matrix Addition\n");
    printf("2. Matrix Multiplication\n");
    printf("3. Transpose of First Matrix\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            if (r1 == r2 && c1 == c2) {
                addition(a, b, r1, c1);
            } else {
                printf("Addition is not possible.\n");
            }
            break;

        case 2:
            if (c1 == r2) {
                multiplication(a, b, r1, c1, c2);
            } else {
                printf("Multiplication is not possible.\n");
            }
            break;

        case 3:
            transpose(a, r1, c1);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

void addition(int a[10][10], int b[10][10], int r, int c) {
    int i, j, sum[10][10];

    printf("Matrix Addition:\n");

    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplication(int a[10][10], int b[10][10],
                    int r1, int c1, int c2) {
    int i, j, k, product[10][10];

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;

            for (k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Matrix Multiplication:\n");

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

void transpose(int a[10][10], int r, int c) {
    int i, j;

    printf("Transpose of First Matrix:\n");

    for (i = 0; i < c; i++) {
        for (j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}
