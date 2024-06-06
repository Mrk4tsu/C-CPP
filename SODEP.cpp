#include<iostream>
using namespace std;

//Tinh do dai cua so nhap vao
int doDaiSoNguyen(int n){
	int count = 0;
	int temp = n;
	while(temp != 0){
		temp /= 10;
		count ++;
	}
	return count;
}
int main(){
	long long n;

	cin >> n;
	int size = doDaiSoNguyen(n);

	for(int i = 0; i < size; i++){
		long long temp= n % 10;
		
		if(temp != 8 && temp != 6){
			cout << "NO"<<endl;
			return 0;
		}	
		n/=10;
		size--;
	}
	cout << "YES"<<endl;
	return 0;
}
