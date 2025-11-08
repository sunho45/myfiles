#include <iostream>

#include <algorithm>
#include <vector>
using namespace std;

void swap(int *a, int *b){
int temp=*a;

*a=*b;

*b=temp;

}

void quicksort(vector<int> &arr, int first,int last){

    
if(first<last){
        int start=first;
        int end=last;
        int mid=start+(end-start)/2;
        int pivot=arr[mid];

        while(start<=end){
            while(arr[end]>pivot){

                end--;

            }
             while(arr[start]<pivot){


                start++;
            }
            if(start<=end){
                swap(arr[end],arr[start]);
                start++;
                end--;
            }




        }

    







quicksort(arr,first, end);
quicksort(arr,start, last);
    }



}

int main(){




}