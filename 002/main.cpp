#include<iostream>
#include<Windows.h>



template<typename T>
T Min(T a, T  b) {
    if (a > b)
    {
        return b;
    }
    else
    {
        return a;
    }
}
template <>
char Min<char>(char a, char b)
{
    std::cout << "数字以外は代入できません" << std::endl;
    return 0;
}

int main() {

    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    printf("%d\n", Min<int>(3, 5));
    printf("%f\n", Min<float>(3.2f, 1.5f));
    printf("%lf\n", Min<double>(9.1, 4.8));

    Min('a', 'b');


    return 0;
}