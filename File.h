#pragma once

#include "LearnCode.h"
#include "Class.h"
#include "Function.h"
class Function;

enum FileType { H,CPP };

class File
{
public:
    File();

    
    string FilePathName;
    string FileName;
    FileType Type;
    
    File* BrotherFile;

    vector<FClass*> ClassSet;
    vector<Function*> Functions;
    
};

