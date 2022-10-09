/*package whatever //do not write package name here */

import java.io.*;

class Main{
    
    
    static void selectionSort(int arr[], int n){
        for(int i = 0; i < n; i++){
            int min = i;
            
            for(int j = i + 1; j < n; j++){
                if(arr[j] < arr[min]){
                    min = j;
                }
            }
            
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    
    
	public static void main (String[] args) {
	    int a[] = {2, 1, 4, 3};
	    selectionSort(a, 4);
	    
	    for(int i = 0; i < 4; i++){
	        System.out.print(a[i] + " ");
	    }
	}
}
