#include<iostream>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

 int partition(int *array,int l,int h){
         int paviot=array[l];
         int i=l;
         int j=h;


         while(i<j){
         do{
            i++;
         }while(array[i]<=paviot);


         do{
            j--;
         }while(array[j]>=paviot);
         
         if(i<j){
          swap(array[i],array[j]);
         }
         
         }
        swap(array[l],array[j]);


            return j;

        
    }


// void quickSort(int *randomArray,int l,int h){
//     if(l<h){
//         int j=partition(randomArray,l,h);
//         quickSort(randomArray,l,j);
//         quickSort(randomArray,j+1,h);
//     }

// }



int main(){

const int size=7;
int i=0;
int j=size;

int randomArray[size]={5,3,6,2,8,1,7};
 
 partition(randomArray,i,j);

 for(int k=0;k<size;k++){
    cout<<randomArray[k]<<",";
 }






 





    return 0;
}