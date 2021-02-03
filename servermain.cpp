#include <iostream>
#include <fstream>

int main (int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "files not found\n";
        return -1;
    }
    else {
        fstream studentFile1 (argv[2]);
        fstream studentFile2 (argv[3]);

        if (studentFile1.is_open() && studentFile2.is_open()) {
             
        }
        else {
            std::cout << "files can't be opened\n";
            return -1;
        }
    }
}
