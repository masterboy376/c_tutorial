#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("-----program starts from here-----\n");

    int m1r, m1c, m2r, m2c, sum = 0;
    printf("please enter the number of rows in first matrix\n");
    scanf("%d", &m1r);
    printf("please enter the number of columns in first matrix\n");
    scanf("%d", &m1c);
    printf("please enter the number of rows in second matrix\n");
    scanf("%d", &m2r);
    printf("please enter the number of columns in second matrix\n");
    scanf("%d", &m2c);

    if (m1c == m2r)
    {

        // matrix 1
        int(*m1)[m1r][m1c] = malloc(sizeof *m1);
        printf("Enter matrix 1\n");
        for (int i = 0; i < m1r; i++)
        {
            for (int j = 0; j < m1c; j++)
            {
                scanf("%d", &(*m1)[i][j]);
            }
        }
        // matrix 2
        int(*m2)[m2r][m2c] = malloc(sizeof *m2);
        printf("Enter matrix 2\n");
        for (int i = 0; i < m2r; i++)
        {
            for (int j = 0; j < m2c; j++)
            {
                scanf("%d", &(*m2)[i][j]);
            }
        }
        // matrix 3 (resultant matrix)
        int(*m3)[m1r][m2c] = calloc(1, sizeof *m3);
        printf("resultant matrix\n");
        for (int i = 0; (i < m1r); i++)
        {
            for (int j = 0; j < m2r; j++)
            {
                for (int a = 0; a < m1c; a++)
                {
                    sum += ((*m1)[i][a] * (*m2)[a][j]);
                }
                (*m3)[i][j]=sum;
                sum=0;
            }
        }

        // free up
        free(m1);
        m1 = NULL;
        free(m2);
        m2 = NULL;

        // printing result
        for (int i = 0; i < m1r; i++)
        {
            for (int j = 0; j < m2c; j++)
            {
                printf("%d ", (*m3)[i][j]);
            }
            printf("\n");
        }

        // free up
        free(m3);
        m3 = NULL;
    }
    else
    {
        printf("the multiplication can not be performed\n");
    }

    printf("-----program ends here-----\n");
    return 0;
}