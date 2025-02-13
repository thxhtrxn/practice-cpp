#include<bits/stdc++.h>
using namespace std;

/* VD: 20 = 2 + 2 + 5 = 9 
       9 = 3 + 3 = 6
       6 = 2 + 3 = 5
       5 = 5 (số nguyên tố nên không thay đổi)
       => KQ = 5
*/

/* ## Hàm `solveNum` phân tích thừa số nguyên và cộng chúng lại 
   VD: 20 chia hết cho 2, ta cộng 2 + 2 vì:
        20 = 2.2.5 = 9
   Mà 5 là số nguyên tố nên ta cộng cho 5
   KQ: 2 + 2 + 5 = 9
*/
int solveNum(int n) {
    int k=2 /* bắt đầu với `k = 2` vì số nguyên tố nhỏ nhất là 2 */,
        sum=0 /* sum sẽ là tổng các thừa số */;

    while(n >1 ) { // Vòng lặp lặp lại cho đến khi n = 1
        while(n%k==0) { // Nếu khi n lại chia hết cho k,
            sum +=k;    // cộng k vào tổng
            n /=k;      // chia n cho k
        }
        k++; // Tăng k lên số tiếp theo nếu không được
    }
    return sum; // Trả về tổng các thừa số nguyên tố
}

/* ## Hàm `factorSum` lặp lại quá trình trên đến khi kết quả không đổi */
int factorSum(int n) {
    while(n!=solveNum(n)) { // lặp lại cho đến khi không thay đổi nữa
        n = solveNum(n);
    }
    return n; // trả về kết quả cuối cùng
}

int main() {
    int n;
    cin >> n;
    cout << factorSum(n);
    
    return 0;
}