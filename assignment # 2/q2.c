#include<stdio.h>

void letcount(char str[][50], int n);
void freq(char str[][50], int n, int i, int j);

int main(){
    int n;
    printf("Enter number of slogans: ");
    scanf("%d", &n);
    char string[n][50];

    for(int i=0; i<n; i++){
        printf("Slogan %d: ", i+1);
        fgets(string[i], 50, stdin);
    }

    for(int i=0; i<n; i++){
        printf("\nFor %s", string[i]);
        letcount(string, i);
    }
}

void letcount(char string[][50], int n){
    int i, j;
    for(j=0; string[n][j]!='\0'; j++){
        if(string[n][j]==' '){
            i= j;
        }
    }
    j=j-i-2;
    freq(string, n, i, j);
    return;
}

void freq(char string[][50], int n, int a, int b){
    int s =a+b+1, fre[s];
    for(int i=0; i<s; i++){
        fre[i]=1;
    }
    for(int i=0; i<s; i++){
        for(int j=i+1; j<s; j++){
            if(string[n][i]==string[n][j]) fre[i]++;
            if(i<a && j<a) if(string[n][i]==string[n][j]) fre[i]--;
            if(i>b && j>b) if(string[n][i]==string[n][j]) fre[i]--;
            if(string[n][i]==string[n][j]) string[n][j]='0';
        }
        if(string[n][i]!='0') printf("'%c': %d", string[n][i], fre[i]);
    }
    return;
}