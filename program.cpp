#include<iostream>
using namespace std;



 int partition(int *array,int l,int h){
         int paviot=array[l];
         int i=l;
         int j=h;


         while(i<j){
         do{
            i++;
         }while(array[i]>=paviot);


         do{
            j--;
         }while(array[j]<=paviot);
         
         if(i<j){
            int temp=array[i];
            array[i]=array[j];
            array[j]=temp;
         }
         
         }
    int temp=array[l];
            array[l]=array[j];
            array[j]=temp;


            return j;

        
    }


int main(){

const int size=7;
int i=0;
int j=size-1;

int randomArray[size]={5,3,6,2,8,1,7};

cout<<partition(randomArray,i,j);











    return 0;
}