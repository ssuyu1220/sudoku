// sudoku.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#define sq 9
#include <iostream>
#include<list>
using namespace std;

class possibility {
public:
    int amount=9;
    list<int> nums = { 1,2,3,4,5,6,7,8,9 };
    void CheckRow(possibility k,int r,int arr[sq][sq]);
    void CheckColumn(possibility k,int c,int arr[sq][sq]);
    void CheckSquare(possibility k, int r, int c, int arr[sq][sq]);
};

void possibility::CheckRow(possibility k,int r,int arr[sq][sq]) {
    for (int i = 0; i < 5; i++) {
        if (arr[r][i] != 0){
            k.nums.remove(arr[r][i]);
            k.amount -= 1;
        }
    }
    
}

void possibility::CheckColumn(possibility k,int c,int arr[sq][sq]) {
    for (int i = 0; i < 5; i++) {
        if (arr[i][c] != 0) {
            k.nums.remove(arr[i][c]);
            k.amount -= 1;
        }
    }
}

void CheckSquare(possibility k, int r, int c, int arr[sq][sq]) {
    r /= 3;
    c /= 3;
    for (int i = r*3; i < 3; i++) {
        for (int j = c*3; j < 3; j++) {
            if (arr[i][j]!=0) {
                k.nums.remove(arr[i][j]);
            }
        }
    }
}

int main()
{
    possibility s[9][9];
    pair<int, int> MinPossi = { -1,-1 };
    int sudoku[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", sudoku[i][j]);
        }
    }
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (sudoku[i][j] != 0) {
                
            }
        }
    }

    

}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
