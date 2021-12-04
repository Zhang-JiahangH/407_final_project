#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile;
    ofstream outfile;
    infile.open("data.zoss");
    outfile.open("data.nzo");
    string t;
    int s=0;
    while(infile >> t) {
        s += t.size();
        outfile << t;
    }
    cout << s;
    infile.close();
    outfile.close();
}