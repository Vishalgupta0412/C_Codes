#include <stdio.h>
#include<math.h>

int reverse(int n) {
    // Base case: If n is a single digit number, return it as is
    if (n < 10) {
        return n;
    } else {
        int lastDigit = n % 10;                // Get the last digit
        int remainingDigits = n / 10;          // Get the remaining digits
        int reversed = reverse(remainingDigits); // Recursively reverse the remaining digits
        int numDigits = snprintf(NULL, 0, "%d", n); // Calculate the number of digits in n
        return lastDigit * pow(10, numDigits - 1) + reversed;
    }
}

int main() {
    int num = 12345;
    int reversed = reverse(num);

    printf("Original number: %d\n", num);
    printf("Reversed number: %d\n", reversed);

    return 0;
}