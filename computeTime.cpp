#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <chrono>

using namespace std;
using namespace std::chrono;

list<int> numbers1 = {};
list<int> numbers2 = {};
list<int> numbers3 = {};


void calculate_square(int range){

    for (int i=0; i< range; i++){
        numbers1.push_back(i*i);
    }
}

void calculate_cube(int range){

    for (int i=0; i< range; i++){
        numbers2.push_back(i*i*i);
    }
}

void calculate_four(int range){

    for (int i=0; i< range; i++){
        numbers3.push_back(i*i*i*i);
    }
}

void calculate_time(){
    auto start = high_resolution_clock::now();
    calculate_square(1000000);
    calculate_cube(1000000);
    calculate_four(1000000);

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop-start);

    cout << "Duration: " << duration.count();

    cout << "\n";
}

int main()
{
    for(int i=0;i<10;i++){
        calculate_time();
    }
}