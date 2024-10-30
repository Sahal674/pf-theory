#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void stringsort(char str){
	int len;
	len = strlen(str);
	for(int i = 0; i < len ; i++){
		for(int j = 1 ; j < len ; j++){
			if(str[i] > str[j]){
				char temp = str[i];
				str[i] = str[j];
				str[j] = temp;
			}
		}
	}
}
void group(char trans[] , int size){
	int grouped[size];
	memset(grouped , 0 ,sizeof(grouped));
	for(int i = 0 ; i < size ; i++){
		if(grouped[i]) continue;
		printf("[");
		char sorted[strlen(trans[i]) + 1];
		stpcpy(sorted , trans[i]);
		stringsort(sorted);
		printf("%s",trans[i]);
		grouped[i] = 1;
		for(int j = i + 1 ; j < size : j++){
			if(grouped[j]) continue;
			char sorted2[strlen(trans[j])+1];
			strcmp(sorted2,trans[j]);
			stringsort(sorted2);
			if(strcmp(sorted ,sorted2) == 0){
				printf("%s",trans[j]);
				grouped = 1;
			}
		}
		printf("]\n")
	}
}
int main(){
	char trasactions[] = {"eat", "tea","tan","ate","nat","bat"};
	int size = sizeof(trasactions)/sizeof(trasactions[0]);
	group(trasactions , size);
	return 0;
}