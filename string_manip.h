#pragma once
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

namespace StringManip {
    /**
     * @brief
     * Splits the given string by the given delimiter and returns the parts.
     * 
     * @param str
     * The string to split.
     * 
     * @param delimiter
     * The delimiter to split the string after.
     * 
     * @returns
     * The parts of the split string.
     */
    std::vector<std::string> split(const std::string& str, char delimiter) {
        std::vector<std::string> parts;
        std::stringstream ss(str);
        std::string part;

        while (std::getline(ss, part, delimiter)) {
            parts.push_back(std::move(part));
        }

        return parts;
    }

    /**
     * @brief
     * Turns all characters in the given string to lowercase.
     */
    std::string lower(std::string str) {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
            return std::tolower(c);
        });

        return str;
    }

    std::string upper(std::string str) {
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
            return std::toupper(c);
        });

        return str;
    }
}