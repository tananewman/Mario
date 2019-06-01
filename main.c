#include <stdio.h>

int main() {

    int rows, hashes, spaces = 0;

    printf("Please enter the amount of columns you'd like for the Mario pyramid:");
    scanf("%d", &rows);


    for (spaces = rows -1, hashes = rows - spaces; hashes <= rows; spaces--, hashes++)
    {
        for (int i = 0; i < spaces; i++){
            printf(" ");
        }
        for (int i = 0; i < hashes; i++){
            printf("#");
        }
        printf("\n");
    }

    return 0;
}