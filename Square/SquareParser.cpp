#include "pch.h"
#include "SquareParser.h"

IShape* SquareParser::parse(std::stringstream data) noexcept(false)
{
    IShape* result = nullptr;
    regex floatPattern("[+-]?([0-9]+([.][0-9]*)?|[.][0-9]+)");

    if (data.str() == "") {
        return nullptr;
    }
    else {
        string first;
        float len;

        getline(data, first, ',');
        stringstream first_ss(first);

        string buffer; // Lưu số đằng sau dấu =
        getline(first_ss, buffer, '=');
        getline(first_ss, buffer, '=');

        string end; // Lưu những kí tự còn lại 
        getline(data, end);

        // Kiểm tra điều kiện:
        // Nếu vẫn còn thông tin dư. VD: Square: a = 10, (phần dư)
        // Nếu sau đó chỉ còn lại dấu ','. VD: Square: a = 10,
        // Nếu số không đúng định dạng float
        if (end != "" || *(--data.str().end()) == ','
            || !regex_match(buffer, floatPattern)) {
            return nullptr;
        }

        // Hàm stof có thể chứa các exception nên cứ đưa vào khối try
        // Nếu xảy ra lỗi thì ta trả về nullptr luôn, tránh break chương trình
        try {
            len = stof(buffer);          // Lỗi không chuyển được
            result = new mySquare::Square(len);    // Lỗi khởi tạo
        }
        catch (...) {
            return nullptr;
        }
    }

    return result;
}