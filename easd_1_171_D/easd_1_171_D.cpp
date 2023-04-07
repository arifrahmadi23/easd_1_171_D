// 1. Mengapa algoritma dibutuhkan dalam menyelesaikan masalah, karena algoritma adalah rangkaian atau langka-langka yang sistematis untuk
//    meneyelesaikan sebuah masalah jadi dalam penerapan algoritma sendiri akan mempermudah pengguna dalam menyelesaikan sebuah masalah
//    karena suatu masalah dapat dibagi menjadi beberapa sub masalah dalam penyelesaiannya, jadi dapat mempermudah dan mempercepat penyelesaian.

// 2. Dalam algoritma terdapat 2 kategori dasar data struktur yaitu, Linear Data Structure dan Non-Linear Data Structure

// 3. Faktor yang mempengaruhi keefisienan suatu algoritma antara lain: penggunaan memory, kecepatan eksekusi (ukuran input,struktur data)
//	  kompleksitas algoritma, algoritma yang dipilih,dll.

// 4. Dari 6 algoritma yang sudah dipelajari algoritma yang paling effisien dalam pengurutan data dengan ukuran kecil adalah selection sort,
//    karena selection sort memiliki komplesitas waktu quardratic 0(n^2), dan merupakan pengurutan yang relatif lebih cepat dibanding bubble sort
//    dan insertion sort, sedangkan dengan merge sort dan quick sort termasuk kompleksitas waktu linear 0(n log n), dengan bentuk tersebut 
//    kedua program tidak terlalu berpengaruh signifikan terhadap data kecil, selain itu selection lebih sederhana dan lebih mmudah dalam penerapannya.

// 5. Dari algoritma yang sudah dipelajari yang termasuk quadratic adalah, Bubble sort,selection sort, insertion sort,
//    dan yang termasuk Loglinear adalah, Merge sort, quick sort. 

#include <iostream>
using namespace std;

const int JumlahData = 5;

void selectionSort(int arif[], int n) {
    for (int MR = 0; MR <= n - 2; MR++) {
        int min_index = MR;
        for (int i = MR + 1; i <= n - 1; i++) {
            if (arif[i] < arif[min_index]) {
                min_index = i;
            }
        }
        int temp = arif[MR];
        arif[MR] = arif[min_index];
        arif[min_index] = temp;
    }
}
void input(int arif[], int n) {
    cout << "Masukkan Panjang Data (<=91): ";
    cin >> n;

    cout << "Masukkan " << n << " data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> arif[i];
    }
}
