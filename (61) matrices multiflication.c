#include<stdio.h>


	

int main(){
	int ma,na,mb,nb;
	printf(" how many rows are there is matrix a:");
	scanf("%d",&ma);
	printf("how many columns are there is matrix a:");
	scanf("%d",&na);
	printf(" how many rows are there is matrix b:");
	scanf("%d",&mb);
	printf("how many columns are there is matrix b:");
	scanf("%d",&nb);
	int arra [ma] [na];
	int arrb[mb] [nb];
	
	if(na == mb){
	for(int i=0;i<ma;i++){
		for(int j=0;j<na;j++){
			printf("enter row:%d column:%d",i+1,j+1);
			scanf("%d",&arra[i][j]);
		}
	}
	
	for(int i=0;i<mb;i++){
		for(int j=0;j<nb;j++){
			printf("enter row:%d column:%d",i+1,j+1);
			scanf("%d",&arrb[i][j]);
		}
	}
	
	/* calculation
	int arrc[ma][nb];
		
		for(int a=0;a<ma;a++){
			for(int b=0;b<nb;b++){
				for(int k=0;k<mb;k++){
				arrc[a][b]=(arra[a][k]*arrb[k][b]);
				}
			}
		} */
		
		// calculation
		int arrc[ma][nb];
for(int a = 0; a < ma; a++) {
    for(int b = 0; b < nb; b++) {

        arrc[a][b] = 0;  // important: initialize

        for(int k = 0; k < mb; k++) {
            arrc[a][b] += arra[a][k] * arrb[k][b];
        }

    }
}
printf(" the multiflication matrix of a and b is \n");
for(int p=0;p<ma;p++){
	printf("\n");
	for(int q=0;q<nb;q++){
		printf("%d  ",arrc[p][q]);
	}
}
	}
	else {
		printf("the multiflication is not possible ");
	}
	return 0;
}