#include <iostream>
#include <chrono>

using namespace std; 
long long fact_1(long long n)
{ if(n==0||n==1)
    return 1;
    else 
    return n*fact_1(n-1);
}
int main() {
    // تسجيل وقت البدء
   /*long long n=10000000,fact=1;
for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
*/
    auto start = chrono::high_resolution_clock::now();
 long long n=10000000,fact=1;
long long result=fact_1(n);

    // تسجيل وقت الانتهاء
    auto end = chrono::high_resolution_clock::now();

    // حساب الزمن المستغرق
   // auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
    auto duration = chrono::duration<double>(end - start);

    cout << "Time taken to execute the function: " << duration.count()*1000 << " milliseconds" << endl;

return 0;
}