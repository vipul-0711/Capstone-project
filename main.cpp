#include "explore.h"
#include <iostream>

int main() {
    fs::path currentPath = fs::current_path();
    int choice;

    while (true) {
        std::cout << "\nCurrent Path: " << currentPath << "\n";
        showMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: listFiles(currentPath); break;
            case 2: changeDirectory(currentPath); break;
            case 3: createFile(currentPath); break;
            case 4: deleteFile(currentPath); break;
            case 5: copyFile(currentPath); break;
            case 6: moveFile(currentPath); break;
            case 7: {
                std::string fname;
                std::cout << "Enter file name to search: ";
                std::cin >> fname;
                searchFile(currentPath, fname);
                break;
            }
            case 8: changePermissions(currentPath); break;
            case 9: std::cout << "Exiting...\n"; return 0;
            default: std::cout << "Invalid choice.\n"; break;
        }
    }

    return 0;
}

