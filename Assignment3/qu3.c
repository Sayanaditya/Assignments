
#include <stdio.h>

int main()
{
    
    int row1=3, column1=3, row2=3, column2=3;
    int arr1[row1][column1];
    printf("Enter entries of matrix A (row by row):\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }  
    int arr2[row2][column2];

    printf("Enter entries of matrix B (row by row):\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("\n1. Enter 1 to add.\n2. Enter 2 to subtract.\n3. Enter 3 to multiply.\n");

    int n;

    printf("\nChoose operation: ");
    scanf("%d", &n);
    if (n == 1)
    {
        if ((row1 == row2) && (column1 == column2))              
        {
            int arr_sum[row1][column1];

            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < column1; j++)
                {
                    arr_sum[i][j] = arr1[i][j] + arr2[i][j];
                }
            }

            printf("\nMatrix A+B:\n\n");

            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < column1; j++)
                {
                     printf("%d\t ", arr_sum[i][j]);
                }
                printf("\n");
            }
         
        }
    }
    else if (n == 2)
    {
        if ((row1 == row2) && (column1 == column2))                       
        {
            int arr_diff[row1][column1];
            int res;

            printf("\nEnter -1 to subtract matrix A from B.\nEnter 0 to subtract matrix B from A. ");
            scanf("%d", &res);

            for (int i = 0; i < row1; i++)
            {
                for (int j = 0; j < column1; j++)
                {
                    if (res == -1)
                    {
                        arr_diff[i][j] = arr1[i][j] - arr2[i][j];
                    }
                    
                    else if (res == 0)
                    {
                        arr_diff[i][j] = arr2[i][j] - arr1[i][j];
                    }
                    
                }
            }
            if (res == -1)
            {
                printf("\nMatrix A-B:\n\n");

                for (int i = 0; i < row1; i++)
                {
                    for (int j = 0; j < column1; j++)
                    {
                        printf("%d\t ", arr_diff[i][j]);
                    }
                printf("\n");
                }
            }

            else if (res == 0)
            {
                printf("\nMatrix B-A:\n\n");

                for (int i = 0; i < row1; i++)
                {
                   for (int j = 0; j < column1; j++)
                   {
                       printf("%d\t ", arr_diff[i][j]);
                   }
                   printf("\n");
                }
            }
        }

        
    }

    // Matrix  Multiplication

    else if (n == 3)
    {
       
          int arr_product[row1][column2];
        
          for (int i = 0; i < row1; i++)
          {
            for (int j = 0; j < column2; j++)
            {
                int sum = 0;
                for (int t = 0; t < column1; t++)
                {
                    sum += arr1[i][t] * arr2[t][j];
                }
                arr_product[i][j] = sum;
            }
        }

          printf("\nMatrix AB:\n\n");

          for (int i = 0; i < row1; i++)
          {
              for (int j = 0; j < column2; j++)
              {
                  printf("%d\t ", arr_product[i][j]);
              }
              printf("\n");
          }
          printf("\n\n");
       }

       if (column2 == row1)
       {
           int arr_product[row2][column1];
        
           for (int i = 0; i < row2; i++)
           {
               for (int j = 0; j < column1; j++)
               {
                   int sum = 0;
                   for (int t = 0; t < column2; t++)
                   {
                      sum += arr2[i][t] * arr1[t][j];
                   }
                   arr_product[i][j] = sum;
               }
           }
           printf("\nMatrix BA:\n\n");

           for (int i = 0; i < row2; i++)
           {
              for (int j = 0; j < column1; j++)
              {
                  printf("%d\t ", arr_product[i][j]);
              }
              printf("\n");
           }

return 0;

}
}