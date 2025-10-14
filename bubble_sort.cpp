#include <iostream>
using namespace std;


int*  bubbleSort(int list[], int size)
{
  int temp = 0;
  for (int i = 0 ; i < size - 1; i++   ){

    for (int j = 0 ; j < size - 1; j++ ){
   if (list[j] > list[j+1]) {

       temp = list[j];
    list[j] = list[j+1];
    list[j+1] = temp;}

   }

  }

  
  return list;

}


int main() {

    
int arr[] = {9,4,3,5,7,2,1,6,0};


    bubbleSort(arr, sizeof(arr)/ sizeof(arr[0]));
    
for (int i = 0 ; i < sizeof(arr)/ sizeof(arr[0]); i++){
    
    cout << arr[i] << " , " ;
}


}