#include <stdio.h>

void sorting(int result[],int size);
void print_arrays(int scores[],int result[],int size);

void sorting(int result[],int size){
    
    for (int i = 0;i < size ;i++){

        for(int e = size;e > i;e--){
            if(result[e] > result[e-1]){
                int s = result[e-1];
                result[e-1] = result[e];
                result[e] = s;
            }

        }
    }
}

void print_arrays(int scores[],int result[],int size){
    printf("scores = ");
    for(int i = 0;i < size;i++){
        printf("%d ",scores[i]);
    }
    printf("\n");

    printf("results = ");
    for(int i = 0;i < size;i++){
        printf("%d ",result[i]);
    }
    printf("\n");
}

int main(){
    /*const int SIZE = 5;                           
    int scores[SIZE] = {0, 60, 70, 100, 90};*/

    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    int result[SIZE];

    for(int i = 0;i < SIZE;i++){
        result[i] = scores[i];
    }

    sorting(result,SIZE);
    print_arrays(scores,result,SIZE);
    
    return 0;
}