/* 
** declaration:

    data_type array_name[row_size][column_size]

    ex: int A[3][4]     
    here number of elements = row*column = 3*4 = 12


** initialization:

    int A[3][4] = {
                    {5,6,7,8}
                    {15,16,17,18}
                    {25,26,27,28}
                   }


** printing:

        *1d array er moto 2 ta loop use korte hobe
        for(i=0; i<no_row; i++)
        {
            for(j=0; j<no_column; j++)
            {
                printf("%d", A[i][j]);
            }
            printf("\n");
        }


** getting input:

        for(i=0; i<no_row; i++)
        {
            for(j=0; j<no_column; j++)
            {
                scanf("%d", &A[i][j]);
            }
            printf("\n");
        }




*/