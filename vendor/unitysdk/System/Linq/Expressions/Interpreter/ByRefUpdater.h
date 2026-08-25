#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969A400)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x000000)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x969A420)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ByRefUpdater_TypeDefinitionIndex = 33328;

	class ByRefUpdater : public Il2CppObject
	{
	public:
		::System::Int32 ArgumentIndex; // 0x10

		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Linq::Expressions::Interpreter::LocalVariables* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_BYREFUPDATER_UNDEFINETEMPS_OFFSET))(arg, arg, nullptr);
		}

	};
}

