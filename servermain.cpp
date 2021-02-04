#include <iostream>
#include <fstream>
#include <map>

int main (int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "files not found\n";
        return -1;
    }
    else {
        std::ifstream studentFile1 (argv[2]);
        std::ifstream studentFile2 (argv[3]);

        if (studentFile1.is_open() && studentFile2.is_open()) {
            std::map <int, std::string> allStudentsMap;
            std::string buffer;
            while (!studentFile1.eof()) {
                getline(studentFile1, buffer);
                while (string[i] != ' ') {
                    tmp 
                } 
                allStudentsMap[key] = value;
                std::cout << allStudentsMap[key] << std::endl; 
                break; 
            }
        }
        else {
            std::cout << "files can't be opened\n";
            return -1;
        }
    }
}
