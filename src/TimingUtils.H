#ifndef TIMINGUTILS_H
#define TIMINGUTILS_H

#include <chrono>
#include <iomanip>
#include <string>

#include <AMReX_Print.H>

inline void reportTiming(const std::string& label,
                         std::chrono::high_resolution_clock::time_point start,
                         std::chrono::high_resolution_clock::time_point end) {
    std::chrono::duration<double> elapsed = end - start;
    amrex::Print() << "TIME:   " << label << ": " << std::fixed << std::setprecision(2) << elapsed.count() << "s\n";
}

#endif
