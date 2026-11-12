#include <iostream>

// 定义一个命名空间
namespace MyNamespace {
    // 命名空间内的变量，具有命名空间作用域
    int namespaceVar = 20;

    void printVar() {
        std::cout << "Inside MyNamespace: namespaceVar = " << namespaceVar << std::endl;
    }
    
    int globalVar = 0;
}

namespace MyNamespace2 {  
    int globalVar = 0;
}

int main() {
    // 使用命名空间前缀访问变量
    std::cout << "Outside MyNamespace: namespaceVar = " << MyNamespace::namespaceVar << std::endl;
    MyNamespace::printVar(); // 访问命名空间内的函数
    return 0;
}
