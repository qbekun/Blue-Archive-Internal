#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET UNITYSDK_OFFSET(0x969ACD0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHelpers_TypeDefinitionIndex = 33505;

	class ExceptionHelpers : public Il2CppObject
	{
	public:
		::System::Void UnwrapAndRethrow(::System::Reflection::TargetInvocationException* arg)
		{
			((::System::Void(*)(::System::Reflection::TargetInvocationException*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHELPERS_UNWRAPANDRETHROW_OFFSET))(arg, nullptr);
		}

	};
}

