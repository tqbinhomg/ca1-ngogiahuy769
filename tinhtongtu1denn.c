#include <stdio.h>

// 1. Thuật toán độ phức tạp Mu (Exponential - O(2^n))
int sum_exponential(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1; // Điều kiện dừng khi n = 1
    return sum_exponential(n - 1) + sum_exponential(n - 1) + sum_exponential(n - 2);
}

// 2. Thuật toán độ phức tạp Binh phuong (Quadratic - O(n^2))
long long sum_quadratic(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum++; // Mỗi lần tăng 1 đơn vị
        }
    }
    return sum;
}

// 3. Thuật toán độ phức tạp Tuyet tinh (Linear - O(n))
long long sum_linear(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

// 4. Thuật toán độ phức tạp Hang so (Constant - O(1))
long long sum_constant(long long n) {
    return n * (n + 1) / 2;
}

// --- HÀM CHÍNH ĐỂ CHẠY CHƯƠNG TRÌNH ---
int main() {
    int n;

    // Nhập giá trị n từ bàn phím
    printf("Nhap n = ");
    scanf("%d", &n);

    printf("\n--- KET QUA TINH TONG ---\n");
    printf("1. Sum Constant    : %lld\n", sum_constant(n));
    printf("2. Sum Linear      : %lld\n", sum_linear(n));
    printf("3. Sum Quadratic   : %lld\n", sum_quadratic(n));
    
    // Lưu ý: Chỉ nên thử n <= 20 với hàm đệ quy mũ này
    printf("4. Sum Exponential : %d\n", sum_exponential(n));

    //S(n) = S(n - 1) + n dk lặp
    //n == 1 thì S(1) = 1 dk dừng

    return 0;
}