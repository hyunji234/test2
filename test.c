#include <stdio.h>

int main(void){
	int dan[9][9];
	int *pdan[9]={
		dan[0],dan[1],dan[2],dan[3],dan[4],dan[5],dan[6],dan[7],dan[8]};
	int i,j;

	for(i=1; i<9; i++){
		for(j=0; j<9; j++){
			*(pdan[i]+j)=(i+1)*(j+1);
			printf("%d * %d = %d\n",i+1, j+1, *(pdan[i]+j));
		}
		printf("\n\n");
	}
	return 0;
}
