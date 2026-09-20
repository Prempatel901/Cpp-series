#include<iostream>
#include<fstream>
using namespace std;

void writing(){
    ofstream fout;
    fout.open("file1.text");
    fout<<"Hello Coder Arrmy";
    fout.close();
}

void append(){
    ofstream fout;
    fout.open("file1.text",ios::app);
    fout<<" Kaise ho vasu";
    fout.close();
}

void reading(){
    ifstream fin;
    fin.open("flie1.text",ios::in);
    

}

int main()
{
    append();
    cout<<endl;
    return 0;
}

