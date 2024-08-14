#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int> vec, int target){
    for(int i=0;i<vec.size();i++){
        if(vec[i]>target){
            return vec[i];
        }
    }
    return -1;
}

    int main() {
        vector<int> vec = {5, 2, 9, 7, 4, 6};
        int target;

        cout << endl << "Cual es el valor de referencia?" << endl;
        cin >> target;

        int FirstGreater = linearSearch(vec,target);

        if(FirstGreater!=-1){
            cout << endl << "El primer numero en la lista que es mayor que " << target << " es " << FirstGreater << endl;
        } else{
            cout << endl << "Elemento no encontrado." << endl;
        }

        return 0;
    }
