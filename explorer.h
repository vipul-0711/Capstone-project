#ifndef EXPLORE_H
#define EXPLORE_H

#include <filesystem>
#include <string>

namespace fs = std::filesystem;

void listFiles(const fs::path& path);
void changeDirectory(fs::path& currentPath);
void createFile(const fs::path& currentPath);
void deleteFile(const fs::path& currentPath);
void copyFile(const fs::path& currentPath);
void moveFile(const fs::path& currentPath);
void searchFile(const fs::path& path, const std::string& fileName);
void changePermissions(const fs::path& currentPath);
void showMenu();

#endif

