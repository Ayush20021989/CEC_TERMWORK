#include <bits/stdc++.h>
using namespace std;
 
vector<int> countingSort(vector<int> vec, int n)
{
    for (int i = 0; i<n; cin>> vec[i], i++)
        ;
    map<int, int> count;
    for (int i = 0; i < n; count[i] = 0, i++)
        ;
    for (int i = 0; i < n; count[vec[i]]++, i++)
        ;
    vector<int> sortedArr;
    int i = 0;
    while (n > 0) {
        if (count[i] == 0) {
            i++;
        }
        else {
            sortedArr.push_back(i);
            count[i]--;
            --n;
        }
    }
    return sortedArr;
}
 
void printArr(vector<int> vec, int n)
{
    cout << "Sorted Array: ";
    for (int i = 0; i < n; cout << vec[i] << " ", i++)
        ;
    cout << endl;
}
signed main()
{
    vector<int> vec1 = { 6, 0, 7, 8, 7, 2, 0 };
    vector<int> sortedArr1
        = countingSort(vec1, vec1.size());
    printArr(sortedArr1, sortedArr1.size());
 
    vector<int> vec2 = { 4, 8, 1, 0, 1, 1, 0, 0 };
    vector<int> sortedArr2
        = countingSort(vec2, vec2.size());
    printArr(sortedArr2, sortedArr2.size());
 
    return 0;
}
