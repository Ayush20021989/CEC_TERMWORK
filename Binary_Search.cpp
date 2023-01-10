//Binary Search Iterative approach
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

//Binary Search Recursive approach
#include<iostream>
using namespace std;
int Binary_Search(int arr[],int low,int high,int key)
{
    if(low>high)
        return -1;
    int mid=(low+high)/2;
    if(arr[mid]==key)
    return mid;
    else if(arr[mid]>key)
    {
        int ans=Binary_Search(arr,low,mid-1,key);
        return ans;
    }
    else
    {
    int ans=Binary_Search(arr,mid+1,high,key);
    return ans;
    }
    
    return -1;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int arr[n],low=0,high=n-1,key;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the key:";
    cin>>key;
    int ans=Binary_Search(arr,low,high,key);
    (ans!=-1)
    ?printf("Key found at %d position",ans)
    :printf("Key not found");
    return 0;
}
