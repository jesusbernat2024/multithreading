#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;

int i=0;
bool guanyador = false;

void funcio1(){
    for( ; i<100 && !guanyador ;i++){
        string m = "Fil 1 volta " + to_string(i) + "\n";
        cout << m;
        Sleep(700);
    }
    guanyador = true;
}
void funcio2(){
    for( ; i<10 ;i++){
        string m = "Fil 2 volta " + to_string(i) + "\n";
        cout << m;
        Sleep(500);
    }
}
int main() {
    thread fil1(funcio1);
    thread fil2(funcio2);

    fil1.join();
    fil2.join();

    cout << "Programa mutithreading";

    return 0;
}
