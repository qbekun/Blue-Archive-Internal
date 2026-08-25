#pragma once
#include "unitysdk.h"

#define INSTRUCTIONVIEW_GETVALUE_OFFSET UNITYSDK_OFFSET(0x9682C00)
#define INSTRUCTIONVIEW_.CTOR_OFFSET UNITYSDK_OFFSET(0x9682BB0)

	inline static constexpr unsigned int InstructionView_TypeDefinitionIndex = 33274;

	class InstructionView : public Il2CppObject
	{
	public:
		::System::Int32 _index; // 0x10
		::System::Int32 _stackDepth; // 0x14
		::System::Int32 _continuationsDepth; // 0x18
		::System::String* _name; // 0x20
		::System::Linq::Expressions::Interpreter::Instruction* _instruction; // 0x28

		::System::String* GetValue()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONVIEW_GETVALUE_OFFSET))(nullptr);
		}

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::Instruction* arg, ::System::String* str, ::System::Int32 arg, ::System::Int32 arg, ::System::Int32 arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::Instruction*, ::System::String*, ::System::Int32, ::System::Int32, ::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + INSTRUCTIONVIEW_.CTOR_OFFSET))(arg, str, arg, arg, arg, nullptr);
		}

	};

