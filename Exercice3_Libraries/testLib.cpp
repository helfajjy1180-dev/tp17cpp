#include <iostream>
#include "Logger.h"
#include "Config.h"

int main() {
    Logger::getInstance().log("Demarrage du programme");

    Config config;
    if (config.load("config.txt")) {
        std::cout << "Application : " << config.getApplicationName() << std::endl;
        std::cout << "Version : " << config.getVersion() << std::endl;
    } else {
        std::cout << "Impossible d'ouvrir config.txt" << std::endl;
    }

    Logger::getInstance().log("Fin du programme");
    return 0;
}
