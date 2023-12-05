#include <iostream>
#include <map>
#include <string>

// Definicion de la estructura de environment
class environment() {
private:
    // Definicion de la estructura de variant
    std::map<std::string, variant> vars;
public:
    void set(std::string name, variant value) {
        vars[name] = value;
    }
    variant get(std::string name) {
        return vars[name];
    }
    // Insertar simbolos
    void insert(std::string name, variant value) {
        vars.insert(std::pair<std::string, variant>(name, value));
    }
    // Busqueda de simbolos
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