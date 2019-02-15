#include <iostream>
#include <chrono>

// create 6 arrays and run sorting algoritms on each

int main(){
    auto start = std::chrono::high_resolution_clock::now();
    //std::cout << "Hello World\n";
    for(int i=0 ; i < 10000 ; i++){

    }
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = finish - start;
    //std::cout << "Elapsed time for for loop: " << elapsed.count() << "s\n";

    int n1=10;
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

    srand((unsigned)time(NULL));
    for (int i = 0; i < n1; i++)
    {
        n1array[i] = 1+ rand() % (4*n1);
        //std::cout << i <<" element in the array"<< n1array[i] << std::endl;
    }

    int min=0;
    int index=0;
    int temp = 0;
    

    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 10 elements----------" << std::endl;
    for(int i=0; i <= n1; i++){
        for(int j=1+i; j < n1; j++){
            if(n1array[i] > n1array[j]){
                temp = n1array[i];
                n1array[i] = n1array[j];
                n1array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    




    srand((unsigned)time(NULL));
    for (int i = 0; i < n2; i++)
    {
        n2array[i] = 1+ rand() % (4*n2);
        //std::cout << i <<" element in the array"<< n2array[i] << std::endl;
    }
    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 100 elements----------" << std::endl;
    for(int i=0; i <= n2; i++){
        for(int j=1+i; j < n2; j++){
            if(n2array[i] > n2array[j]){
                temp = n2array[i];
                n2array[i] = n2array[j];
                n2array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    

    srand((unsigned)time(NULL));
    for (int i = 0; i < n3; i++)
    {
        n3array[i] = 1+ rand() % (4*n3);
        //std::cout << i <<" element in the array"<< n2array[i] << std::endl;
    }
    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 500 elements----------" << std::endl;
    for(int i=0; i <= n3; i++){
        for(int j=1+i; j < n3; j++){
            if(n3array[i] > n3array[j]){
                temp = n3array[i];
                n3array[i] = n3array[j];
                n3array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    



    srand((unsigned)time(NULL));
    for (int i = 0; i < n4; i++)
    {
        n4array[i] = 1+ rand() % (4*n4);
        //std::cout << i <<" element in the array"<< n2array[i] << std::endl;
    }
    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 1000 elements----------" << std::endl;
    for(int i=0; i <= n4; i++){
        for(int j=1+i; j < n4; j++){
            if(n4array[i] > n4array[j]){
                temp = n4array[i];
                n4array[i] = n4array[j];
                n4array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    
    



    srand((unsigned)time(NULL));
    for (int i = 0; i < n5; i++)
    {
        n5array[i] = 1+ rand() % (4*n5);
        //std::cout << i <<" element in the array"<< n2array[i] << std::endl;
    }
    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 5000 elements----------" << std::endl;
    for(int i=0; i <= n5; i++){
        for(int j=1+i; j < n5; j++){
            if(n5array[i] > n5array[j]){
                temp = n5array[i];
                n5array[i] = n5array[j];
                n5array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    


    srand((unsigned)time(NULL));
    for (int i = 0; i < n6; i++)
    {
        n6array[i] = 1+ rand() % (4*n6);
        //std::cout << i <<" element in the array"<< n2array[i] << std::endl;
    }
    start = std::chrono::high_resolution_clock::now();
    std::cout << "---------Selection sort 10000 elements----------" << std::endl;
    for(int i=0; i <= n6; i++){
        for(int j=1+i; j < n6; j++){
            if(n6array[i] > n6array[j]){
                temp = n6array[i];
                n6array[i] = n6array[j];
                n6array[j] = temp;
            }
        }
    }
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish - start;
    std::cout << "Elapsed time for selection sort: " << elapsed.count() << "s\n";
    

    return 0;
}