#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

string dec2bin(int num){
        string res;
        stringstream temp;
        while(num!=0){
            temp << num % 2;
            num /= 2;
        }
        temp >> res;
        stringstream t2;
        for(int i=res.size()-1; i>=0; i--) {
            t2 << res[i];
        }
        string result;
        t2 >> result;
        return result;
}

int main() {
    cout << rand() << endl;
    ifstream infile;
    ofstream outfile;
    infile.open("data.nces");
    outfile.open("data.ncess");
    for(int i=0; i<41870; i++) {
        for(int j=0; j<24; j++) {
            char c;
            infile.get(c);
            outfile << c;
        }
        outfile << endl;
    }
    for(int k=0; k<3; k++) {
            char c;
            infile.get(c);
            outfile << c;
    }
    outfile.close();
}
