#pragma once
#include "unitysdk.h"

#define DEBUGINFOCOMPARER_SYSTEM.COLLECTIONS.GENERIC.ICOMPARER_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.DEBUGINFO_.COMPARE_OFFSET UNITYSDK_OFFSET(0x9688540)
#define DEBUGINFOCOMPARER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9688530)

	inline static constexpr unsigned int DebugInfoComparer_TypeDefinitionIndex = 33322;

	class DebugInfoComparer : public Il2CppObject
	{
	public:
		::System::Int32 System.Collections.Generic.IComparer_System.Linq.Expressions.Interpreter.DebugInfo_.Compare(::System::Linq::Expressions::Interpreter::DebugInfo* arg, ::System::Linq::Expressions::Interpreter::DebugInfo* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::DebugInfo*, ::System::Linq::Expressions::Interpreter::DebugInfo*, ::PVOID))((::PBYTE)hIl2Cpp + DEBUGINFOCOMPARER_SYSTEM.COLLECTIONS.GENERIC.ICOMPARER_SYSTEM.LINQ.EXPRESSIONS.INTERPRETER.DEBUGINFO_.COMPARE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEBUGINFOCOMPARER_.CTOR_OFFSET))(nullptr);
		}

	};

