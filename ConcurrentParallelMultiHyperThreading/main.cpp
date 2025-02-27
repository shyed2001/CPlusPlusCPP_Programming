#include <iostream>
#include <thread>
#ifdef _WIN32
#include <windows.h>
#elif defined(__linux__)
#include <fstream>
#include <sstream>
#endif

unsigned int get_logical_cores() {
    return std::thread::hardware_concurrency();
}

#ifdef _WIN32
unsigned int get_physical_cores() {
    SYSTEM_INFO sysInfo;
    GetSystemInfo(&sysInfo);
    return sysInfo.dwNumberOfProcessors;
}
#elif defined(__linux__)
unsigned int get_physical_cores() {
    unsigned int cores = 0;
    std::ifstream cpuinfo("/proc/cpuinfo");
    std::string line;
    while (std::getline(cpuinfo, line)) {
        if (line.find("physical id") != std::string::npos) {
            cores++;
        }
    }
    return cores > 0 ? cores : 0;
}
#else
unsigned int get_physical_cores() {
    // Fallback for other platforms
    return 0;
}
#endif

int main() {
    unsigned int logical_cores = get_logical_cores();
    unsigned int physical_cores = get_physical_cores();

    if (logical_cores == 0 || physical_cores == 0) {
        std::cout << "Unable to determine the number of CPU cores." << std::endl;
    } else {
        std::cout << "Logical CPU cores: " << logical_cores << std::endl;
        std::cout << "Physical CPU cores: " << physical_cores << std::endl;
    }

    return 0;
}
