#include <cstdlib>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int randn() {
    int t = (rand() % (10-1+1))+ 1;
    if(t>5) {
        return 1;
    }
    else {
        return 0;
    }
}

string dec2bin(int num){
        string res;
        stringstream temp;
        if(num == 0) {
            return "0";
        }
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
    infile.open("data.nce");
    outfile.open("data.nces");
    string line;
    while(getline(infile,line,'\n')){
        stringstream ss;
        ss << line;
        int t;
        while(ss >> t){
            outfile  << dec2bin(t);
        }
    }
    outfile.close();
}
