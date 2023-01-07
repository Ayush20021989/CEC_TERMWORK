//Binary Search
#include<iostream>
using namespace std;
int Binary_Search(int arr[],int low,int high,int key)
{
    int mid=0;
    do
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        return mid;
        else if(arr[mid]>key)
        high=mid-1;
        else
        low=mid+1;
    }while(low<high);
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int low=0,key;
    cout<<"Enter key value:";
    cin>>key;
    int ans=Binary_Search(arr,low,n,key);
    (ans!=-1)
    ? (printf("The Key is found at %d index",ans))
    : (printf("Key not found"));
    return 0;
}
