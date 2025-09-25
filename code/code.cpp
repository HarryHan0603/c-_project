#include <iostream>  //iostream 提供 輸入 (cin) 和 輸出 (cout)，
                     //允許程式與標準輸入/輸出裝置（通常是鍵盤與螢幕）進行資料交換。
using namespace std;
//使用 std 命名空間，這樣就不需要在使用標準庫成員時加上 "std::" 前綴。
int main() {
    char c1 = 'A'; //宣告並初始化字元變數 c1，值為 'A'
    int code = 5; //宣告並初始化整數變數 code，值為 5
    char c2 = c1 ^ code; //使用 XOR 運算對 c1 進行編密，結果存入 c2
    cout << c1 << "編密後 -> " << c2 <<'\n'; //輸出 c1 的值
    char c3 = c2 ^ code ; //使用 XOR 運算對 c2 進行解密，結果存入 c3
    cout << c2 << "解密後 -> " << c3 <<'\n'; //輸出 c2 的值
    return 0; //返回 0，表示程式成功結束
}