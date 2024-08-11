#include <iostream>

using namespace std;

int main() {
    int arr[7] = {1, 3, 8, 1, 6, 5, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int master = 0, index = 0, iteration = 0 ,temp = 0 , stop = 0;
    int all_master[index]; 

    for (int i = 0; i < size; i++) {
        for (int j = iteration; j < size; j++) {
            if (j + 1 < size && arr[j] > arr[j + 1]) {
                if (master == 0) {
                    master = arr[j];
                    temp = j;
                } else if (master < arr[j]) {
                    master = arr[j];
                    temp = j;
                }
            }
            else if( iteration +1 == size){
            	all_master[index] = arr[j];
                index++;
                stop =1 ;
        }
    }
         if (master !=0) {
                all_master[index] = master;
                index++;
                master = 0;
                iteration =temp+1;  
                temp =0;
            }
            else if( stop == 1){
            	break;
			}
    }

    cout << "All master elements: ";
    for (int i = 0; i < index; i++) {
        cout << all_master[i] << " ";
    }
    cout << endl;

    return 0;
}

