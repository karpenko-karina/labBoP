#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string path = "taskSeven.txt";
    ifstream fin(path);
    int num;
    int res = 1;
    cout << "Nums: ";
    while(fin >> num){
        cout<< num << " ";
        if(num == 0)
            continue;
        else
            res*=num;
    }
    cout << endl;
    cout << "Result = " << res << endl;
    return 0;
}