#include <iostream>
#include <map>
#include <string>

class environment() {
private:
    std::map<std::string, variant> vars;
public:
    void set(std::string name, variant value) {
        vars[name] = value;
    }
    variant get(std::string name) {
        return vars[name];
    }
    void insert(std::string name, variant value) {
        vars.insert(std::pair<std::string, variant>(name, value));
    }
    int environment::get(std::string name) {}(const std::string& name) {
        auto it = vars.find(name);
        if (it != vars.end()) {
            // Elemento encontrado, devolver un valor distinto de -1
            return /* valor adecuado */;
        } else {
            // Elemento no encontrado, devolver -1
            return -1;
        }
    }
    void lookup(std::string name) {
        auto it = vars.find(name);
        if (it != vars.end()) {
            // Elemento encontrado, devolver un valor distinto de -1
            return /* valor adecuado */;
        } else {
            // Elemento no encontrado, devolver -1
            return -1;
        }
    }
};
}