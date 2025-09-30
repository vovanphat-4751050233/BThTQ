// bai 1
#include <iostream>
using namespace std;
bool laTamGiac(double a, double b, double c)
{
    return (a + b > c && a + c > b && b + c > a);
}
bool dienTichTamGiac(double a, double b, double c)
{
    // tinh nua chu vi
    double p = a + b + c / 2;
    // cong thuc hê rông
    return sqrt(p * p - a) * (p - b) * (p - c);
    // Phân loại tam giácdung
    if (a == b && b == c)
        printf("Tam giac deu\n");
    else if (a == b || b == c || a == c)
    {
        if (fabs(a * a + b * b - c * c) < 1e-6 ||
            fabs(a * a + c * c - b * b) < 1e-6 ||
            fabs(b * b + c * c - a * a) < 1e-6)
            printf("Tam giac vuong can\n");
        else
            printf("Tam giac can\n");
    }
    else if (fabs(a * a + b * b - c * c) < 1e-6 ||
             fabs(a * a + c * c - b * b) < 1e-6 ||
             fabs(b * b + c * c - a * a) < 1e-6)
        printf("Tam giac vuong\n");
    else
        printf("Tam giac thuong\n");
}
int main()
{
    double a, b, c;
    cout << "nhap 3 canh tam giac:";
    cin >> a >> b >> c;
    if (dienTichTamGiac(a, b, c))
    {
        printf("%s\n", dienTichTamGiac(a, b, c));
        printf("Dien tich: %.2lf\n", dienTichTamGiac(a, b, c));
    }
    else
    {
        printf("Khong phai tam giac!\n");
    }
    return 0;
}
/*bai 2  Viết hàm tính điểm thang 4 và điểm chữ khi biết điểm thang 10. Viết chương trình sử dụng hàm này. Biết rằng: quy định các thang điểm như bảng dưới.*/
#include <iostream>
using namespace std;
void QuyDoiDiem(float diem10, float *diem4, char *diemChu)
{
    if (diem10 >= 9.0)
    {
        *diem4 = 4.0;
        *diemChu = 'A';
    }
    else if (diem10 >= 8.5)
    {
        *diem4 = 3.5;
        *diemChu = 'A';
    }
    else if (diem10 >= 7.5)
    {
        *diem4 = 3.0;
        *diemChu = 'B+';
    }
    else if (diem10 >= 6.5)
    {
        *diem4 = 2.5;
        *diemChu = 'B';
    }
    else if (diem10 >= 5.5)
    {
        *diem4 = 2.0;
        *diemChu = 'C';
    }
    else if (diem10 >= 4.5)
    {
        *diem4 = 1.5;
        *diemChu = 'D';
    }
    else if (diem10 >= 3.5)
    {
        *diem4 = 1.0;
        *diemChu = 'F';
    }
}
int main()
{
    float diem10, diem4;
    char diemChu;
    cout << "nhap diem thang 10:";
    cin >> diem10;
    QuyDoiDiem(diem10, &diem4, &diemChu);
    printf("Diem thang 4: %.1f\n", diem4);
    printf("Diem chu: %c\n", diemChu);

    return 0;
}
/*bai 3*/
#include <iostream>
using namespace std;

double tinhTienDien(int chiSoTruoc, int chiSoSau)
{
    int soDien = chiSoSau - chiSoTruoc;
    double tien = 0;
    if (soDien <= 100)
        tien = soDien * 1418;
    else if (soDien <= 150)
        tien = 100 * 1418 + (soDien - 100) * 1622;
    else if (soDien <= 200)
        tien = 100 * 1418 + 50 * 1622 + (soDien - 150) * 2044;
    else if (soDien <= 300)
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + (soDien - 200) * 2210;
    else if (soDien <= 400)
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + (soDien - 300) * 2361;
    else
        tien = 100 * 1418 + 50 * 1622 + 50 * 2044 + 100 * 2210 + 100 * 2361 + (soDien - 400) * 2420;
    return tien;
}

