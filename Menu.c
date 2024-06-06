#include <iostream>
#include <string>

int main() {
    std::string playerName, gameName;
    
    std::cout << "Enter your player name: ";
    std::cin >> playerName;
    
    std::cout << "Enter the game name: ";
    std::cin >> gameName;
    
    std::cout << "Welcome to Alien Isolation Admin\n";
    
    // Player Menu
    bool playerMenuEnabled = true;
    std::string adminOption;
    
    while (true) {
        std::cout << "Player Menu: DVA\nAdmin Menu\n";
        std::cout << "Enable/Disable Player Menu (Type 'enable' or 'disable'): ";
        std::cin >> adminOption;
        
        if (adminOption == "enable") {
            playerMenuEnabled = true;
            std::cout << "Player Menu Enabled\n";
        } else if (adminOption == "disable") {
            playerMenuEnabled = false;
            std::cout << "Player Menu Disabled\n";
        }
        
        // Admin Options
        if (!playerMenuEnabled) {
            std::cout << "Admin Options:\n";
            std::cout << "1. Freeze Players\n";
            std::cout << "2. IP Logger\n";
            std::cout << "3. Mass Report a User\n";
            std::cout << "4. Cookie Jack a Player\n";
            std::cout << "5. Crash Player\n";
            std::cout << "6. Kick Player\n";
            std::cout << "7. Flag Player\n";
            
            // Redirect to main menu
            std::cout << "Redirecting to the main menu...\n";
        }
    }
    
    return 0;
}
