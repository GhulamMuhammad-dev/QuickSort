// #include<iostream>
// using namespace std;

// void swap(int &a,int &b){
//     int temp=a;
//     a=b;
//     b=temp;
// }

//  int partition(int *array,int l,int h){
//          int paviot=array[l];
//          int i=l;
//          int j=h;


//          while(i<j){
//          do{
//             i++;
//          }while(array[i]<=paviot);


//          do{
//             j--;
//          }while(array[j]>=paviot);
         
//          if(i<j){
//           swap(array[i],array[j]);
//          }
         
//          }
//         swap(array[l],array[j]);


//             return j;

        
//     }


// void quickSort(int *randomArray,int l,int h){
//     if(l<h){
//         int j=partition(randomArray,l,h);
//         quickSort(randomArray,l,j-1);
//         quickSort(randomArray,j+1,h);
//     }

// }



// int main(){

// const int size=7;
// int i=0;
// int j=size;

// int randomArray[size]={5,3,6,2,8,1,7};
 
//  quickSort(randomArray,0,size-1);

//  for(int k=0;k<size;k++){
//     cout<<randomArray[k]<<",";
//  }






 





//     return 0;
// }

#include <iostream>

// Function to swap two elements in an array
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition function (Lomuto partition scheme)
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // Choose the last element as the pivot
    int i = low - 1;       // Index of the smaller element

    // Rearrange elements such that smaller elements are on the left of the pivot
    for (int j = low; j < high; ++j) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Place the pivot in its correct position
    swap(arr[i + 1], arr[high]);
    return i + 1; // Return the new pivot index
}

// QuickSort function
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Get the pivot's final position
        int pi = partition(arr, low, high);

        // Recursively sort the subarrays on either side of the pivot
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

// Main function to demonstrate QuickSort
int main() {
    const int size = 7; // Array size
    int arr[size] = {10, 80, 30, 90, 40, 50, 70};

    std::cout << "Original array: ";
    printArray(arr, size);

    // Perform QuickSort
    quickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

