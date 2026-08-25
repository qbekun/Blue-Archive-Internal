#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_.CTOR_OFFSET UNITYSDK_OFFSET(0x969AD80)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET UNITYSDK_OFFSET(0x969ADF0)
#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET UNITYSDK_OFFSET(0x969B0D0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int IndexMethodByRefUpdater_TypeDefinitionIndex = 33333;

	class IndexMethodByRefUpdater : public Il2CppObject
	{
	public:
		::System::Reflection::MethodInfo* _indexer; // 0x18
		Il2CppObject* _obj; // 0x20
		::Il2CppArray<::System::Object*>* _args; // 0x38

		::System::Void .ctor(Il2CppObject* arg, ::Il2CppArray<::System::Object*>* arg, ::System::Reflection::MethodInfo* arg, ::System::Int32 arg)
		{
			((::System::Void(*)(Il2CppObject*, ::Il2CppArray<::System::Object*>*, ::System::Reflection::MethodInfo*, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_.CTOR_OFFSET))(arg, arg, arg, arg, nullptr);
		}

		::System::Void Update(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg, ::System::Object* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::System::Object*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UPDATE_OFFSET))(arg, arg, nullptr);
		}

		::System::Void UndefineTemps(::System::Linq::Expressions::Interpreter::InstructionList* arg, ::System::Linq::Expressions::Interpreter::LocalVariables* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InstructionList*, ::System::Linq::Expressions::Interpreter::LocalVariables*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INDEXMETHODBYREFUPDATER_UNDEFINETEMPS_OFFSET))(arg, arg, nullptr);
		}

	};
}

