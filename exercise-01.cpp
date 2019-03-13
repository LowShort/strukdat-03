/**
* Author : Muhammad Iqbal Alif Fadilla
* NPM : 140810180020
* Kelas : B
* Deskripsi : Operasi hitung dengan pointer
* Tgl : 13 03 2019
*/
#include<iostream>
#include<math.h>
using namespace std;

typedef struct {
	float panjang;
	float lebar;
} segiempat;

void input(segiempat *s) {
	cout << "Masukkan panjang : "; cin >> s->panjang;
	cout << "Masukkan lebar : "; cin >> s->lebar;
}
float keliling(segiempat s) {
	float keliling;
	keliling = (2 * s.panjang) + (2 * s.lebar);
	return keliling;
}
float luas(segiempat s) {
	float luas;
	luas = s.panjang * s.lebar;
	return luas;
}
// panjang diagonal segiempat
float diagonal(segiempat s) {
	float d;
	d = sqrt((s.panjang*s.panjang) + (s.lebar*s.lebar));
	return d;
}
void print(segiempat s) {
	cout << "\nPanjang\t\t: " << s.panjang << endl;
	cout << "Lebar\t\t: " << s.lebar << endl;
	cout << "Keliling\t: " << keliling(s) << endl;
	cout << "Luas\t\t: " << luas(s) << endl;
	cout << "Diagonal\t: " << diagonal(s) << endl;
}

int main() {
	segiempat* sg;
	sg = new segiempat;
	input(sg);
	print(*sg);

		return 0;
}
