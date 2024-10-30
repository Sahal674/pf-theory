#include<stdio.h>
int toowin(int num){
	int value;
	if(num%5 == 0){
		value = -1;
	}
	else{value = num%5;}
	return value;
}
int main(){
	int num , result;
	printf("enter the number of match stiks");
	scanf("%d",&num);
	result = toowin(num);
	if(result == -1 ){
		printf("can not win");
	}
	else{printf("playes a needs %d match sticks to win", result );}
	return 0 ;
}