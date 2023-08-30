#include <iostream>
#include <cmath>
using namespace std;

int binarySearch(int arr[],int size,int target)
{
    //variable
    int right, left,mid;
    left = 0;
    right = size -1;
    cout << "finding the target ...." << endl;
    while(left <= right)
    {
        mid = round((left + right)/2);
        if(arr[mid]==target)
        {
            return mid;
        }else if (target > arr[mid]) 
        {
            left = mid + 1;
        }else
        {
            right = mid -1;
        }
    }
    return -1;
    cout << "The target is found in the postion " << mid;
}
int main()
{
    cout << "Enter The number in sorted form " << endl;
    int arr[10] = {1,22,32,45,57,63,71,80,900};
    for(int i = 0;i<=9;i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    cout << "Enter a target from the given array " << endl;
    cin >> target;
    int found = binarySearch(arr,size,target);
    if(found == -1)
    {
        cout << "The target does not exist in this list";
    }
    else
    {
        cout << "The given target has been found in the index position of: " << found << endl;
        cout << "arr" << "[" << found << "]" << " = " << arr[found] << endl;
    }
    
}