#include <iostream>

using namespace std;

int main() {
    // 1. Khai báo biến
    // Sử dụng kiểu float để có thể nhập số thực (có phần thập phân)
    float so_thu_nhat, so_thu_hai;
    float tong, hieu;

    // 2. Nhập dữ liệu (Input)
    cout << "--- CHUONG TRINH TINH TONG VA HIEU HAI SO ---" << endl;

    // Nhập số thứ nhất
    cout << "Nhap so thu nhat: ";
    // Lệnh cin dùng để đọc dữ liệu từ bàn phím và lưu vào biến
    cin >> so_thu_nhat; 

    // Nhập số thứ hai
    cout << "Nhap so thu hai: ";
    cin >> so_thu_hai;

    // 3. Xử lý (Tính toán)
    // Tính tổng
    tong = so_thu_nhat + so_thu_hai;
    // Tính hiệu
    hieu = so_thu_nhat - so_thu_hai;

    // 4. Hiển thị kết quả (Output)
    cout << "\n--- KET QUA ---" << endl;
    cout << "Tong cua hai so la: " << tong << endl;
    cout << "Hieu cua hai so la: " << hieu << endl;

    // Trả về 0 báo hiệu chương trình kết thúc thành công
    return 0;
}