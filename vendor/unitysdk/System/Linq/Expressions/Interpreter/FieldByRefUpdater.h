#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969A970)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x969A9D0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x969AA60)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int FieldByRefUpdater_TypeDefinitionIndex = 33331;

	class FieldByRefUpdater : public Il2CppObject
	{
	public:
		Il2CppObject* _object; // 0x18
		::System::Reflection::FieldInfo* _field; // 0x30

		::System::Void .ctor(Il2CppObject* arg, ::System::Reflection::FieldInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::System::Reflection::FieldInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Linq::Expressions::Interpreter::LocalVariables* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_FIELDBYREFUPDATER_UNDEFINETEMPS_OFFSET))(arg, arg, nullptr);
		}

	};
}

