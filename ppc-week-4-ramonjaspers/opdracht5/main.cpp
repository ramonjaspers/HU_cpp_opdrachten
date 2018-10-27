#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void compress(string source, string destination) {
    string line;
    vector<string> lineVector;
    ifstream readFile(source);
    ofstream writeFile(destination);
    if (readFile.is_open()) {
        while (getline(readFile, line)) {
            for (unsigned int i = 0; i < line.size(); i++) {
                if (line[i] == ' '|| line[i] == '\t' || line[i] == '\n') {
                    line.erase(i,1);
                }
            }
            writeFile << line << '\n';
        }
        writeFile.close();

        readFile.close();
    } else {
        cout << "Unable to open file";
    }
}

int main() {
    string fileIn = "C:\\Users\\ramon_000\\CLionProjects\\cplusplus_opdrachten\\ppc-week-4-ramonjaspers\\opdracht5\\text";
    string fileOut = "C:\\Users\\ramon_000\\CLionProjects\\cplusplus_opdrachten\\ppc-week-4-ramonjaspers\\opdracht5\\textOut";
    cout << fileOut;
    compress(fileIn, fileOut);
}