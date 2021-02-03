void printArray(long arr[], int arrLength);
void swap(long *a, long *b);
#include <stdio.h>

int main() {
    long array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = (long)(i + 10);
    }

    //swap(&array[0], &array[5]);

    //printArray(array, sizeof(array) / sizeof(array[0]));
    
    long *x;
    x = &array[3];;

    long y = *(x + 9);
    printf("%lx\n", y);
    y = *(x + 100);
    printf("%lx\n", y);
    y = *(x + 100000);
    printf("%lx\n", y);

    

    return 0;
}

void printArray(long arr[], int arrLength){
    for (int i = 0; i < arrLength; i++)
    {
        printf("%lu | %lx \n", arr[i] , arr[i]);
    }

    printf("-----------------------------------------------------------\n");
    long *x;
    x = &arr[3];
    printf("%lu\n", x);
    printf("%p\n", &x);      
}

void swap(long *a, long *b) {

    long *temp = *a;
    *a = *b;
    *b = temp;
}