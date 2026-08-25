#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x9688200)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RethrowException_TypeDefinitionIndex = 33321;

	class RethrowException : public Il2CppObject
	{
	public:
		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RETHROWEXCEPTION_.CTOR_OFFSET))(nullptr);
		}

	};
}

