/*Bài 1. Viết chương trình nhập từ bàn phím và sau đó xuất lên màn hình các thông tin của một mặt hàng bao gồm: Tên mặt hàng, trọng lượng, đơn giá, mã chất lượng, số lượng*/
#include<stdio.h>
int main(){
    char tenmh[50];
    float tl,dg;
    char mcl[10];
    int sl; 
    printf("Nhap ten mat hang :"); scanf("%s",&tenmh);
    printf("Nhap trong luong :"); scanf("%f",&tl);
    printf("Nhap don gia :"); scanf("%f",&dg);
    printf("Nhap ma chat luong :"); scanf("%s",&mcl);
    printf("Nhap so luong :"); scanf("%d",&sl);

    printf("Ten mat hang  : %s\n", tenmh);
    printf("Trong luong   : %.2f\n", tl);
    printf("Don gia       : %.2f\n", dg);
    printf("Ma chat luong : %s\n", mcl);
    printf("So luong      : %d\n", sl);

    return 0;


}
/* bai 2b*/
#include <iostream>
#include <cstdio>
using namespace std;

 main() {
	char ten[50] ;
	int chisotruoc , chisosau ;
	int soluong , thanhtien;
	
	cout << "nhap ten :";

	cin.getline(ten, 50);
	
	cout << "chi so truoc :";
	cin>>chisotruoc;
	
	cout<<"chi so sau :";
	cin>>chisosau;
	
	soluong =chisosau - chisotruoc;
	
	if (soluong <= 100) {
	
		thanhtien = soluong*1418;}
	else {
	
			if (soluong <= 150 and soluong > 100 ){
			
				thanhtien=100 * 1418 + (soluong - 100)*1622;}
			else {
			
					if (soluong <= 200 and soluong > 150){
					
						thanhtien = 100 * 1418 + 50 * 1622 + (soluong - 150)*2044;}
					else {
					
						if (soluong <= 300 and soluong > 200){
						
							thanhtien = 100* 1418 + 50 * 1622 + 50*2044 + (soluong - 200)*2210;}
						else {
						
								if (soluong <= 400 and soluong > 300){
								
									thanhtien = 100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + (soluong - 300)*2361;}
								else {
								
										thanhtien =100 * 1418 + 50 * 1622 + 50*2044 + 100*2210 + 100* 2361 + (soluong - 400)*2420;}
									}
								}
							}
						}

	cout << "tien dien :"<< thanhtien << endl;
	return 0;
}

/*bai 3*/
#include <iostream>

using namespace std;
int main() {
	int thang , nam ;
	cout<<"nhap Thang:";
	cin>>thang;
	while ( thang > 12){
		cout<<"nhap lai Thang:";
		cin>>thang;
	}
	cout<<"nhap Nam:";
	cin>>nam;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12){
		cout<<"Thang "<<thang<<" co so ngay :"<< 31 << endl;
	}
	else {
		if (thang == 4 || thang == 6 || thang == 9 || thang == 11){
			cout<<"Thang "<<thang<<" co so ngay :"<< 30 << endl;
		}
		else {
			if (nam % 4 ==0 and nam & 100 != 0){
					cout<<"Thang 2 co so ngay :"<< 29 << endl;
					
				
			}
			else {
					cout<<"Thang 2 co so ngay :"<< 28 << endl;
			}
        }
	}
	return 0;
}
/*bai 4*/
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
int t,v,th,tb;
char ten[50];
cout<<"nhap ho ten:";
cin.getline(ten, 50);
cout<<"diem toan:";
cin>>t;
cout<<"diem van:";
cin>>v;
cout<<"diem tin hoc:";
cin>>th;
cout<<"hoc sinh: "<<ten<<"|| Hoc luc:";
tb=(t+v+th)/3;
if (tb<5){
	cout<<"Yeu";
}
else {
	if(5<=tb and tb<7){
		cout<<"trung binh";
	}
	else{
		if (tb>=7 and tb <8){
			cout<<"kha";
			
		}
		else{
			cout<<"Gioi";
		}
	}
}
}
/*bai 5 */
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
float diem,diem4;
char ten[50];
string diemchu;
cout<<"nhap ho ten:";
cin.getline(ten, 50);
cout<<"diem:";
cin>>diem;
if (diem >= 9){
	diem4=4;
	diemchu ="A+";
}
else if (diem <9 and diem >= 8){
	diem4 = 3.5;
	diemchu="A";
}
else if (diem <8 and diem >= 7){
	diem4= 3;
	diemchu="B+";
}
else if (diem < 7 and diem >= 6){
	diem4 = 2.5;
	diemchu = "B";
}
else if (diem < 6 and diem >= 5){
	diem4 = 2;
	diemchu = "C";
}
else if (diem <5 and diem >=4 ){
	diem4 = 1.5;
	diemchu ="D";
}
else {
diem4 = 1;
diemchu = "F";
 
}
cout<<ten<<"|| thang diem 10 :"<<diem<<"|| thang diem 4:"<<diem4<<"|| thang diem chu:"<< diemchu<<endl;
return 0;
}
/*bai 6*/
#include <iostream>

