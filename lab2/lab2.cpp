#include <iostream>
#include <chrono>
#include <cstdlib>

float powLog(int x, int y){
    if(y == 0){
        return 1;
    }

    
    if(y < 0){

        return 1/powLog(x,-y);
    }else{
        
        if(y%2 == 0){
            return powLog(x, y/2)*powLog(x, y/2);
        }else{
            return x*powLog(x, y/2)*powLog(x, y/2);
        }
    }
    
    
}

float powLin(int x, int y){
    if(y == 0){
        return 1;
    }
    
    if(y < 0){
        return 1/powLin(x,-y);
    }else{
        
        return x * powLin(x, y-1);;
    }

}
int main(int argc, char* argv[]){

    
    float x;
    float y;
    
    if(argc == 1){  
        x = 0;
        y = 0;
    }else if(argc == 2){
        x = atof(argv[1]);
        y=0;
    }else{
        x = atof(argv[1]);
        y = atof(argv[2]);
    }
    std::cout<< x << "  " << y <<std::endl;
    auto start = std::chrono::high_resolution_clock::now();
    float pLinear = powLin(x,y);
    auto finish = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double>elapsed = finish - start;
    std::cout << "linear: pow(" << x << ","<< y <<") = " << pLinear <<  " | Seconds: " << elapsed.count() << "s\n";
    
    
    start = std::chrono::high_resolution_clock::now();
    float pLogn = powLog(x,y);
    finish = std::chrono::high_resolution_clock::now();
    elapsed = finish-start;
    std::cout << "lg(n):  pow(" << x << ","<< y <<") = " << pLogn <<  " | Seconds: " << elapsed.count() << "s\n";
    

    return 0;
}

