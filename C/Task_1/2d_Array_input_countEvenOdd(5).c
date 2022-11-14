
#include<stdio.h>

int main(){

    int rows,colums,i,j,even=0,odd=0;

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


    for(i=0; i<rows; i++){

        for(j=0; j<colums; j++){
                if(A[i][j]%2==0) even++;
                else odd++;
        }
    }

    printf("Even: %d , Odd: %d",even,odd);

}
