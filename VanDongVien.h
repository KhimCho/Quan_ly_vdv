#pragma once
class vdv {
private:
	int age;
	string name, sport;
	double weight, height;
public:
	vdv() {
		name = sport = "No name";
		age = 0;
		weight = height = 0;
	}
	vdv(string _name, string _sport, int _age, double _height, double _weight) :
		name(_name), sport(_sport), age(_age), height(_height), weight(_weight) {};
	~vdv() {
		name = sport = " ";
		age = 0;
		height = weight = 0;
	}
	friend istream& operator>>(istream &is, vdv &obj);
	friend ostream& operator<<(ostream &os, vdv obj);
	bool operator>(vdv obj);
};