int main()
{
    int truoc, sau;
    cout << "Nhap chi so dien thang truoc: ";
    cin >> truoc;
    cout << "Nhap chi so dien thang sau: ";
    cin >> sau;
    cout << "Tien dien: " << tinhTienDien(truoc, sau) << " VND" << endl;
}
// bai 4.
#include <iostream>
#include <cmath>
using namespace std;

double tienTietKiem(double goc, int thang, double lai)
{
    return goc * pow(1 + lai, thang);
}

int main()
{
    double goc, lai;
    int thang;
    cout << "Nhap so tien gui: ";
    cin >> goc;
    cout << "Nhap so thang gui: ";
    cin >> thang;
    cout << "Nhap lai suat 1 thang (vd 0.01 cho 1%): ";
    cin >> lai;
    cout << "So tien nhan duoc: " << tienTietKiem(goc, thang, lai) << endl;
}
// bai 5
#include <iostream>
#include <math.h>
using namespace std;
long long TinhGiaiThua(int n)
{
    long long gt = 1;
    for (int i = n; i > 0; i = i - 2)
    {
        gt = gt * i;
    }
    return gt;
}
int main()
{
    int n;
    cout << "nhap so nguyen n:";
    cin >> n;
    if (n < 0)
    {
        cout << "khong the tinh giai thua kep cho so am:" << endl;
    }
    else
    {
        float gt = TinhGiaiThua(n);
        cout << n << "!!=" << gt << endl;
    }

    return 0;
}
/*bai 6*/
#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <cctype> // Thư viện cho isupper, islower, isdigit

using namespace std;

// --- BÀI 6: Tính số tháng gửi ít nhất ---
// soTienBanDau: tiền gốc, soTienCanCo: tiền mục tiêu, laiSuatThang: lãi suất (ví dụ 0.005)
int tinhSoThangGui(double soTienBanDau, double soTienCanCo, double laiSuatThang)
{
    if (soTienBanDau <= 0 || soTienCanCo <= soTienBanDau || laiSuatThang <= 0)
    {
        return 0; // Đã đạt mục tiêu hoặc dữ liệu không hợp lệ
    }

    // Dùng công thức logarit từ lãi kép để tính số tháng (n)
    // n = log(A/P) / log(1 + r)
    double tyLeTien = soTienCanCo / soTienBanDau;
    double logLaiSuat = log(1.0 + laiSuatThang);

    // Lấy log và làm tròn lên (ceil) vì số tháng phải là số nguyên
    int soThang = static_cast<int>(ceil(log(tyLeTien) / logLaiSuat));

    return soThang;
}

// --- BÀI 7: Hàm đếm số nguyên tố ---

