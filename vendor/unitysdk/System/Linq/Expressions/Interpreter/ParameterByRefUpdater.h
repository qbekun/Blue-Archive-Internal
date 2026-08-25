#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969A430)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x969A470)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ParameterByRefUpdater_TypeDefinitionIndex = 33329;

	class ParameterByRefUpdater : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalVariable* _parameter; // 0x18

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::LocalVariable* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LocalVariable*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_.CTOR_OFFSET))(arg, arg, nullptr);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_PARAMETERBYREFUPDATER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

	};
}

