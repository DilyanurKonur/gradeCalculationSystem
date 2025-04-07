# Öğrenci Not Hesaplama

Bu program, bir öğrencinin vize ve final notlarını alarak ortalama hesaplar ve geçip geçmediğini ekrana yazar.

## Özellikler

- Kullanıcıdan öğrenci adı, vize ve final notu alınır.
- Ortalama = vize * 0.4 + final * 0.6
- Ortalama 50 ve üzeriyse öğrenci geçer, değilse kalır.

## Nasıl Kullanılır?

1. Programı çalıştırın.
2. Öğrencinin adını, vize ve final notunu girin.
3. Sonuçlar ekrana yazdırılır.

## Derleme

Turbo C++ veya benzeri eski bir C++ derleyici kullanmalısınız.

### Not:
Modern derleyicilerde (`g++`, `clang++` gibi) çalışmayabilir çünkü `conio.h`, `clrscr()`, `gets()` gibi eski fonksiyonlar kullanılmıştır.

