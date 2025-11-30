#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main() {
    string line;
    int letter = 0, space = 0, digit = 0, other = 0;
    getline(cin, line);
    
    // 循环读取字符，直到遇到换行符 '\n'
    for(char c:line) {
        if (isalpha(c)){
            letter++;  // 统计英文字母
        }
        else if(c == ' ') {
            space++;   // 统计空格
        }
        else if (isdigit(c) ){
            digit++;   // 统计数字
        }
        else {
            other++;   // 统计其他字符
        }
    }

    // 输出统计结果
    cout << "英文字母个数：" << letter << endl;
    cout << "空格个数：" << space << endl;
    cout << "数字个数：" << digit << endl;
    cout << "其他字符个数：" << other << endl;

    return 0;
}