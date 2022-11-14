#include<stdio.h>

int main(){

    int rows,colums,i,j;

    printf("Enter rows and colums: ");
    scanf("%d%d",&rows,&colums);

    int A[rows][colums];

    for(i=0; i<rows; i++){

        for(j=0; j<colums; j++){
                printf("A[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
        }
        printf("\n");
    }

    int min=A[0][0], max=A[0][0];

    for(i=0; i<rows; i++){

        for(j=0; j<colums; j++){

                if(A[i][j]>=max) max = A[i][j];
                if(A[i][j]<=min) min = A[i][j];
        }
    }

    printf("Min: %d , Max: %d",min,max);

}
