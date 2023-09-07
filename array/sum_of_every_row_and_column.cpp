#include <stdio.h>  

int main()  
{  
    int rows, cols, sumRow, sumCol;  
    printf("Enter number of rows and columns: ");
    scanf("%d%d",&rows,&cols);
    int a[rows][cols];
	printf("Enter elements of matrix:\n");
    for(int i = 0; i < rows; i++){    
        for(int j = 0; j < cols; j++){
        	scanf("%d",&a[i][j]);
        }
		}  
      
    for(int i = 0; i < rows; i++){  
        sumRow = 0;  
        for(int j = 0; j < cols; j++){  
          sumRow = sumRow + a[i][j];  
        }  
        printf("Sum of %d row: %d\n", (i+1), sumRow);  
    }  
      
    for(int i = 0; i < cols; i++){  
        sumCol = 0;  
        for(int j = 0; j < rows; j++){  
          sumCol = sumCol + a[j][i];
        }  
        printf("Sum of %d column: %d\n", (i+1), sumCol);  
    }  
          
    return 0;  
}  
