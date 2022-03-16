#include<iostream>
#include<math.h>

int exponent(int &x, int &y){
	return pow(x, y);
}

int main(){
	int a, n, x, y;
	std::cout << "Nhap: "; std::cin >> a >> n;
	std::cout << "Ket qua: " << exponent(a, n) << "\n";
	return 0;
}
