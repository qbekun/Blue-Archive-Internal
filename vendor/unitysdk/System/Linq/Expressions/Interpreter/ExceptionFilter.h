#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONFILTER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9687AB0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionFilter_TypeDefinitionIndex = 33317;

	class ExceptionFilter : public Il2CppObject
	{
	public:
		::System::Int32 LabelIndex; // 0x10
		::System::Int32 StartIndex; // 0x14
		::System::Int32 EndIndex; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONFILTER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};
}

