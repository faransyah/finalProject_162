#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	virtual void cekUkuran() { return; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
	/*lengkapi disini*/
	
};

class Lingkaran :public bidangDatar { 
public:
	void input() {
		cout << "Lingkaran dibuat" << endl;

		int r; setX();
		cout << "Masukkan jejari: " << endl;
		cin >> r; 
		
	}
	float luas(int a) {
		int r;  int setX();
		return 3, 14 * r * r;
	}
	float keliling() {
		int r; int setX();
		return 2 * 3, 14 * r;
	}

};

class Persegipanjang :public bidangDatar { 
public:
	void input() {
		cout << "Persegi panjang dibuat" << endl;

		int p; int setX();
		int l; int setX();
		cout << "Masukkan panjang: " << endl;
		cin >> p; 
		cout << "Masukkan lebar: " << endl;
		cin >> l;
	}
	float luas() {
		int p;
		int l;
		return p * l;
	}
	float keliling() {
		int p;
		int l;
		return 2 * (p + l);
	}
};

int main() { 	Lingkaran L;	L.input();	cout << "Luas lingkaran= " << endl;	cout << "Keliling lingkaran= " << endl;	Persegipanjang P;	P.input();	cout << "Luas persegi panjang= " << endl;	cout << "Keliling persegi panjang= " << endl; }