#include "clocking.h"

namespace Clock {
    
    int Clock::get() const
    {
        auto end = high_resolution_clock::now();
        return duration_cast<milliseconds>(end-begin).count();
    }
    
    ostream& operator<<(ostream& ostr, const Clock& clock)
    {
        ostr << clock.get();
        return ostr;
    }
    
}
