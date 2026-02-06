#include <stdio.h>
#include <math.h>

int main() {
    int N, temp, digit;
    int count = 0;
    long long sum = 0;

    scanf("%d", &N);

    temp = N;

    if (temp == 0) {
        count = 1;
    } else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    temp = N;


    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    if (N == 0)
        sum = 0;

    if (sum == N)
        printf("true");
    else
        printf("false");

    return 0;
}
