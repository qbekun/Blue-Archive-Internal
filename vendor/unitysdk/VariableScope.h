#pragma once
#include "unitysdk.h"

#define VARIABLESCOPE_.CTOR_OFFSET UNITYSDK_OFFSET(0x96A0BA0)

	inline static constexpr unsigned int VariableScope_TypeDefinitionIndex = 33362;

	class VariableScope : public Il2CppObject
	{
	public:
		::System::Int32 Start; // 0x10
		::System::Int32 Stop; // 0x14
		::System::Linq::Expressions::Interpreter::LocalVariable* Variable; // 0x18
		VariableScope* Parent; // 0x20
		Il2CppObject* ChildScopes; // 0x28

		::System::Void .ctor(::System::Linq::Expressions::Interpreter::LocalVariable* arg, ::System::Int32 arg, VariableScope* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::LocalVariable*, ::System::Int32, VariableScope*, ::PVOID))((::PBYTE)hIl2Cpp + VARIABLESCOPE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

