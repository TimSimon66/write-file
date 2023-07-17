#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

struct sinhvien
{
	string HoTen;
	string Phai;
	float Diem;
	string KetQua;
};

int main(){
	int n;
	string hoten, phai, ketqua;
	float diem;
	
	vector <sinhvien> dsSinhVien;
	
	sinhvien SinhVien;
	cout << "Nhap vo so luong sinh vien : ";
	cin >> n;
	for(int i = 0; i < n; i++){
	cout << "Nhap thanh vien thu " << i + 1 << endl;
	cin.ignore();
	
	cout << "Ho ten : ";
	getline(cin, hoten);
	SinhVien.HoTen = hoten;
	
	cout << "Phai : ";
	getline(cin, hoten);
	SinhVien.Phai = phai;
	
	cout << "Diem : ";
	cin >> diem;
	SinhVien.Diem = diem;
	
	SinhVien.KetQua = (diem >= 5) ? "Dau" : "rot";
	
	dsSinhVien.push_back(SinhVien);
	
	}
	
	ofstream fo("E:\\HOCKI2LAPTRINH\\Bai_LAB5\\lop.txt");
	if(fo == NULL){
		cout << "Ghi file bi loi";
	}
	
	
	fo << "HoTen \t\tPhai \tDiem \tKetQua" << endl;
	for(int i = 0; i < dsSinhVien.size(); i++){
//	fo << endl;
	fo << dsSinhVien[i].HoTen << "\t";
	fo << dsSinhVien[i].Phai << "\t";
	fo << dsSinhVien[i].Diem << "\t";
	fo << dsSinhVien[i].KetQua << "\n";
	}
	
	cout << "Da ghi file thanh cong";
	
	fo.close();
	
	
	return 1;
	
}
