//
// Created by CHENXINGFENG on 2018/10/11.
//

#include <iostream>

using namespace std;
//将src座上的n个盘子，以mid座为中转，移动到dest座
void Hanoi(int n, char src, char mid, char dest)
{
    if (n == 1) { //只需移动一个盘子
        cout << src << "->" << dest << endl;
        //直接将盘子从src移动到dest即可
        return; //递归终止
    }
    Hanoi(n - 1, src, dest, mid); //先将n-1个盘子从src移动到mid
    cout << src << "->" << dest << endl;
    //再将一个盘子从src移动到dest
    Hanoi(n - 1, mid, src, dest); //最后将n-1个盘子从mid移动到dest
    return;
}

int main() {
    int n;
    cin >> n; //输入盘子数目
    Hanoi(n,'A','B','C');
    return 0;
}