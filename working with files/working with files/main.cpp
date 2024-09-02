#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ifstream inputFile ("newfile.txt");
    
    if(inputFile.is_open()){
        string line;
        while (inputFile >> line) {
            cout << line <<"\n";
        }
        inputFile.close();
        }
        else {
            cout << "Не удалось открыть файл.\n";
        }
        return 0;
    }


