#include <iostream>
using namespace std;

int main()
{
    cout << "Rumus Simple"<<endl;
    cout << "Masukan Nilai UTS= ";
    int nilai1;
    cin >> nilai1;
    
    cout << "Masukan Nilai UAS= ";
    int nilai2;
    cin >> nilai2;
    
    int hasil;
        hasil = (nilai1 + nilai2) / 2;
    cout << "Hasil Rumus= "<<hasil;
}
