//Insertion sort
#include<iostream>
using namespace std;
void print(int arr[],int n)
{
    cout<<"The sorted array is:\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

void Insertion_sort(int arr[],int n)
{
    int i,j,key;
    for(i=1;i<n;i++)
    {
        j=i-1;
        key=arr[i];
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    print(arr,n);
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:\n";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    Insertion_sort(arr,n);
    return 0;
}
