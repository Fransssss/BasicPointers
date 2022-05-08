// Title : Basic pointers
// Purpose: output data from array using pointer arithmetic
// Author : Fransiskus Agapa
// Have fun- Enjoy the process - Practices make improvement

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
   int sizeArr = 0;
   int* ptr = nullptr;                              // set to null is a good practice
   cout << endl << "Set size of array: ";
   cin >> sizeArr;
   int numbers[sizeArr];
   ptr = numbers;                                    // points to the address of the 1st element in array
   cout << "Input " << sizeArr << " element/s in array:" << endl << endl;

   for(size_t i = 0; i < sizeArr; ++i)
   {
       cout << i+1 << "| ";
       cin >> numbers[i];
   }
   cout << endl;

   for(size_t i = 0; i < sizeArr; ++i)
   {
       cout << "[ \"At index\" " << i << " \"is\" " << *(ptr+i)  << " \"with address\" " << ptr+i << " ]"<< endl;
   }

}
