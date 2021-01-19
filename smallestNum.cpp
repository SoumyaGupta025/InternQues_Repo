#include <stdio.h>
#include <iostream>
#include <string.h>
 
int main(){
    int smallest, secondsmall;
    int array[100], size, i;
    printf("\n How many elements do you want to enter: ");
    scanf("%d", &size);
    printf("\nEnter %d elements: ", size);
    for (i = 0 ; i < size; i++)
        scanf("%d", &array[i]);
    if (array[0] < array[1]) {
        smallest = array[0];
        secondsmall = array[1];
    }
    else {
      smallest = array[1];
      secondsmall = array[0];
    }
    for (i = 2; i < size; i++) {
        if (array[i] < smallest) {
        secondsmall = smallest;
        smallest = array[i];
        }
        else if (array[i] < secondsmall) {
            secondsmall = array[i];
        }
    }
    printf(" \nSmallest element is %d", smallest);
    printf(" \nSecond smallest element is %d", secondsmall);
    return 0;
}