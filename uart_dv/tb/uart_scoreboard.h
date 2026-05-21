#pragma once
#include <queue>
#include <iostream>

class UartScoreboard {
public:
    std::queue<uint8_t> exp;

    void push(uint8_t d) {
        exp.push(d);
    }

    bool check(uint8_t got) {
        if(exp.empty()) return false;

        uint8_t e = exp.front();
        exp.pop();

        if(e == got) {
            std::cout << "[SB PASS] " << (int)got << "\n";
            return true;
        } else {
            std::cout << "[SB FAIL] exp=" << (int)e
                      << " got=" << (int)got << "\n";
            return false;
        }
    }
};
