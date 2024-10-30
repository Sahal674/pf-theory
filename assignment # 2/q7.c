
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>




void populateArray(char arr[r][c]) {
    for (int i = 0; i < r - 1; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = 'A' + (rand() % 26); 
        }
    }
    arr[r-1][0] = '0';
    arr[r-1][1] = '9';
    arr[r-1][2] = '9';
    arr[r-1][3] = '1';
    arr[r-1][4] = 'Q';
}


void printArray(char arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%c ", arr[i][j]);
        }
        printf("\n");
    }
}


int searchString(char arr[ROWS][COLS], char str) {
    int len = strlen(str);

  
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j <= COLS - len; j++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (arr[i][j + k] != str[k]) {
                    found = 0;
                    break;
                }
            }
            if (found == 1){
				return 1;
			}
				
        }
    }

 
    for (int i = 0; i <= ROWS - len; i++) {
        for (int j = 0; j < COLS; j++) {
            int found = 1;
            for (int k = 0; k < len; k++) {
                if (arr[i + k][j] != str[k]) {
                    found = 0;
                    break;
                }
            }
            if (found == 1){
				return 1;
			}
        }
    }
    return 0;
}

int main() {
    char arr[ROWS][COLS];
    char input[100];
    int score = 0;
	int n;

    
    srand(time(0));

    while (n != 1) {
        populateArray(arr);
        printf("\nGenerated Array:\n");
        printArray(arr);

      
        printf("\n pls enter the word to be searched (or 'END' to quit): ");
        scanf("%s", input);

     
        if (strcmp(input, "END") == 0) {
            n = 1;
        }

        if (searchString(arr, input)) {
            printf("word  found! +1 point\n");
            score = score + 1;
        } else {
            printf("word  not found. -1 point.\n");
            score = score - 1;
        }

        printf("Current Score: %d\n", score);
    }

    printf("ended. Final Score: %d\n", score);
    return 0;
}