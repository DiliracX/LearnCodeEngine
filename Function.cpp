#include "Function.h"

FunctionBody* FunctionDeclaration::GetBody()
{
  return OwnerFunction->Body;
}

FunctionDeclaration* FunctionBody::GetDeclaration()
{
  return   OwnerFunction->Declaration;
}

Function::Function()
{
}
