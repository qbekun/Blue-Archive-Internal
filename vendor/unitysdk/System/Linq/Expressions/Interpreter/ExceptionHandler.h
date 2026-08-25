#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_.CTOR_OFFSET UNITYSDK_OFFSET(0x9687AF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET UNITYSDK_OFFSET(0x9687B60)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9687B90)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ExceptionHandler_TypeDefinitionIndex = 33318;

	class ExceptionHandler : public Il2CppObject
	{
	public:
		::System::Type* _exceptionType; // 0x10
		::System::Int32 LabelIndex; // 0x18
		::System::Int32 HandlerStartIndex; // 0x1C
		::System::Int32 HandlerEndIndex; // 0x20
		::System::Linq::Expressions::Interpreter::ExceptionFilter* Filter; // 0x28

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg, ::System::Type* arg, ::System::Linq::Expressions::Interpreter::ExceptionFilter* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Type*, ::System::Linq::Expressions::Interpreter::ExceptionFilter*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_.CTOR_OFFSET))(arg, arg, arg, arg, arg, nullptr);
		}

		::System::Boolean Matches(::System::Type* arg)
		{
			return (return (::System::Boolean(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_MATCHES_OFFSET))(arg, nullptr);
		}

		::System::String* ToString()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_EXCEPTIONHANDLER_TOSTRING_OFFSET))(nullptr);
		}

	};
}

