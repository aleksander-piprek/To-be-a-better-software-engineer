#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    int arr[10];
    int min, max;
    cout << "Random array of 10 numbers [0-10]: ";

    // Randomizing
    srand(time(NULL));
    for(int i=0; i<10; i++){
        arr[i] = rand()%11+0; 
        cout << arr[i] << " ";
    }

    // Largest number
    cout << "\n";
    for(int i=0; i<10; i++){
        if(arr[i] > arr[i-1]){
            cout << i << " ";
        }
        else{}
    }
    cout << "\nLargest number: " << max << " ";
    
    return 0;
}