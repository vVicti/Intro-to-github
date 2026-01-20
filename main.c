#include <stdio.h>

int main(void) {
 int numbers[] = {6, 7};
 int length = sizeof(numbers) / sizeof(numbers[0]);
 int sum = 0;

 for (int i = 0; i < length; i++) {
       sum += numbers[i];
    }

    printf("Sum: %d\n", sum);
    return 0;
}

