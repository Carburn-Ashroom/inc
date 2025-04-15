#ifndef DATA_H
#define DATA_H

namespace Data {             // 该名字空间负责模拟自增自减

    class Stack {       // Stack是一个管理栈变量的数据类型
    public:
        explicit Stack(int num =0) : num{num} { }
        Stack& operator++();             // 前置++
        Stack operator++(int);       // 后置++
        bool operator!=(int n) const { return num!=n; }
    private:
        int num;
    };
    
    class Heap {          // Heap是一个管理堆数据的数据类型
    public:
        explicit Heap(int num =0) : num{new int {num}} { }
        Heap& operator++();        // 前置++
        Heap operator++(int);          // 后置++
        bool operator!=(int n) const { return n!=*num; }
        ~Heap() { delete num; }
    private:
        int* num;
    };
    
}

#endif
