#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969A6B0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x969A710)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x969A840)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int ArrayByRefUpdater_TypeDefinitionIndex = 33330;

	class ArrayByRefUpdater : public Il2CppObject
	{
	public:
		::System::Linq::Expressions::Interpreter::LocalDefinition* _array; // 0x18
		::System::Linq::Expressions::Interpreter::LocalDefinition* _index; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::LocalDefinition* arg, ::System::Linq::Expressions::Interpreter::LocalDefinition* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LocalDefinition*, ::System::Linq::Expressions::Interpreter::LocalDefinition*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Linq::Expressions::Interpreter::LocalVariables* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_ARRAYBYREFUPDATER_UNDEFINETEMPS_OFFSET))(arg, arg, nullptr);
		}

	};
}

