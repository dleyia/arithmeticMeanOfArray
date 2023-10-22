#include <iostream>
using namespace std;

double hesaplaOrtalama(int* dizi, const int* eleman);
void ortalamadanBuyuk(int* dizi, const int elemanSayi, const double& average);


int main() {
	int elemanSayisi;
	cout << "Dizi buyuklugunu giriniz:";
	cin >> elemanSayisi;
	int* dizi = new int[elemanSayisi];

	for (int i = 0; i <= elemanSayisi - 1; i++) {
		cout << "Dizinin " << i + 1 << " .elemanini giriniz = ";
		cin >> dizi[i];
	}
	double ortalama = hesaplaOrtalama(dizi, &elemanSayisi);
	cout << "Dizinin aritmetik ortalamasi = " << ortalama;

	ortalamadanBuyuk(dizi, elemanSayisi, ortalama);

	delete[]dizi;
	return 0;

}
double hesaplaOrtalama(int* dizi, const int* elemanSayisi) {
	double toplam = 0.0;
	for (int i = 0; i < *elemanSayisi; i++) {
		toplam += dizi[i];
	}
	return toplam / (*elemanSayisi);
}


void ortalamadanBuyuk(int* dizi, const int elemanSayisi, const double& average) {
	cout << "\nOrtalamadan buyuk olan elemanlar = ";
	for (int i = 0; i < elemanSayisi; i++) {
		if (dizi[i] > average) {
			cout << dizi[i] << " ";
		}
	}

}

