#include <iostream>

using namespace std;

int main(){
    int size = 5;
    double arr[size];
    int sum = 0;
    cout << "Enter " << size << " el" << endl;
    for(int i = 0; i < size; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            sum += arr[i];
        }
        continue;
    }
    cout << "Sum = " << sum << endl;
    return 0;
}