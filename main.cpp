#include <iostream>
using namespace std;

void countSort(int arr[], int size) { //parameter formal

  int max = arr[0];

  //Cari element terbesar dari array
  for (int i = 1; i < size; i++) {
    if (arr[i] > max)
      max = arr[i];
  }

  //mendeklarasikan variable dan array pembantu
    int maxSize = max + 1;
    int output[maxSize];
    int count[maxSize];

    arr[10] = {0,1,2,3,4,5,6,7,8,9}

  // inisialisasi array count dengan 0 semua
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  // menyimpan jumlah setiap element yang ada di array arr[]
  for (int i = 0; i < size; i++) {
    count[arr[i]]++;
  }

  // menyimpan jumlah kumulatif dari setiap array
  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }


  // Cari / menemukan index dari setiap element asli di array count[], dan tempatkan
  // element tersebut di array output[]
  for (int i = size - 1; i >= 0; i--) {
    output[count[arr[i]] - 1] = arr[i];
    count[arr[i]]--;
  }

  // mengcopy / menyalin element yang sudah diurutkan kedalam array asli / awal
  // array arr[]
  for (int i = 0; i < size; i++) {
    arr[i] = output[i];
  }
}

// Prosedur untuk menampilkan array
void tampilArray(int array[], int ukuran) {
    cout << "arr[" << ukuran << "] = {";
    for (int i = 0; i < ukuran; i++){
        cout << array[i];
        if(i < ukuran-1) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
}


int main() {
  //int array[] = {4, 2, 2, 8, 3, 3, 1};
  int a[] = {5,7,2,9,1,6};
   b[] = 0 1 1 0 0 1 1 1 0 1


    cout[] =    0 0 1 2 2 2 3 5 5 5 // sebagai index di hasil akhir


    b[]=    0 1 2 5 6 7 9 0 0 0 // nilai

    a[2] = 0
    b[2] = 2
    a[4] = b[4]
    a[2] ? 2

    a[] =   0 1 2 5 6 7 9
            0 1 2 3 4 5 6

  int n = sizeof(arr) / sizeof(arr[0]);
  cout << "Array yang belum diurutkan : ";
  tampilArray(arr,n);
  countSort(arr, n);//memanggil prosedur countSort untuk mengurutkan data
  cout << "Array yang sudah diurutkan : ";
  tampilArray(arr, n);
}
