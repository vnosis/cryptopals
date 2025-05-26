#pragma once

inline char hexCharToValue(char c) {
    return (c >= '0' && c <= '9') ? c - '0'
         : (c >= 'A' && c <= 'F') ? c - 'A' + 10
         : (c >= 'a' && c <= 'f') ? c - 'a' + 10
         : 0;
}

inline std::string hexToAscii(const std::string& hex) {
    std::string returnString;
    returnString.reserve(hex.length() / 2);
    for (size_t i = 0; i < hex.length(); i += 2) {
        returnString += static_cast<char>((hexCharToValue(hex[i]) << 4) | hexCharToValue(hex[i + 1]));
    }
    return returnString;
}