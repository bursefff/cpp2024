#include<iostream>
#include<fstream>

int main(int argc, char* argv[]){
    int n = atoi(argv[1]);
    std::ofstream file;
    file.open("output.txt");
    for (int i = 0; i<n; i++){
        file << i << std::endl;
    }
    file.close();
    return 0;
}