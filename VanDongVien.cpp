#include "VanDongVien.h"
#include <string>
istream &operator>>(istream &is, vdv& obj) {

	cout << "Nhap ho va ten: "; fflush(stdin); getline(is, obj.name);
	cout << "Nhap mon thi dau: "; fflush(stdin); getline(is, obj.sport);
	cout << "Nhap tuoi: "; is >> obj.age;
	cout << "Nhap chieu cao: "; is >> obj.height;
	cout << "Nhap can nang: "; is >> obj.weight;
	return is;
}
ostream &operator<< (ostream & os, vdv obj) {
	os << "Ho va ten: " << obj.name << endl;
	os << "Mon thi dau: " << obj.sport << endl;
	os << "Tuoi: " << obj.age << endl;
	os << "Chieu cao: " << obj.height << endl;
	os << "Can nang: " << obj.weight << endl;
	return os;
}
bool vdv::operator>(vdv obj) {
	if (height > obj.height) return true;
	else if (height < obj.height) return false;
	else if (weight >= obj.weight) return true;
	else return false;
}
void swap(vdv &o1, vdv &o2) {
	vdv temp = o1;
	o1 = o2;
	o2 = temp;
}
void bubblesort(vdv *a, int n) {
	for (int i = 0; i < n - 1; i++)
		for (int j = 1; j < n; j++) {
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
}

