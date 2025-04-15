/**
 * 实现自增自减的第三方类型
 * 创建者：Carburn Ashroom
 * 2024.11.22
 */

#include "data.h"

namespace Data {
    
    Stack& Stack::operator++()
    {
        ++num;
        return *this;
    }
    
    Stack Stack::operator++(int)
    {
        Stack temp {num};
        ++num;
        return temp;
    }
    
    Heap& Heap::operator++()
    {
        ++*num;
        return *this;
    }
    
    Heap Heap::operator++(int)
    {
        Heap temp {*num};
        ++*num;
        return temp;
    }
    
}
