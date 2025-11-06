/*
Name: Tumaini Murimi 
Reg no: CT100/G/26252/25
Description:Array in structure 
*/

#include <stdio.h>

int main() {
    // i. Define an array data structure
    // Array - it is a fixed-size collection of similar data items stored in contiguous memory locations.

    // ii. Declare and initialize a 2D array named scores
    int scores[2][2][2] = {
        {{65, 92}, {84, 72}},
        {{35, 70}, {59, 67}}
    };

    // iii. Print the elements of the above array using nested for loop
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d\t", scores[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
