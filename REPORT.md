## Assignment Klasifikasi Segitiga

### Deskripsi Program
Pada tugas ini, saya membuat program C++ untuk menentukan jenis suatu segitiga berdasarkan tiga koordinat yang diberikan dalam 3D. Program ini menggunakan dua class utama, yaitu Point2D dan Triangle.

Class Point2D digunakan untuk merepresentasikan sebuah koordinat dalam ruang dengan koordinat x, y, dan z. Sedangkan class Triangle digunakan untuk menyimpan tiga koordinat dan menentukan jenis segitiga yang terbentuk.

Jenis segitiga yang dapat dikenali oleh program ini adalah:
- Segitiga sama sisi
- Segitiga sama kaki
- Segitiga siku-siku
- Segitiga sembarang


### Cara Kerja Program
Program menerima input berupa sejumlah segitiga (N), kemudian untuk setiap segitiga dimasukkan tiga buah koordinat.

Setelah itu,
1. Program menghitung panjang setiap sisi menggunakan rumus jarak antar koordinat.
2. Berdasarkan panjang sisi tersebut, program menentukan jenis segitiga:
   - Jika semua sisi sama → **sama sisi**
   - Jika dua sisi sama → **sama kaki**
   - Jika memenuhi teorema Pythagoras → **siku-siku**
   - Selain itu → **sembarang**

Disini juga saya tambahkan toleransi (epsilon) untuk mencegah error perhitungan float.
### Implementasi
- Class Point2D memiliki fungsi untuk menghitung jarak antar koordinat.
- Class Triangle memiliki fungsi:
  - sideA(), sideB(), sideC() untuk menghitung panjang sisi
  - getType() untuk menentukan jenis segitiga

Struktur program dibuat modular dengan pemisahan file .hpp dan .cpp.



### Contoh Input dan Output

Input:
4
0 0 0
2 0 0
1 2 0
0 0 0
4 0 0
1 3 0
0 0 0
3 0 0
0 4 0
0 0 0
1 1 1
2 2 2

Output : 
sama kaki
sembarang
siku-siku
sembarang
