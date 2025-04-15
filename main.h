#ifndef MAIN_H
#define MAIN_H

#include <iostream>
#include <string>

#include "data.h"
#include "config.h"
#include "clocking.h"

using std::cout;
using std::cin;
using std::string;

string algorithm(bool heap, bool fore, int times =max_times);          // 对应算法，返回对应算法名称字符串格式

#endif
