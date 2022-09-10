#include <iostream>
using namespace std;
float toan, van, ngoai_ngu, dtb; //khai báo biến toàn cục 
// Lập hàm tính TB 
void Tinh_TB() {
	dtb = (toan * 3 + van * 2 + ngoai_ngu) / 6;
}
// Lập Hàm Xếp Loại 
void Xep_loai() {
	if (dtb >= 8 && (toan>6.5||van>6.5||ngoai_ngu>6.5)) {
		cout << "\n Diem trung Binh Cua Ban La: " << dtb;
		cout << "\n Gioi ";
	}
	else if (dtb >= 7 && dtb < 8 && (toan > 5 && van > 5 && ngoai_ngu > 5)) {
		cout << "\n Diem Trung Binh Cua Ban La: " << dtb;
		cout << "\n Kha ";
	}
	else if (dtb >= 5 && dtb < 7 && (toan > 3.5 && van > 3.5 && ngoai_ngu > 3.5)) {
		cout << "\n Diem Trung Binh Cua Ban La: " << dtb;
		cout << "\n Trung Binh ";
	}
	else {
		cout << "\n Diem Trung Binh Cua Ban La: " << dtb;
		cout << "\n Yeu ";
	}
}
void nhap() {
	do {
		cout << "\n Nhap Diem Toan: "; cin >> toan;
		cout << "\n Nhap Diem Van: "; cin >> van;
		cout << "\n Nhap Diem Ngoai Ngu: "; cin >> ngoai_ngu;
		if (toan < 0 || toan>10 || van < 0 || van>10 || ngoai_ngu < 0 || ngoai_ngu>10) {
			cout << "\n Nhap Sai Gia tri. Nhap Lai: ";
		}
	} while (toan < 0 || toan>10 || van < 0 || van>10 || ngoai_ngu < 0 || ngoai_ngu>10);
}
int main() {
	nhap();
	Tinh_TB();
	Xep_loai();
	return 0;
}