#include <iostream>

void removeDuplication(int[] , int);
int main() {
    int a[] = {1 ,1 , 2 , 2 , 3};
    int size = sizeof(a) / sizeof(int);
    std::cout << size << std::endl;
    removeDuplication(a , size);
}

void removeDuplication(int sorted_arr[] , int n ){
    int without_duplication[n] ;
    int k = 0;
    bool flag = true;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(without_duplication[j] == sorted_arr[i]){
                flag = false ;
            }
        }
        if(flag){
            without_duplication[k] = sorted_arr[i];
            k++;
        }
        flag = true;
    }
    std::cout << k << " : ";
    for(int i = 0 ; i < k; i++){
        std::cout << without_duplication[k] << " ,";
    }
    std::cout << std::endl;
}
