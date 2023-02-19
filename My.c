#include <stdio.h>
int main(){
    int tracA=0,tracB=0,matA[100][100],matB[100][100],multi[100][100];
    int i,j,k,n;
    printf("Enter the Dimension Matrices :");
    scanf("%d",&n);
    printf("Enter Matrix A :\n");
    for(i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            scanf("%d",&matA[i][j]);
        }
        
    }
    printf("Enter Matrix B :\n");    
    for(i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            scanf("%d",&matB[i][j]);
        }
        
    }
    printf("Matrix A:\n");
    for(i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            printf("%d\t",matA[i][j]);
        }
        printf("\n");
    }printf("\n");
    printf("Matrix B:\n");
    for(i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            printf("%d\t",matB[i][j]);
        }
         printf("\n");
    }printf("\n");
    for(i=0;i<n;i++){
        for (int j=0;j<n;j++)
        {
            multi[i][j]=0;
            for (k=0;k<n;k++)
            {
                multi[i][j]+=matA[i][j]*matB[j][k];
            }
        }
        
    }
    printf("Multiplication of A and B :\n");
    for(i=0;i<n;i++){
        for (j=0;j<n;j++)
        {
            printf("%d\t",multi[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++){
        tracA+=matA[i][i];
    }
    for(i=0;i<n;i++){
        tracB+=matB[i][i];
    }
    printf("The Trace of Matrix A : %d\n",tracA);
    printf("The Trace of Matrix B : %d",tracB);
    return 0;
}