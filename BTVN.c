#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    printf("Nhập vào 3 số nguyên: ");
    scanf("%d %d %d", &a, &b, &c);

    int Max;
    Max = a;

    // Tính chu vi tam giác
    int chu_vi = a + b + c;
    printf("Chu vi tam giác: %d\n", chu_vi);

    // Tính diện tích tam giác theo công thức Heron
    float p = chu_vi / 2;
    float dien_tich = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Diện tích tam giác: %f\n", dien_tich);

    // Kiểm tra điều kiện tam giác hợp lệ
    if (b + c > Max && a + c > b && a + b > c) {
        printf("Tam giác hợp lệ.\n");
    } else {
        printf("Tam giác không hợp lệ.\n");
    }

    return 0;
}
