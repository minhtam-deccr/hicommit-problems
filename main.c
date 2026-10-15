#include <stdio.h>
#include <stdlib.h>

int main() {
    long long a, b, c;
    
    if (scanf("%lld %lld %lld", &a, &b, &c) == 3) {
        // Cong thuc tim max cua 2 so khong dung dau so sanh: ((x + y) + abs(x - y)) / 2
        long long max_ab = (a + b + abs(a - b)) / 2;
        long long max_all = (max_ab + c + abs(max_ab - c)) / 2;
        
        printf("%lld\n", max_all);
    }
    
    return 0;
}

