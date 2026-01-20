#include <stdio.h>

int main(void) {
 int numbers[] = {6, 7};
 int size = sizeof(numbers) / sizeof(numbers[0]);
 int sum = 0;

 for (int i = 0; i < size; i++) {
       sum += numbers[i];
    }

    printf("Sum: %d\n", sum);
    return 0;
}

