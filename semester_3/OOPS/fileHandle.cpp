#include <iostream>
#include <fstream>  
#include <string>

int main() {
    std::ofstream outFile("example.txt");  

    if (!outFile) {  
        std::cerr << "Error opening file for writing.\n";
        return 1;
    }

    outFile << "Hello, this is a line written to the file.\n";
    outFile << "Writing another line.\n";

    outFile.close(); 
    std::cout << "Data written to example.txt\n";

    std::ifstream inFile("example.txt");  

    if (!inFile) {
        std::cerr << "Error opening file for reading.\n";
        return 1;
    }

    std::string line;
    while (std::getline(inFile, line)) {  
        std::cout << line << "\n";
    }

    inFile.close(); 
    return 0;
}
