#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_.CTOR_OFFSET UNITYSDK_OFFSET(0x966C420)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x966C430)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeLabel_TypeDefinitionIndex = 33153;

	class RuntimeLabel : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Int32 StackDepth; // 0x14
		::System::Int32 ContinuationStackDepth; // 0x18

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMELABEL_TOSTRING_OFFSET))(nullptr);
		}

	};
}

