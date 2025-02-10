#include <iostream>
using namespace std;


int main() {
    std::cout << "PEMBUATAN NAMETAG SANTRI" << std::endl;
    cout << "=================================\n";
    cout << "Masukan Nama Santri : ";
    std::string nama;
    std::cin >> nama;"\n";
    std::cout << "Masukan Kelas \t : ";
    int kelas;
    std::cin >> kelas;"\n";
    std::string pita;

    cout << "Masukan Nama Konsulat :";
    std::string konsulat;
    std::cin >> konsulat;"\n";

    cout << "NAMETAGE SANTRI  \n";
    std::cout << "Nama Santri \t : "<< nama << "\n";
    cout << "Kelas \t\t : " << kelas << "\n";
    cout << "Warna Pita \t : " ;
    switch (kelas) {
        case 7:
            cout << "Pita Warna Hijau \n";
        break;
        case 8:
            cout << "Pita Warna Biru \n";
        break;
        case 9:
            cout << "Pita Warna Hitam \n";
        break;
        default:
            cout << "Kelas Santri Tdak Ditemukan \n";
    }
    cout << "Konsulat \t : " << konsulat << "\n";

    return 0;
}
