#include <iostream>
#include <fstream>
#include <bits/stdc++.h>

void readFileInMap(auto& allStudentsSet, std::ifstream& studentFile) {
    std::string valueSet, tmp;
    int keySet;

    while (getline(studentFile, valueSet)) {
        int i = 0;
        while (valueSet[i] != ' ') {
            i++;
        }
        valueSet.erase(0, i+1); 
        allStudentsSet.insert(valueSet);
    }
}

int main (int argc, char* argv[]) {
    if (argc < 3) {
        std::cout << "files not found\n";
        return -1;
    }
    else {
        std::ifstream studentFile1 (argv[2]);
        std::ifstream studentFile2 (argv[3]);

        if (studentFile1.is_open() && studentFile2.is_open()) {
            std::unordered_set <std::string> allStudentsSet;
            readFileInMap(allStudentsSet, studentFile1);
            readFileInMap(allStudentsSet, studentFile2);
            
            for(auto i : allStudentsSet) std::cout << i << std::endl;
        }
        else {
            std::cout << "files can't be opened\n";
            return -1;
        }
    }
    return 0;
}