// Kiểm tra xem n có phải là số nguyên tố không
bool kiemTraSoNguyenTo(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;

    // Kiểm tra từ 5 trở đi
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

// Đếm số lượng số nguyên tố trong đoạn [m, n]
int demSoNguyenTo(int m, int n)
{
    if (m > n || n < 2)
        return 0;
    if (m < 2)
        m = 2; // Số nguyên tố nhỏ nhất là 2

    int dem = 0;
    for (int i = m; i <= n; ++i)
    {
        if (kiemTraSoNguyenTo(i))
        {
            dem++;
        }
    }
    return dem;
}

// --- BÀI 8: Kiểm tra mật khẩu mạnh ---
// Trả về 1 nếu mạnh, 0 nếu yếu
int isStrongPassword(const char *pw)
{
    if (pw == nullptr)
        return 0;

    int length = strlen(pw);

    // 1. Dài >= 8 ký tự
    if (length < 8)
    {
        return 0;
    }

    // 2. Kiểm tra có đủ 1 chữ hoa, 1 chữ thường, 1 chữ số
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;

    for (int i = 0; i < length; ++i)
    {
        char c = pw[i];
        if (isupper(c))
        { // Kiểm tra chữ hoa
            hasUpper = true;
        }
        else if (islower(c))
        { // Kiểm tra chữ thường
            hasLower = true;
        }
        else if (isdigit(c))
        { // Kiểm tra chữ số
            hasDigit = true;
        }

        // Thoát sớm nếu đã đủ cả 3 điều kiện
        if (hasUpper && hasLower && hasDigit)
        {
            return 1;
        }
    }

    return 0; // Không đủ 3 loại ký tự
}

// --- BÀI 9: Đảo ngược chuỗi tại chỗ ---
void daoNguocChuoi(char *str)
{
    if (str == nullptr)
        return;

    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Lặp và hoán đổi ký tự từ hai đầu vào giữa
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}
// CHƯƠNG TRÌNH CHÍNH (Hàm main)
int main()
{
    // --- BÀI 6: Minh họa tính số tháng gửi ---
    cout << "\n--- BÀI 6: TÍNH SỐ THÁNG GỬI ---" << endl;
    double P = 1000000.0; // Gốc: 1 triệu
    double A = 2000000.0; // Mục tiêu: 2 triệu
    double r = 0.005;     // Lãi suất: 0.5% / tháng

    int soThang = tinhSoThangGui(P, A, r);

    cout << "Cần " << soThang << " tháng để tiền gửi (" << P << " VNĐ) đạt "
         << A << " VNĐ với lãi suất " << r * 100 << "%/tháng." << endl;
    cout << "--------------------------------------------------" << endl;

    // --- BÀI 7: Minh họa đếm số nguyên tố ---
    cout << "\n--- BÀI 7: ĐẾM SỐ NGUYÊN TỐ ---" << endl;

    // [1, 10]
    int dem1 = demSoNguyenTo(1, 10);
    cout << "SNT trong [1, 10]: " << dem1 << endl; // Kết quả: 4 (2, 3, 5, 7)

    // [1, 1000]
    int dem2 = demSoNguyenTo(1, 1000);
    cout << "SNT trong [1, 1000]: " << dem2 << endl; // Kết quả: 168

    // [1001, 100000]
    int dem3 = demSoNguyenTo(1001, 100000);
    cout << "SNT trong [1001, 100000]: " << dem3 << endl;
    cout << "--------------------------------------------------" << endl;

    // --- BÀI 8: Minh họa kiểm tra mật khẩu mạnh ---
    cout << "\n--- BÀI 8: KIỂM TRA MẬT KHẨU MẠNH ---" << endl;
    const char *pw1 = "MyPass123";   // Mạnh (Hoa, thường, số, >= 8)
    const char *pw2 = "password123"; // Yếu (Thiếu chữ Hoa)
    const char *pw3 = "Short1A";     // Yếu (Ngắn hơn 8 ký tự)

    cout << "Mật khẩu \"" << pw1 << "\": " << (isStrongPassword(pw1) ? "Mạnh (1)" : "Yếu (0)") << endl;
    cout << "Mật khẩu \"" << pw2 << "\": " << (isStrongPassword(pw2) ? "Mạnh (1)" : "Yếu (0)") << endl;
    cout << "Mật khẩu \"" << pw3 << "\": " << (isStrongPassword(pw3) ? "Mạnh (1)" : "Yếu (0)") << endl;
    cout << "--------------------------------------------------" << endl;

    // --- BÀI 9: Minh họa đảo ngược chuỗi tại chỗ ---
    cout << "\n--- BÀI 9: ĐẢO NGƯỢC CHUỖI ---" << endl;
    char str[] = "Chao ban moi hoc C++";

    cout << "Chuỗi gốc: \"" << str << "\"" << endl;
    daoNguocChuoi(str);
    cout << "Chuỗi đảo ngược: \"" << str << "\"" << endl;

    cout << "==================================================" << endl;

    return 0;
}