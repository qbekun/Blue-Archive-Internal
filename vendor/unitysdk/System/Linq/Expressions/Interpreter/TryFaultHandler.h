#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x96881C0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int TryFaultHandler_TypeDefinitionIndex = 33320;

	class TryFaultHandler : public Il2CppObject
	{
	public:
		::System::Int32 TryStartIndex; // 0x10
		::System::Int32 TryEndIndex; // 0x14
		::System::Int32 FinallyStartIndex; // 0x18
		::System::Int32 FinallyEndIndex; // 0x1C

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_TRYFAULTHANDLER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

	};
}

