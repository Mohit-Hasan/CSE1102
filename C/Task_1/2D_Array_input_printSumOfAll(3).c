#include<stdio.h>

int main(){

    int rows,colums,i,j,sum=0;

    printf("Enter rows and colums: ");
    scanf("%d%d",&rows,&colums);

    int A[rows][colums];

    for(i=0; i<rows; i++){

        for(j=0; j<colums; j++){
                printf("A[%d][%d]: ",i,j);
                scanf("%d",&A[i][j]);
                //we can also use this here
                //sum += A[i][j];
        }
        printf("\n");
    }

    for(i=0; i<rows; i++){
        for(j=0; j<colums; j++){
            sum +=A[i][j];
        }
    }

    printf("Sum: %d",sum);

}
