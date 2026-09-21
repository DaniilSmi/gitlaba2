#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;



int writeToFile(string name) {
    ofstream out;
    out.open(name);

    if (out.is_open()) {
        srand(time(NULL));

        for (int i=0; i<10; i++) {
            

            out << rand() % (10 - 1 + 1) << ' ';
        }


    } else {
        return 1;
    }
    

    out << endl;
    out.close();

    return 0;
}

int main() {

    writeToFile("file1.txt");
    writeToFile("file2.txt");
    writeToFile("file3.txt");
    return 0;
}