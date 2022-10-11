#ifndef MSG_H
#define MSG_H

#include <string>

/// /brief Pure interface class
class Msg {
public:
    /// /brief Method must be overwritten 
    std::string virtual getType() = 0;
};

class IntMsg: public Msg {
public:
    std::string virtual getType();
    void setData(int i);
    int getData();
    const std::string TYPE = "INT_MSG";
private:
    int data;
};

class DblMsg: public Msg {
public:
    std::string virtual getType();
    void setData(double d);
    double getData();
    const std::string TYPE = "DBL_MSG";
private:
    double data;
};

#endif