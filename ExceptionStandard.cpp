#include <iostream>
#include <exception>
#include <array>
//untuk obyek exception yang akan digunakan
//untuk obyek array yang akan kita gunakan
using  namespace std;

int main()
{
    cout << "Awal Program " << endl; //penanda 1:...
    try {
        array<int, 3> data = { 8, 4, 2};
        //pesan array integer 3 elemen
        cout << data.at(5)<< endl;
    }
    catch (excecption& e) {
        //penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna aray data hanya memiliki 3 elemen*/
    }
    

}