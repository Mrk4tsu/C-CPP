//Nhập vào 2 số nguyên dương a, b luôn thoả mãn là 2 cạnh của hình chữ nhật. 
//(không cần kiểm tra điều kiện). Điều kiện a, b<= 10^2
//Yêu cầu: in ra kết quả gồm 2 dòng:
//+dòng đầu in ra chu vi
//+ dòng thứ 2 in ra diện tích

#include <iostream>

using namespace std;
int main(){
	int w,h;
	cin >> w;
	cin>>h;
	int area = w * h;
	int perimeter = (w + h) * 2;
	cout << perimeter << endl;
	cout << area << endl;
	
	return 0;
}
