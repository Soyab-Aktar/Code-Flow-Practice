#include<iostream>
#include<vector>
using namespace std;

void separr(vector<int>&arr , int size)
{
    int j=0;
    for(int index =0;index<size;index++)
    {
        if(arr[index]<0)
        {
            swap(arr[index],arr[j]);
            j++;
        }

    }

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    vector<int>arr{10,-80,60,74,-89,-69,88,-77};
    int size =arr.size();

    separr(arr,size);

    return 0;
}