#include<stdio.h>
int main(){
	
	int array[5];
	int num , i , j , k , temp , second;
	i = 0;
	while (i <= 4){
		printf("pls enter array index %d \n",i);
		scanf("%d",&num);
		if (num <9999){
			array[i] = num;
			i = i + 1;
		}
		else{printf("enetr value again \n");}
	}
	for(j = 0 ; j < 6 ; j++){
		for(k = 0 ; k < 5 ; k++){
			if (array[k] > array[k + 1]){
				temp = array[k];
				array[k] = array[k + 1];
				array[k + 1] = temp;
			}
		}
	}
	second = array[1];
	printf("second smallest number is : %d",second);
	

	
}



