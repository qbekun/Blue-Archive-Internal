#pragma once
#include "../../../../unitysdk.h"

#define SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_.CTOR_OFFSET UNITYSDK_OFFSET(0x967B3B0)

namespace System::Linq::Expressions::Interpreter
{
	inline static constexpr unsigned int InstructionArray_TypeDefinitionIndex = 33273;

	class InstructionArray : public Il2CppObject
	{
	public:
		::System::Int32 MaxStackDepth; // 0x10
		::System::Int32 MaxContinuationDepth; // 0x14
		::Il2CppArray<::System::Object*>* Instructions; // 0x18
		::Il2CppArray<::System::Object*>* Objects; // 0x20
		::Il2CppArray<::System::Object*>* Labels; // 0x28
		Il2CppObject* DebugCookies; // 0x30

		::System::Void .ctor(::System::Int32 arg, ::System::Int32 arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, ::Il2CppArray<::System::Object*>* arg, Il2CppObject* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::Int32, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, ::Il2CppArray<::System::Object*>*, Il2CppObject*, ::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_INTERPRETER_INSTRUCTIONARRAY_.CTOR_OFFSET))(arg, arg, arg, arg, arg, arg, nullptr);
		}

	};
}

