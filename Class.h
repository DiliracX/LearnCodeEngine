
#pragma once
#include "LearnCode.h"

enum EClassType
{
    E_F,
    E_U,
    E_A,
    E_E,
    E_T,
    E_S,
};

enum EBaseClassType
{
    E_INT,
    E_FLOOT,
    E_BOOL,
    E_DOUBLE,
    E_CHAR,
  
};

class FClass
{
    
public:
    FClass();
    FClass(string _ClassName);
    FClass(string _ClassName,string _FileName);


protected:

    string ClassName;
    string FileName;
    string FilePathName;
    EClassType ClassType;

    bool bIsBaseClass;
    EBaseClassType BaseClass;
};

