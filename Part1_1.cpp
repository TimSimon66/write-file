#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

int main() {
    ifstream iff;
    iff.open("E:\\HOCKI2LAPTRINH\\Bai_LAB5\\data.txt");
    if (!iff) {
        cout << "Loi doc file";
    }
	
    int arr[10];
    for (int i = 0; i < 10; i++) {
        iff >> arr[i];
    }

    sort(arr, arr + 10);

    ofstream offf;
    offf.open("E:\\HOCKI2LAPTRINH\\Bai_LAB5\\datax.txt");
    if (!offf) {
        cout << "Loi khong doc duoc file datasx.txt";
    }

    for (int i = 0; i < 10; i++) {
        offf << arr[i] << " ";
    }
    cout << "Doc file thanh cong";
    offf.close();

    return 0;
}

