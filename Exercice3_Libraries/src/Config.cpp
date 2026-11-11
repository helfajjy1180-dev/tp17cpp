#include "Config.h"
#include <fstream>
#include <string>

Config::Config() : applicationName("Application"), version(1) {}

bool Config::load(const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        return false;
    }

    std::string key;
    while (file >> key) {
        if (key == "applicationName") {
            file.ignore(1); // ignore '='
            std::getline(file, applicationName);
        } else if (key == "version") {
            file.ignore(1); // ignore '='
            file >> version;
        }
    }
    return true;
}

std::string Config::getApplicationName() const {
    return applicationName;
}

int Config::getVersion() const {
    return version;
}
