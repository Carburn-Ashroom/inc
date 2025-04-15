/**
 * 测试自增自减的速度
 * 用于测试自增自减的速度差别
 * C++编写，MinGW-w64编译
 * 作者：Carburn Ashroom
 */

#include "main.h"

int main(int argc, char** argv)
{
    cout.sync_with_stdio(false);
    string input;
    cout << "请输入是否使用堆(1/0)：";
    std::getline(cin, input);
    char heap {input.front()};
    cout << "请输入是否使用前置(1/0)：";
    std::getline(cin, input);
    char fore {input.front()};
    Clock::Clock clock;
    string algo {algorithm(heap=='1', fore=='1')};
    cout << algo << " 用时 " << clock << " 毫秒";
    std::getline(cin, input);
    return 0;
}

string algorithm(bool heap, bool fore, int times)
{
    volatile auto t = time(nullptr);
    string data_type;
    if (heap) {
        data_type = "堆";
        if (fore) {
            for (Data::Heap i{}; i!=times; ++i)
                if (t == 1)
                    cout << "不可能运行这行cout，但是编译器不知道";
        }
        else
            for (Data::Heap i{}; i!=times; i++)
                if (t == 1)
                    cout << "不可能运行这行cout，但是编译器不知道";
    }
    else {
        data_type = "栈";
        if (fore) {
            for (Data::Stack i{}; i!=times; ++i)
                if (t == 1)
                    cout << "不可能运行这行cout，但是编译器不知道";
        }
        else
            for (Data::Stack i{}; i!=times; i++)
                if (t == 1)
                    cout << "不可能运行这行cout，但是编译器不知道";
    }
    return data_type+"数据的"+((fore) ? "前" : "后")+"置++";
}
