#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CONVERTHELPER_TOINT32NONULL_OFFSET UNITYSDK_OFFSET(0x966BD00)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ConvertHelper_TypeDefinitionIndex = 33152;

	class ConvertHelper : public Il2CppObject
	{
	public:
		::System::Int32 ToInt32NoNull(::System::Object* arg)
		{
			return (return (::System::Int32(*)(::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_CONVERTHELPER_TOINT32NONULL_OFFSET))(arg, nullptr);
		}

	};
}

