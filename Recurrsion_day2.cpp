 #include <iostream>
using namespace std;
int printArray(int arr[],int size,int index){
    if(index ==size){
        return -1;
    }
    cout<<arr[index]<<endl;
    printArray(arr,size,index+1);
}


int SearchArray(int arr[], int size, int key, int index) {
    if (index == size) {
        return -1;
    }
    if (arr[index] == key) {
        return index;
    }
    return SearchArray(arr, size, key, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int key = 60;
    int arrayIndex = SearchArray(arr, size, key, 0);
    std::cout << "Index of " << key << " in the array: " << arrayIndex << std::endl;
    return 0;
}
