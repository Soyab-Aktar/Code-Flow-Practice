#include<iostream>
#include<vector>
using namespace std;

void missingarr(vector<int>&arr , int size)
{
    int sum =0;
    for(int i=0;i<size;i++)
    {
        sum +=arr[i];
    }

    int totalsum = (size/2)*(size+1);
    int missingElement = totalsum - sum ;

    cout<<"Missing element is : "<<missingElement;
}
int main()
{
    vector<int>arr{1,2,3,4,5,7,8,9};
    int size =arr.size();

    missingarr(arr,size);

    return 0;
}