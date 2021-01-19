#include<iostream>

using namespace std; 

void Leaders(int arr[], int size) 

{ 
    
	int i,j;
    
	for (i = 0; i < size; i++) 
    
	{ 
        
		for (j = i+1; j < size; j++) 
        
		{ 
            
			if (arr[i] <= arr[j]) 
                
				break; 
        
		}     
        
		if (j == size) 
            
			cout << arr[i] << " "; 
  
	} 

} 
  

int main() 

{ 
      int arr[] = {16, 17, 4, 3, 5, 2}; 
    
	int n = sizeof(arr)/sizeof(arr[0]); 
    
	Leaders(arr, n); 
    
	return 0; 

}