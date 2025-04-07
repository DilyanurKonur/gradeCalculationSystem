include <iostream.h>
#include <conio.h>
#include <string.h>

class Ogrenci {
private:
    char isim[50];  // Öğrencinin adı
    double vize;    // Vize notu
    double final;   // Final notu

public:

	Ogrenci(const char* ad, double v, double f) {
        strcpy(isim, ad);  // Öğrencinin adını kopyalar
        vize = v;          // Vize notunu alır
        final = f;         // Final notunu alır
    }

    // Ortalama hesaplama fonksiyonu
    double ortalamaHesapla() {
        return (vize * 0.4) + (final * 0.6); // Vize %40, Final %60
    }

    // Öğrencinin geçip geçmediğini kontrol etme
	bool gectiMi() {
        return ortalamaHesapla() >= 50.0; // Ortalama 50 ve üstü ise geçti, yoksa kaldı
    }

    // Öğrencinin bilgilerini ekrana yazdırma
    void bilgiYazdir() {
        cout << "Öğrenci Adı: " << isim << endl;
		cout << "Vize Notu: " << vize << ", Final Notu: " << final << endl;
        cout << "Ortalama: " << ortalamaHesapla() << endl;
        if (gectiMi()) {
            cout << "Geçti" << endl;
        } else {
            cout << "Kaldı" << endl;
        }
	}
};

void main() {
    char isim[50];  // Öğrenci adı için değişken
    double vize, final;  // Vize ve final notları

	clrscr();

	// Öğrenci bilgilerini al
	cout << "Öğrencinin adını giriniz: ";
	gets(isim);
    cout << "Vize notunu giriniz: ";
	cin >> vize;  // Vize notunu al
	cout << "Final notunu giriniz: ";
    cin >> final;  // Final notunu al

	// Öğrenci nesnesi oluşturma
    Ogrenci ogrenci(isim, vize, final);

	// Öğrenci bilgilerini yazdır
	ogrenci.bilgiYazdir();

	getch();

	return;
}
