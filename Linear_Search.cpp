//Linear Search
#include<iostream>
using namespace std;
int Linear_Search(int arr[],int n,int key)
{
    if(n==0)
    return -1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
int main()
{
    int n,key;
    cout<<"Enter the number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the key:";
    cin>>key;
    int ans=Linear_Search(arr,n,key);
    (ans!=-1)?printf("Elements found at index:%d",ans):printf("Element not Found");
    return 0;
}
