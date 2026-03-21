#pragma once
#include <string>

class NetworkHandler {
public:
    static bool RedirectTraffic();
    static void LaunchMainApp();
    
private:
    static inline std::string targetServer = "127.0.0.1";
};
