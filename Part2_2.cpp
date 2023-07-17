#include<iostream>
using namespace std;

class IntArr{
  private:
    int *contro; 
    int size; 
  
  public:
    IntArr()
    {
        contro = NULL;
        size = 0;
    }

    IntArr(int s)
    {
        size = s;
        contro = new int[size];
        for(int i=0; i<size; i++)
        {
            contro[i] = 0;
        }
    }

    IntArr(const IntArr &ia)
    {
        size = ia.size;
        contro = new int[size];
        for(int i=0; i<size; i++)
        {
            contro[i] = ia.contro[i];
        }
    }

    void HienThi()
    {
        cout << "Mang phan tu la :  ";
        for(int i=0; i<size; i++)
        {
            cout << contro[i] << " ";
        }
        cout << endl;
    }

    int search(int element)
    {
        for(int i=0; i<size; i++)
        {
            if(contro[i] == element)
            {
                return i;
            }
        }
        return -1;
    }
  
    ~IntArr()
    {
        delete [] contro;
    }
};

int main()
{
    IntArr arr1(5);

    for(int i=0; i<5; i++)
    {
        arr1 = i+1;
    }

    IntArr arr2(arr1); 

    arr1.HienThi(); 
    arr2.HienThi();

    int vitri = arr1.search(3);
    if(vitri == -1)
    {
        cout << "Phan tu khong ton tai" << endl;
    }
    else
    {
        cout << "Phan tu da duoc tim thay o vi tri " << vitri << endl;
    }

    return 0;
}
