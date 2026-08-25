#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET UNITYSDK_OFFSET(0x9682D80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9688260)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9688250)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_.CCTOR_OFFSET UNITYSDK_OFFSET(0x96884B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int DebugInfo_TypeDefinitionIndex = 33323;

	class DebugInfo : public Il2CppObject
	{
	public:
		::System::Int32 StartLine; // 0x10
		::System::Int32 EndLine; // 0x14
		::System::Int32 Index; // 0x18
		::System::String* FileName; // 0x20
		::System::Boolean IsClear; // 0x28
		DebugInfoComparer* s_debugComparer; // 0x0

		::System::Linq::Expressions::Interpreter::DebugInfo* GetMatchingDebugInfo(::Il2CppArray<::System::Object*>* arg, ::System::Int32 arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::DebugInfo*(*)(::Il2CppArray<::System::Object*>*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_GETMATCHINGDEBUGINFO_OFFSET))(arg, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_TOSTRING_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_.CTOR_OFFSET))(nullptr);
		}

		::System::Void .cctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_DEBUGINFO_.CCTOR_OFFSET))(nullptr);
		}

	};
}

