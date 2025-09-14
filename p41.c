//Write a program to swap the first and last digit of a number.
#include <stdio.h>

int main() {
    int num, original, temp, first, last, digits = 0, power = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    last = num % 10;
    printf("%d",num);
    temp = num;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;  // power will become 10^(digits - 1)
        digits++;
    }
    first = temp;
    num = original % power;
    num /= 10;
    int swapped = last * power + num * 10 + first;
    printf("Number after swapping first and last digits: %d\n", swapped);
    return 0;
}
