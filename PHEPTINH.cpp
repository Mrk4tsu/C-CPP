//Nhập vào ba số A, B, C. Sau đó in ra kết quả phép tính (A – B) x C

#include <iostream>

using namespace std;
int main(){
	int a, b, c;
	cin >> a; cin >> b; cin >> c;
	int result = (a-b) * c;
	cout << result;
	return 0;
}
