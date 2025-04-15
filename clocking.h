#ifndef CLOCKING_H
#define CLOCKING_H

#include <chrono>
#include <iostream>

namespace Clock {          // 该名字空间负责计时
    
    using namespace std::chrono;
    using std::ostream;
    
    class Clock {          // Clock类是一个计时器
    public:
        Clock() : begin{high_resolution_clock::now()} { }
        int get() const;             // 获取计时时间
    private:
        decltype(high_resolution_clock::now()) begin;
    };
    
    ostream& operator<<(ostream& ostr, const Clock& clock);        // 输出计时器结果

}

#endif
