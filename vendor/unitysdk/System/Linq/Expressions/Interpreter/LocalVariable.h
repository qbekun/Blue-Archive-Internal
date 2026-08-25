#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x969A6A0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET UNITYSDK_OFFSET(0x96A0600)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET UNITYSDK_OFFSET(0x969A690)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A0620)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x96A0670)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int LocalVariable_TypeDefinitionIndex = 33360;

	class LocalVariable : public Il2CppObject
	{
	public:
		::System::Int32 Index; // 0x10
		::System::Int32 _flags; // 0x14

		::System::Boolean get_IsBoxed()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_ISBOXED_OFFSET))(nullptr);
		}

		::System::Void set_IsBoxed(::System::Boolean arg)
		{
			((::System::Void(*)(::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_SET_ISBOXED_OFFSET))(arg, nullptr);
		}

		::System::Boolean get_InClosure()
		{
			return (return (::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_GET_INCLOSURE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Int32 arg, ::System::Boolean arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Boolean, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_LOCALVARIABLE_TOSTRING_OFFSET))(nullptr);
		}

	};
}

