#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int printArray(int arr[], int size, int index)
{
    if (index == size)
    {
        return -1;
    }
    cout << arr[index] << endl;
    printArray(arr, size, index + 1);
}
int SearchArray(int arr[], int size, int key, int index)
{
    if (index == size)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    return SearchArray(arr, size, key, index + 1);
}
int MaxArray(int arr[], int size, int index, int &Max)
{
    if (index == size)
    {
        return Max;
    }
    if (arr[index] > Max)
    {
        Max = arr[index];
    }
    return MaxArray(arr, size, index + 1, Max);
}
void minArray(int arr[], int size, int index, int &Min)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] < Min)
    {
        Min = arr[index];
    }

    minArray(arr, size, index + 1, Min);
}
void printOdd(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }
    if (arr[index] % 2 != 0)
    {
        cout << arr[index] << endl;
    }
    printOdd(arr, size, index + 1);
}

void printEven(int arr[], int size, int index, vector<int> &ans)
{
    if (index == size)
    {
        return;
    }
    if (!((arr[index]) & 1))
    {
        ans.push_back(arr[index]);
    }
    printEven(arr, size, index + 1, ans);
}
int binary_seacrh(int arr[], int start, int end, int target)
{
    if (start > end)
    {
        return -1;
    }
  int  mid = start + (end-start) / 2;
    if (arr[mid] == target)
    {
        return mid;
    }
   else if (arr[mid] > target)
    {
       return  binary_seacrh(arr, start, mid - 1, target);
    }else
    {

   return binary_seacrh(arr, mid + 1,end, target);
}
}
void numsToDigit(int num){
if(num==0){
    return;
}int digit=num%10;
numsToDigit(num/10);
cout<<digit<<',';

}
bool sortedArrayNot(int arr[], int size, int index)
{
    if(index==size-1){
    return true;
}
if(arr[index+1]>arr[index]){
    return true;
}

return sortedArrayNot(arr,size,index+1);

}
int main()
{
     int arr[] = {1, 15,6,9,33,44};
   int size = 6;
   int index=0;
 bool ans=  sortedArrayNot(arr,size,index);
 cout << "Answer (yes or no): " << (ans ? "yes" : "no") << endl;
//     // vector<int> ans;

//     // for (int i = 0; i < ans.size(); i++) {
//     //     cout << ans[i] << " ";
//     // }
//     // cout << endl;
   
    
//     int target = 33; 
//     int ans = binary_seacrh(arr, 0, size-1, target);
//    if (ans != -1)
//         cout << "Element found at index: " << ans << endl;
//     else
//         cout << "Element not found" << endl;
// numsToDigit(12345);
    return 0;
}
// int key = 160;
// int Min=INT32_MAX;
// minArray(arr, size, 0,Min);
// cout<<"Minimum value in the array: "<<Min<<endl;

// cout << "Odd numbers in the array:" << endl;
// printOdd(arr, size, 0);
// int arrayIndex = SearchArray(arr, size, key, 0);
// std::cout << "Index of " << key << " in the array: " << arrayIndex << std::endl;
