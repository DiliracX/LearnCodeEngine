
#include "LearnCode.h"


class Field
{
public:
    Field*Parent;

    vector<Field*> ChildFields;
    int FieldCount;
};
    
class Statement :public Field
{
public:
   
    
};


class If_Field:public Field
{
public:
    
};


class Else_Field:public Field
{
public:
    
}; 

class Switch_Field:public Field
{
public:
    
};

class Case_Field:public Field
{
public:
    
};

class Loop:public Field
{
public:
    
};

class WhileLoop_Field:public Loop
{
public:
    
};

class ForLoopEz_Field:public Loop
{
public:
    
};

class ForLoop_Field:public Loop
{
public:
    
};

class DoWhileLoop_Field:public Loop
{
public:
    
};