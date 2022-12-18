#include <stdio.h>

main()
{
    int a[' '][' ']; //any size array declaration
    int i, j, n, flag;

    printf("Enter order of the matrix:");
    scanf("%d", &n);
    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    flag = 1; //assume matrix is identity

    //checking matrix
    for (i = 0; i < n && flag; i++)
    {
        for (j = 0; j < n && flag; j++)
        {
            if (i == j)
            {
                //check for diagonal elements
                if (a[i][j] != 1)
                    flag = 0;
            }
            else
            { //check for non-diagonal elements
                if (a[i][j] != 0)
                    flag = 0;
            }
        }
    }
    //printing matrix for user verification
    printf("Entered matrix elements:\n");

    for (i = 0; i < n && flag; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
    if (flag)
        printf("=====Identity Matrix \n");
    else
        printf("=====Not an Identity Matrix \n");
}
//end of program