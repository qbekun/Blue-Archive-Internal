#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AC640)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET UNITYSDK_OFFSET(0x96A0590)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int RuntimeVariables_TypeDefinitionIndex = 33460;

	class RuntimeVariables : public Il2CppObject
	{
	public:
		::Il2CppArray<::System::Object*>* _boxes; // 0x10

		::System::Void .ctor(::Il2CppArray<::System::Object*>* arg)
		{
			((::System::Void(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Runtime::CompilerServices::IRuntimeVariables* Create(::Il2CppArray<::System::Object*>* arg)
		{
			return (return (::System::Runtime::CompilerServices::IRuntimeVariables*(*)(::Il2CppArray<::System::Object*>*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_RUNTIMEVARIABLES_CREATE_OFFSET))(arg, nullptr);
		}

	};
}

