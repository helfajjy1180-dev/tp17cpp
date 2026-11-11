#ifndef CONFIG_H
#define CONFIG_H

#include <string>

class Config {
private:
    std::string applicationName;
    int version;

public:
    Config();
    bool load(const std::string& filename);
    std::string getApplicationName() const;
    int getVersion() const;
};

#endif
