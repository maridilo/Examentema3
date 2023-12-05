#include<iostream>
#include <map>
#include<string>


class variant {
private:
    enum type {INT, FLOAT, STRING, BOOL, LIST, MAP};
    type t;
};

class environment {
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
    
};
public:

};
