#pragma once
#include "LearnCode.h"
#include "Class.h"
#include "File.h"

class File;
class FunctionDetails;
enum EFunctionType
{
    UFunction,
    PureFunction,
};

struct ParameterPair
{
    FClass ClassType;
    string  ParaName;
};




class FunctionBase
{
    
};

class FunctionDetails
{
    string FunctionName;
    FClass  ReturnClass;
    vector<ParameterPair> ParameterPairs;
};


class FunctionDeclaration
{
public:

    class Function* OwnerFunction;
    class FunctionDetails Details;
    class FunctionBody* GetBody();

    File* FileOwner;
};

class FunctionBody
{
public:

    class Function* OwnerFunction;
    class FunctionDetails Details;

    FunctionDeclaration* GetDeclaration();
    vector<string> BodyString;
};


class Function : public FunctionBase
{
public:
    Function();
    
    EFunctionType FunctionType;
    FunctionDeclaration* Declaration;
    FunctionBody* Body;

    bool bGlobalFunction;

    string FunuctionName;
    
    
};

