#include <stdio.h>
int reduce(char word[50]){
	char newword[50];
	int i , j , count , index;
	index = 0;
		if(word[i] == word[i + 1]){
			word[i] = '\0';
			count = count + 1;
		}
	
	for(j = 0 ; j<50 ; j++){
		if(word[j] != '\0'){
			newword[index] = word[j];
			index = index + 1;
			
		} 
		
	}
	
	printf("%s is the reduced word", newword);
	return count;
}
int main(){
	char userword[50];
	int num;
	printf("pls enter a word to reduce");
	scanf("%s",&userword);
	num = reduce(userword);
	printf("reduced words are  %d",num);
	return 0;
	
}