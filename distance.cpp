#include <iostream>

int search( int arr[], int z, int size)
{
    int front=0, back = size-1;
    while(front <= back)
    {
        if(front == z){
            return front;
        }
        else if(back == z){
            return back;
        }
        front++;
        back++;
    }
    return '\0';
}

int main()
{
    int arr[30], x, y, num, x_pos, y_pos, i;
    std::cout << "How many elements you want to enter: " << std::endl;
    std::cin >> num;
    std::cout << "Enter elements: " << std::endl;
    for ( i = 0; i<num; i++) {
        std::cin >> arr[i];
    }
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter y: " << std::endl;
    std::cin >> y;
    x_pos = search(arr, x, num);
    y_pos = search(arr, y, num);
    std::cout << "Distance between x and y is " <<y_pos - x_pos<< std::endl;
    return 0;
}