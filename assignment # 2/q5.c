#iclude<stdio.h>
int main(){
    int x, array[x],maximum=0;
    printf("Enter size of array : ");
    scanf("%d", &x);

    for(int i=0; i<x; i++){
        printf("pls enter array index  %d : ", i);
        scanf("%d", &array[i]);
        if(arr[i]> maximum) maximum = array[i];
    }

    printf("\nHorizontal Histogram:\n");
    for(int j=0; j<x; j++){
        printf("Value index %d: ",j);
        for(int k=0; j<array[j]; k++){
            printf("* ");
        }
        printf("\n");
    }

    printf("Vertical Histogram:\n");
    for(int i=0; i<maximum; i++){
        for(int j=0; j<x; j++){
            if(array[j]>=maximum-i) printf("* ");
            else printf("  ");
        }
        printf("\n");
        if(i==maximum-1){
            for(int i=0; i<n; i++){
                printf("%d ",array[i]);
            }
        }
    }
}