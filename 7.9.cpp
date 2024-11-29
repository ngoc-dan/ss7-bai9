#include<stdio.h>
int main(){
	// Khai bao va nhap gia tri cho bien cot va hang
	int n,row,col;
	printf("nhap so cot : ");
	scanf("%d",&row);
	printf("nhap so hang : ");
	scanf("%d",&col);
	//Khai bao mang arr[row][col]
	int arr[row][col];
	// Nhap tung phan tu cho mang 
	for( int i=0 ; i<row ; i++){
		printf("\n");
		for(int j=0 ; j<col ; j++){
			printf("nhap phan tu [%d] [%d]: ",i,j);
			scanf("%d",&n);
			arr[i][j]=n;
		}
	}
	// In ket qua duong bien cua mang 2 chieu 
	for( int i=0 ; i<row ; i++){
		printf("\n");
		for(int j=0 ; j<col ; j++){
			if(i==0 || j==0||i+1==row || j+1==col){			
	      		printf("%d ",arr[i][j]);
			} else{
				printf("  ");
			}
		  
		}
	}
	return 0;
}
