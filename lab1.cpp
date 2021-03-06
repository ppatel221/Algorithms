#include <iostream>
#include <chrono>

// create 6 arrays and run sorting algoritms on each

void selectionSort(int arr[], int n){
    int temp=0;
    
    for(int i=0; i <= n; i++){
        for(int j=1+i; j < n; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//merge sort
void merge(int arr[], int l, int m, int r) 
{ 
    int i;
    int j;
    int k; 
    int leftSize = m - l + 1; 
    int rightSize =  r - m; 
  
   
    int left[leftSize];
    int right[rightSize]; 
    
    
    
    for ( i = 0; i < leftSize; i++){
        
        left[i] = arr[l + i]; 
    }

    for ( j = 0; j < rightSize; j++){
        right[j] = arr[m + 1+ j]; 
    }
    
    i=0;
    j=0;
    k=l;

    while (i < leftSize && j < rightSize){ 
        if (left[i] <= right[j]) { 
            arr[k] = left[i]; 
            i++; 
        }else{ 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
  
   
    while (i < leftSize){ 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
  
    while (j < rightSize){ 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
}

void mergeSort(int arr[], int low, int high){
    int mid;

    if(low < high){
        mid = (low+high)/2;
        mergeSort(arr, low,mid);
        mergeSort(arr, mid+1, high);
        merge(arr,low,mid,high);
    }
    
}

//Modified merge sort
void modifiedMerge(int arr[], int l, int m, int r) 
{ 
    int i;
    int j;
    int k; 
    int leftSize = m - l + 1; 
    int rightSize =  r - m; 
  
   
    int left[leftSize];
    int right[rightSize]; 

     


    for ( i = 0; i < leftSize; i++){
        
        left[i] = arr[l + i]; 
    }

    
    for ( j = 0; j < rightSize; j++){
        
        right[j] = arr[m + 1+ j]; 
    }
   
    if(sizeof(left)<=sizeof(left)/16){
        selectionSort(left,leftSize);
    } 

    if(sizeof(right)<=sizeof(right)/16){
        selectionSort(right,rightSize);
    } 

    i=0;
    j=0;
    k=l;
    
    
    while (i < leftSize && j < rightSize){ 

       
        if (left[i] <= right[j]) { 
            
            arr[k] = left[i]; 
            i++; 
        }else{ 
            arr[k] = right[j]; 
            j++; 
        } 
        k++; 
    } 
 
    while (i < leftSize){ 
        arr[k] = left[i]; 
        i++; 
        k++; 
    } 
  
    while (j < rightSize){ 
        arr[k] = right[j]; 
        j++; 
        k++; 
    } 
}

void modifiedMergeSort(int arr[], int low, int high){
    int mid;

    if(low < high){
        
        mid = (low+high)/2;
        modifiedMergeSort(arr, low,mid);
        modifiedMergeSort(arr, mid+1, high);
        modifiedMerge(arr,low,mid,high);
    }
    
}

//Generate random numbers 
void generateRandom(int arr[], int n){
    
    srand((unsigned)time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = 1+ rand() % (4*n);

    }
}

int main(){
    
    int n1=16;
    int n2=100;
    int n3=500;
    int n4=1000;
    int n5=5000;
    int n6=10000;

    int n1array[n1];
    int n2array[n2];
    int n3array[n3];
    int n4array[n4];
    int n5array[n5];
    int n6array[n6];


    std::cout << "---------------- Selection Sort -----------------" << std::endl;
    generateRandom(n1array, n1);
    
    auto start = std::chrono::high_resolution_clock::now();
    selectionSort(n1array,n1);
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double>elapsed = finish - start;
    std::cout << "Elements: " << n1 <<  "      | Seconds: " << elapsed.count() << "s\n";

    
    generateRandom(n2array, n2);

    start = std::chrono::high_resolution_clock::now();
    selectionSort(n2array,n2);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n2 <<  "     | Seconds: " << elapsed.count() << "s\n";
    
    generateRandom(n3array, n3);

    
    start = std::chrono::high_resolution_clock::now();
    selectionSort(n3array,n3);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n3  <<  "     | Seconds: " << elapsed.count() << "s\n";
    
    generateRandom(n4array, n4);
    start = std::chrono::high_resolution_clock::now();
    selectionSort(n4array,n4);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n4  <<  "    | Seconds: " << elapsed.count() << "s\n";
    


    generateRandom(n5array, n5);
    start = std::chrono::high_resolution_clock::now();
    selectionSort(n5array,n5);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n5 <<  "    | Seconds: " << elapsed.count() << "s\n";
    


    generateRandom(n6array, n6);
    start = std::chrono::high_resolution_clock::now();
    selectionSort(n6array,n6);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n6 <<  "   | Seconds: " << elapsed.count() << "s\n";
    

    std::cout<< std::endl; 
    std::cout << "---------------- Merge Sort -----------------" << std::endl;

    generateRandom(n1array, n1);
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n1array,0,n1-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n1 <<  "      | Seconds: " << elapsed.count() << "s\n";
    
    generateRandom(n2array, n2);
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n2array,0,n2-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n2 <<  "     | Seconds: " << elapsed.count() << "s\n";

    generateRandom(n3array, n3);
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n3array,0,n3-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n3 <<  "     | Seconds: " << elapsed.count() << "s\n";

    generateRandom(n4array, n4);
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n4array,0,n4-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n4 <<  "    | Seconds: " << elapsed.count() << "s\n";

    generateRandom(n5array, n5);
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n5array,0,n5-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n5 <<  "    | Seconds: " << elapsed.count() << "s\n";


    generateRandom(n6array, n6);
    
    start = std::chrono::high_resolution_clock::now();
    mergeSort(n6array,0,n6-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n6 <<  "   | Seconds: " << elapsed.count() << "s\n";

    std::cout<< std::endl; 
    std::cout << "---------------- Modified Merge Sort -----------------" << std::endl;
    
    
    
    generateRandom(n1array, n1);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n1array,0,n1-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n1 <<  "      | Seconds: " << elapsed.count() << "s\n";



    generateRandom(n2array, n2);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n2array,0,n2-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n2 <<  "     | Seconds: " << elapsed.count() << "s\n";


    generateRandom(n3array, n3);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n3array,0,n3-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n3 <<  "     | Seconds: " << elapsed.count() << "s\n";

    generateRandom(n4array, n4);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n4array,0,n4-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n4 <<  "    | Seconds: " << elapsed.count() << "s\n";

    generateRandom(n5array, n5);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n5array,0,n5-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n5 <<  "    | Seconds: " << elapsed.count() << "s\n";



    generateRandom(n6array, n6);
   
    start = std::chrono::high_resolution_clock::now();
    modifiedMergeSort(n6array,0,n6-1);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elements: " << n6 <<  "   | Seconds: " << elapsed.count() << "s\n";

  
    return 0;
}

