///week05-3b.cpp 三合一 Part1/Part2 Input/Ouput
///part3 :stringstream 斷字
///CPE 這次的第二題UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
int main()
{
    string line; ///Part1 :Input
    while (getline( cin, line)){
    ///讀入1行 一直讀 讀到Ctrl-z 才結束
        stringstream ss(line);/// part 3 : 把字串用來斷字
        string word; ///用來斷字
        while( ss >> word ) { /// part 3 : 把字串用來斷字
            reverse( word.begin(),word.end() ); /// part 4 :反過來
            cout << " " << word;
        }
        cout << endl; ///跳行
        /// Part 2:Ouput
        ///cout << line << endl; /// 先隨便印出來
    }
}
