#include<iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr = {31,55,87,56,27,34,76,21};
    int s = 0;
    int e = arr.size() - 1;
    while (s<e)
    {
        swap(arr[s], arr[e]);
        s+=1;
        e-=1;
    }
    for(int i =0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}