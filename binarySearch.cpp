#include<iostream>
using namespace std;



int binSearch(int *arr, int n, int ele){
    int s = 0;
    int e = n-1;
    while (s<=e)
    {
        int mid = (s+e)/2;
        cout<<"Element at mid " << mid << " is " << arr[mid]<<endl;
        if(arr[mid] == ele){
            return mid;
        }
        else if (arr[mid]<ele)
        {
            s = mid+1;
        }
        else if (arr[mid]>ele)
        {
            e = mid-1;
        }
        
    }
    return -1;
    
}

int main(){

    int arr[] = {11,23,32,67,88,97,122,433,654,678};
    int n = sizeof(arr)/sizeof(int);
    int ele;
    cout<<"Enter the element to be found"<<endl;
    cin>>ele;
    int index = binSearch(arr, n, ele);
    if(index != -1){
        cout<<"Element found at "<< index << endl;
    }
    return 0;
}
