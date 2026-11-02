#include<stdio.h>
#include<math.h>
int UCLN(int a, int b) {
		while (b != 0){
			int temp = b;
			b = a%b;
			a = temp;
		} return a;
	}
int main()
{
	int a, b;
	printf("Nhap 2 so nguyen duong a va b: ");
	scanf("%d %d", &a, &b);
	if(a<=0 || b<= 0) {
		printf("Vui long nhap 2 so nguyen duong!\n");
		return 0;
	}
	int BCNN = (a*b) / UCLN(a, b);
	printf("Boi chung nho nhat cua %d va %d la: %d\n", a, b, BCNN);
	return 0;
}
