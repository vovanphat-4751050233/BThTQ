#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 100

// Định nghĩa Stack
typedef struct {
    char data[MAX];
    int top;
} Stack;

// Khởi tạo stack
void init(Stack *s) {
    s->top = -1;
}

// Kiểm tra rỗng
bool isEmpty(Stack *s) {
    return s->top == -1;
}

// Đẩy phần tử vào stack
void push(Stack *s, char c) {
    s->data[++(s->top)] = c;
}

// Lấy phần tử trên cùng ra khỏi stack
char pop(Stack *s) {
    return s->data[(s->top)--];
}

// Lấy phần tử đỉnh nhưng không xoá
char peek(Stack *s) {
    return s->data[s->top];
}

// Kiểm tra có khớp ngoặc hay không
bool isMatching(char open, char close) {
    return (open == '(' && close == ')') ||
           (open == '[' && close == ']') ||
           (open == '{' && close == '}');
}

// Hàm kiểm tra cân bằng ngoặc
bool checkBalance(char *expr) {
    Stack s;
    init(&s);

    for (int i = 0; i < strlen(expr); i++) {
        char c = expr[i];

        // Nếu là ngoặc mở → đẩy vào stack
        if (c == '(' || c == '[' || c == '{') {
            push(&s, c);
        }
        // Nếu là ngoặc đóng → kiểm tra với đỉnh stack
        else if (c == ')' || c == ']' || c == '}') {
            if (isEmpty(&s)) return false; // không có gì để so sánh
            char top = pop(&s);
            if (!isMatching(top, c)) return false;
        }
    }

    // Sau khi duyệt xong, nếu stack rỗng thì ok
    return isEmpty(&s);
}

int main() {
    char expr[MAX];
    printf("Nhap bieu thuc: ");
    fgets(expr, MAX, stdin);

    if (checkBalance(expr))
        printf("=> Cac dau ngoac CAN BANG!\n");
    else
        printf("=> Cac dau ngoac KHONG CAN BANG!\n");

    return 0;
}