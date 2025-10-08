///week05-3a.cpp 三合一 Part1/Part2 Input/Ouput
///CPE 這次的第二題UVA 483 Word Scramble 把字弄反
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    string line; ///Part1 :Input
    while (getline( cin, line)){
    ///讀入1行 一直讀 讀到Ctrl-z 才結束

        /// Part 2:Ouput
        cout << line << endl; /// 先隨便印出來
    }
}
