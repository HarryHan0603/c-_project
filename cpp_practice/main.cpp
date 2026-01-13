/* #include <iostream>
using namespace std;

int main() {
    cout << "Hello C++ from VS Code!\n";
    return 0;
}*/
/********************************************************************************/

/*主題：for 迴圈 + 累加*/
/*題目（先看）
        輸入一個整數 n
        輸出 1 + 2 + ... + n 的總和*/

/*#include <iostream>
using namespace std;

int main() {
    int n; 
    printf("請輸入一個整數 n: ");
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("輸出結果: %d\n", sum);
    return 0;
}*/
/********************************************************************************/
/*變化 A：只加「偶數」
輸入 n，輸出 2 + 4 + 6 + ... ≤ n 的總和*/

/*#include <iostream>
using namespace std; 

int main() {
    int n;
    printf("請輸入一個整數 n: ");
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        if(i % 2 ==0){
            sum +=i;
        }
    }
    printf("輸出結果: %d\n", sum);
    return 0;
}*/
/********************************************************************************/
/*變化 B：改用 while 迴圈
    輸入 n，輸出 1 + 2 + ... + n 的總和*/
/*#include <iostream>
using namespace std;

int main() {
    int n;
    printf("請輸入一個整數: ");
    cin >> n;

    int sum = 0;
    int i = 1;
    while(i <= n) {
        if(i % 2 == 0){
            sum += i;
        } 
        i++;
    }
    printf ("輸出結果: %d\n", sum);
    return 0;
}*/
/*****************************************************************************************************/
//主題：Function（函式）＋ 程式拆解
//題目
    /*
    寫一個函式 sumToN(int n)
    功能：回傳 1 + 2 + ... + n
    在 main() 呼叫它並輸出結果
    */
/*#include <iostream>
using namespace std;   

int sumToN(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;  //結束函式，並把變數 sum 的值回傳出去
}

int main() {
    int n;
    printf("請輸入一個整數: ");
    cin >> n;

    printf("輸出結果: %d\n", sumToN(n));
    return 0;       // 結束程式，並告訴系統「程式正常執行完成」
}*/

/*************************************************************************************/
/* 變化 A 
    偶數回傳 true
    奇數回傳 false
*/
/*#include <iostream>
using namespace std;

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
         return false;
    }
}

int main() {
    int n;
    printf("請輸入一個整數:");
    cin >> n;

    if(isEven(n) == true){
        printf("%d 是偶數\n", n);
    }
    else{
        printf("%d 是奇數\n", n);
    }
}*/
/*************************************************************************************/
#include <iostream> 
using namespace std; 

int sumToN(int n){
    int sum = 0;
    int i = 1;
    /*for(int i = 1; i <= n; i++){
        if(i % 2 == 0){
            sum += i;
        }
    }*/
   while (i <= n){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
   }
    return sum;
}

int main() {
    int n;
    printf("請輸入一個整數: ");
    cin >> n;
    printf("輸出結果: %d\n", sumToN(n));
    return 0;
}

