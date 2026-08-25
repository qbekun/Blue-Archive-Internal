#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_.CTOR_OFFSET UNITYSDK_OFFSET(0x96761E0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9676210)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int FieldInstruction_TypeDefinitionIndex = 33233;

	class FieldInstruction : public Il2CppObject
	{
	public:
		::System::Reflection::FieldInfo* _field; // 0x10

		::System::Void .ctor(::System::Reflection::FieldInfo* arg)
		{
			((::System::Void(*)(::System::Reflection::FieldInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDINSTRUCTION_TOSTRING_OFFSET))(nullptr);
		}

	};
}

