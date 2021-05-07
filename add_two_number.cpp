#include <iostream>
int main()
{
    std::cout << "输入两个数字：" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
//    cin 表示 标准输入；cout 表示 标准输出
    std::cout << "数字 " << v1 << " 和 " << v2
              << " 的和是 " << v1 + v2 << std::endl;
    return 0;
}