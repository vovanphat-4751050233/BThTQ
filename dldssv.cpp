#include<stdio.h>
#include<string.h> 
struct SinhVien{
    char maSv[10];
    char hoTen[50];
    int tuoi;
    float diemTB;
};
//khai trien ham nhap thong tin mot sinh vien 
void nhapSV(struct SinhVien *sv){
printf("-> Nhap Ma sinh vien: ");
scanf("%s",sv->maSv);
while (getchar() != '\n');
printf("->nhap ho ten:");
//fgets an toàn hơn scanf khi dùng có khoảng trắng 
fgets(sv->hoTen,50,stdin);
sv->hoTen[strcspn(sv->hoTen,"\n")] = 0;

    printf("  -> Nhap Tuoi: ");
    scanf("%d", &sv->tuoi);
    
    printf("  -> Nhap Diem trung binh: ");
    scanf("%f", &sv->diemTB);

}
//Yêu cầu 2 nhập danh sách sinh viên 
void danhSach(struct SinhVien ds[],int *n){
    printf("nhap so luong sinh vien (n):");
    scanf("%d",n);
    for(int i=0;i<*n;i++){
        printf("\n nhap thong tin sinh vien thu %d --\n", i+1);
        nhapSV(&ds[i]);
    }
}
void xuatSV(struct SinhVien sv){
    printf("%-10s | %-30s | %-5d | %.2f\n",sv.maSv,sv.hoTen,sv.tuoi,sv.diemTB);
}
// Yêu cầu 3: Xuất danh sách sinh viên
// ----------------------------------------------------
void xuatDanhSach(struct SinhVien ds[], int n) {
    printf("\n\n=============== DANH SACH SINH VIEN ===============\n");
    printf("%-10s | %-30s | %-5s | %s\n", 
           "Ma SV", "Ho Ten", "Tuoi", "Diem TB");
    printf("---------------------------------------------------\n");
    
    for (int i = 0; i < n; i++) {
        xuatSV(ds[i]);
    }
    printf("===================================================\n");
}

// ----------------------------------------------------
// Yêu cầu 4: Tìm sinh viên có điểm trung bình cao nhất
// ----------------------------------------------------
void timDiemCaoNhat(struct SinhVien ds[], int n) {
    if (n == 0) {
        printf("\nDanh sach rong, khong the tim kiem.\n");
        return;
    }

    int viTriMax = 0; // Giả sử sinh viên đầu tiên có điểm cao nhất
    
    // Duyệt từ phần tử thứ 2 để so sánh
    for (int i = 1; i < n; i++) {
        if (ds[i].diemTB > ds[viTriMax].diemTB) {
            viTriMax = i; // Cập nhật vị trí mới
        }
    }

    printf("\n--- SINH VIEN CO DIEM TRUNG BINH CAO NHAT ---\n");
    printf("%-10s | %-30s | %-5s | %s\n", 
           "Ma SV", "Ho Ten", "Tuoi", "Diem TB");
    printf("---------------------------------------------------\n");
    xuatSV(ds[viTriMax]);
}
// Yêu cầu 5: Sắp xếp danh sách theo điểm trung bình giảm dần
void sapXepGiamDan(struct SinhVien ds[], int n) {
    struct SinhVien temp; // Biến tạm để hoán đổi
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Nếu điểm trước (ds[i]) < điểm sau (ds[j]) thì hoán đổi để đưa điểm cao lên trước
            if (ds[i].diemTB < ds[j].diemTB) {
                // Hoán đổi 
                temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
    
    printf("\n--- DANH SACH DA SAP XEP GIAM DAN THEO DIEM TB ---\n");
    xuatDanhSach(ds, n);
}
int main() {
    struct SinhVien danhSachSV[100]; // Mảng chứa tối đa 100 sinh viên
    int soLuongSV = 0;
    // 1. Nhập danh sách
    danhSach(danhSachSV, &soLuongSV);
       // 2. Xuất danh sách
    xuatDanhSach(danhSachSV, soLuongSV);
    
    // 3. Tìm sinh viên có điểm cao nhất
    timDiemCaoNhat(danhSachSV, soLuongSV);
    
    // 4. Sắp xếp và xuất danh sách đã sắp xếp
    sapXepGiamDan(danhSachSV, soLuongSV);
    
    return 0;
}
