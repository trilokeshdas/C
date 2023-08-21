#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter the number of rows: \n");
    
    // taking input for number of rows
    scanf("%d", &rows);
    
    // Outer loop to handle number of rows
    for (i = 1; i <= rows; i++)
    {
        // Inner loop to handle number of columns
        for (j = 1; j <= rows; j++)
        {
            if (j <= rows - i)
            {
                 // Printing spaces
                printf(" ");
            }
            else
            {
                 // Printing stars
                printf("*");
            }
        }
        // Ending line after each row
        printf("\n");
    }
    return 0;
}