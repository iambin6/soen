#include <stdio.h>
long long is_prime(long long n) {
    if (n <= 1) return 0;
    if (n % 2 == 0 && n > 2) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

	long long sum_prime_digits(long long a) {
    long long sum = 0;
    while (a > 0) {
        int digit = a % 10;
        if (is_prime(digit)) {
            sum += digit;
        }
        a /= 10;
    }
    return sum;
}

int main() {
    long long a;
    printf("Nhap vao mot so nguyen: ");
    scanf("%lld", &a);

    long long s = sum_prime_digits(a);
    printf("Tong cac chu so nguyen to trong %lld la %lld\n", a, s);

    return 0;
}