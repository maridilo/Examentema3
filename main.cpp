#include <iostream>
#include <map>
#include <string>

// Definicion de la estructura de variant
class variant {
private:
    enum type {INT, FLOAT, STRING, BOOL, LIST, MAP};
    type t;
};

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
int environment::lookup(const std::string& name) {
    auto it = vars.find(name);
    if (it != vars.end()) {
        // Elemento encontrado, devolver un valor distinto de -1
        return /* valor adecuado */;
    } else {
        // Elemento no encontrado, devolver -1
        return -1;
    }
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
    // Gestion de errores
    void error(std::string msg) {
        std::cout << msg << std::endl;
    }
    // Mostrar el entorno
    void show() {
        for (auto it = vars.begin(); it != vars.end(); ++it) {
            std::cout << it->first << " => " << it->second << std::endl;
        }
    }
};


