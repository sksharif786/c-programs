// if it is square matrix we get the output
#include <stdio.h>
#define MAX_ROW 20
#define MAX_COL 20

int main(){
	
	int a[MAX_ROW][MAX_COL],m,n;
	
	printf("Enter number of rows and columns: ");
	scanf("%d %d" , &m , &n);
	
	printf("Enter elements of matrix: ");
	
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			
			scanf("%d" , &a[i][j]);
		}
	}
	
	if(m==n){
		
		printf("Upper triangle elements: ");
		
		for(int i=0;i<m;i++){
			
			for(int j=0;j<n;j++){
				
				if(i<j){
				
					printf("%d " , a[i][j]);
									
				}
			}
		}
				
		printf("\nDiagonal elements: ");
		
		for(int i=0;i<m;i++){
			
			for(int j=0;j<n;j++){
				
				if(i==j){
				
					printf("%d " , a[i][j]);
									
				}
			}
		}
				
		printf("\nLower triangle elements: ");
		
		for(int i=0;i<m;i++){
			
			for(int j=0;j<n;j++){
				
				if(i>j){
				
					printf("%d " , a[i][j]);
									
				}
			}
		}	
		
	}
	else
		printf("This matrix is not square!!!");

	
	return 0;
}