using namespace std;
int main() {
	float tien , thang , ls;
	cout<< "tien gui:";
	cin>>tien;
	cout<<"thang gui :";
	cin>>thang;
	cout<<"lai suat : ";
	cin>> ls;
	for ( int i =0 ; i <thang ; i++){
		tien = tien + tien*ls/100;
	}
	cout<<"tien nhan:"<<tien<<endl;
	return 0;
}
/*bai 7 */
#include<iostream>

using namespace std;
int main() {
	float tien , tiennhan , ls, thang;
	cout<< "tien gui:";
	cin>>tien;
	cout<<"tiennhan :";
	cin>>tiennhan;
	cout<<"lai suat : ";
	cin>> ls;
	while (tiennhan > tien ){
		tien = tien + tien*ls/100;
		thang=thang +1;
	}
	
	cout<<"so thang:"<<thang<<endl;
	return 0;
}
/*bai 8 */
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;         
    if (n == 2) return true;          
    if (n % 2 == 0) return false;     


    int can = sqrt(n);
    for (int i = 3; i <= can; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " la so nguyen to." << endl;
    } else {
        cout << n << " khong phai so nguyen to." << endl;
    }

    return 0;
}
/* bai 9*/
#include <iostream>
using namespace std;
int main() {
	int n,gt,i;
	cout<<"n:";
	cin>>n;
	gt=1;
	i=n;
	while (i>1){
		gt=gt*i;
		i=i-2;
		
	}
	cout<<gt<<endl;
	return 0;
}
/*bai 10 */
#include <iostream>

using namespace std;
int main() {
	float tien , thang , ls;
	cout<< "tien can co:";
	cin>>tien;
	cout<<"thang gui :";
	cin>>thang;
	cout<<"lai suat : ";
	cin>> ls;
	for ( int i =0 ; i <thang ; i++){
		tien = tien - tien*ls/100;
	}
	cout<<"tien gui:"<<tien<<endl;
	return 0;
}
/*bai 11*/
#include<iostream>
using namespace std;
int main(){
    // giam bot luu luong nhap xuat
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ; //bien luu so luong bo test 
    cin>> t; 
    // dung vong lap while chạy t lan, giam bot t đi 1 
    while (t--){
       int gia_san_pham, tien_dua;
        cin >> gia_san_pham >> tien_dua; // Đọc giá sản phẩm và tiền đưa vào

        // 1. Tính tổng số tiền thừa
        int tien_thua = tien_dua - gia_san_pham;
        int tong_tien_thua = tien_thua; // Lưu lại giá trị ban đầu để in ra

        // 2. Ưu tiên trả bằng tờ $10 (phép chia số nguyên trong C++)
        int so_to_10 = tien_thua / 10;
        tien_thua %= 10; // Lấy phần dư

        // 3. Tiếp tục với tờ $5
        int so_to_5 = tien_thua / 5;
        tien_thua %= 5;

        // 4. Phần còn lại là tờ $1
        int so_to_1 = tien_thua;

        // 5. In kết quả ra màn hình theo đúng định dạng
        cout << tong_tien_thua << " = " << so_to_10 << " * 10$ + " << so_to_5 << " * 5$ + " << so_to_1 << " * 1$" << endl; 
    }
    return 0;
}
/*bai 12*/
#include <iostream>

// Hàm để xử lý cho mỗi bộ test
void solve() {
    int n, m, k;
    std::cin >> n >> m >> k;

    // Các hằng số về số lượng tối đa của mỗi loại
    const int max_type1 = 130;
    const int max_type2 = 180;
    const int max_type3 = 900;

    // Kiểm tra đồng thời cả 3 điều kiện tích lũy
    if (n <= max_type1 && (n + m) <= max_type2 && (n + m + k) <= max_type3) {
        std::cout << "YES\n";
    } else {
        std::cout << "NO\n";
    }
}

int main() {
    // Tối ưu hóa tốc độ nhập xuất
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int num_tests;
    std::cin >> num_tests; // Đọc số lượng bộ test

    while (num_tests--) {
        solve(); // Gọi hàm giải cho mỗi bộ test
    }

    return 0;
}