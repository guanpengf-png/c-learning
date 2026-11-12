#include <iostream>

int main()
{
    // 1. 浮点数：默认是 double，值为 3.14
    double pai_val = 3.14;

    // 2. 整数
    int int_val = 5;

    // 3. 布尔：-100 是非 0 值，转换成 bool 就是 true
    bool bool_val = -100;

    std::cout << "pai_val  = " << pai_val << '\n';
    std::cout << "int_val  = " << int_val << '\n';

    // 默认输出 1/0，加上 std::boolalpha 才会输出 true/false
    std::cout << "bool_val (default) = " << bool_val << '\n';
    std::cout << "bool_val (boolalpha) = " << std::boolalpha << bool_val << '\n';

    return 0;
}
