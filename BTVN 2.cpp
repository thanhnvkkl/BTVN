#include <stdio.h>

int main(){

	float CanNang, ChieuCao, bmi;
	// Nhập cân nặng chiều cao người dùng
	printf("nhap can nang(kg)");
	scanf ("%f",&CanNang);
	printf("nhap chieu cao(m)");
	scanf ("%f",&ChieuCao);
	
	// Tính chỉ số BMI
	float BMI= CanNang/(ChieuCao*ChieuCao);
	
	// Tình trạng cân nặng
    if (bmi < 18.5) {
        printf("Tình trạng cân nặng: Gầy\n");
    } else if (bmi < 24.9) {
        printf("Tình trạng cân nặng: Bình thường\n");
    } else if (bmi < 29.9) {
        printf("Tình trạng cân nặng: Thừa cân\n");
    } else {
        printf("Tình trạng cân nặng: Béo phì\n");
    }

	
	}
