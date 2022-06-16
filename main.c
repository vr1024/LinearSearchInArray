//
//  main.c
//  LinearSearchInArray
//
//  Created by Vibhaw on 12/05/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int array[20], find, i, size, occurance = 0;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    printf("Enter the elements: \n");
    for (i = 0; i<size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &find);

    for (i = 0; i<size; i++) {
        if (array[i] == find) {
            printf("%d is at location %d\n", find, i+1);
            occurance++;
        }
    }
    if (occurance == 0) {
        printf("Your value is not there in array");

    }else
        printf("Your element occured %d time\n", occurance);


    return 0;
}









