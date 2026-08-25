#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_.CTOR_OFFSET UNITYSDK_OFFSET(0x9683A60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9688580)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InterpretedFrameInfo_TypeDefinitionIndex = 33324;

	class InterpretedFrameInfo : public Il2CppObject
	{
	public:
		::System::String* _methodName; // 0x10
		::System::Linq::Expressions::Interpreter::DebugInfo* _debugInfo; // 0x18

		::System::Void .ctor(::System::String* str, ::System::Linq::Expressions::Interpreter::DebugInfo* arg)
		{
			((::System::Void(*)(::System::String*, ::System::Linq::Expressions::Interpreter::DebugInfo*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_.CTOR_OFFSET))(str, arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INTERPRETEDFRAMEINFO_TOSTRING_OFFSET))(nullptr);
		}

	};
}

