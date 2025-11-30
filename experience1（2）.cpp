#include <iostream>

int main()
{
    double r, h, volume;
    const double PI = 3.14;
    std::cout << "请输入圆锥的半径：" << std::endl;
    std::cin >> r;
    std::cout << "请输入圆锥的高：" << std::endl;
    std::cin >> h;
    volume = (PI * r * r * h) / 3;
    std::cout << "圆锥的体积为：" << volume << std::endl;
}

