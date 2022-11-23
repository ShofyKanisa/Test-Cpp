#include <iostream>
using namespace std;

int main()
{
    cout << "Inputan"<<endl;
    cout << "Masukan Angka Kehadiran= ";
    int angka1;
    cin >> angka1;
    
    cout << "Masukan Nilai Tugas= ";
    int nilai2;
    cin >> nilai2;
    
    cout << "Masukan Nilai UTS= ";
    int nilai3;
    cin >> nilai3;
    
    cout << "Masukan Nilai UAS= ";
    int nilai4;
    cin >> nilai4;
   
    int hasil;
        hasil = (angka1+nilai2+nilai3+nilai4)/4;
    cout << "Hasil Inputan= "<<hasil;
}
