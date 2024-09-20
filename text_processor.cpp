#include <pybind11/pybind11.h>
#include <string>
#include <map>
#include <sstream>
#include <algorithm>

namespace py = pybind11;

std::map<std::string, int> word_count(const std::string &text) {
    std::map<std::string, int> counts;
    std::stringstream ss(text);
    std::string word;
    
    while (ss >> word) {
        // ทำให้คำเป็นตัวพิมพ์เล็ก
        std::transform(word.begin(), word.end(), word.begin(), ::tolower);
        counts[word]++;
    }
    return counts;
}

PYBIND11_MODULE(text_processor, m) {
    m.def("word_count", &word_count, "Count the occurrences of each word in a given text");
}
