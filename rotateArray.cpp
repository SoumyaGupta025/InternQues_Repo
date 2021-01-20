#include <iostream>
using namespace std;

void leftRotate(int arr[], int d, int n) 
{ 
    int i, j, temp;
    for (i = 0; i < d; i++) 
    {    temp = arr[0]; 
         for (j = 0; j < n - 1; j++) 
             arr[j] = arr[j + 1]; 
      
         arr[j] = temp; 
    }
    for (i = 0; i < n; i++) 
        cout << arr[i] << " ";
}

int main()
{
    int arr[30], n, d, i; 
    cout << "How many elements: "<<endl; 
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(i = 0; i<n; i++)
        cin>>arr[i];
    cout<<" Number of times to rotate: "<<endl;
    cin>>d;
    leftRotate(arr, d, n);
    return 0;
}
