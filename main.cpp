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
    // Constructor
    void set(std::string name, variant value) {
        vars[name] = value;
    }
    // Obtener simbolos
    variant get(std::string name) {
        return vars[name];
    }
    // Insertar simbolos
    void insert(std::string name, variant value) {
        vars.insert(std::pair<std::string, variant>(name, value));
    }
    void remove(std::string name) {
        vars.erase(name);
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

int main() {
    environment env;
    env.insert("x", 5);
    env.insert("y", 3.14);
    env.insert("z", "hola");
    env.insert("w", true);
    env.show();
return 0;
}


