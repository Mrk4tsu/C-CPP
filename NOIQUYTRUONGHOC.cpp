//Theo quy định của nhà trường, mỗi trường hợp không đeo thẻ học sinh sẽ bị trừ a điểm thi đua của lớp, mỗi trường hợp nói chuyện trong lớp bị trừ b điểm thi đua và mỗi trường hợp đi học muộn bị trừ c điểm. Sổ đầu bài ghi nhận trong tháng có t trường hợp không đeo thẻ, n trường hợp nói chuyện riêng,  và m trường hợp đi học muộn.
//Hãy nhập các giá trị a, b, c, t, n, m từ bàn phím và tính tổng điểm bị trừ thi đua trong tháng đó.

#include <iostream>

using namespace std;
int main(){
	int a, b, c, t, n, m;
	//Tru a diem
	cin >> a;
	//Tru b diem
	cin >> b;
	//Tru c diem
	cin >> c;
	//t truong hop khong deo the
	cin >> t;
	//n truong hop noi chuyen
	cin >> n;
	//m truong hop di hoc muon
	cin >> m;
	
	int khong_deo_the = a * t;
	int noi_chuyen = b * n;
	int di_hoc_muon = c * m;
	int tong = khong_deo_the + noi_chuyen + di_hoc_muon;
	
	cout << tong << endl;
	return 0;
}
