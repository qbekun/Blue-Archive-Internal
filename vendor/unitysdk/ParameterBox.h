#pragma once
#include "unitysdk.h"

#define PARAMETERBOX_.CTOR_OFFSET UNITYSDK_OFFSET(0x969FD40)
#define PARAMETERBOX_RUN_OFFSET UNITYSDK_OFFSET(0x969FD60)
#define PARAMETERBOX_GET_INSTRUCTIONNAME_OFFSET UNITYSDK_OFFSET(0x969FE30)

	inline static constexpr unsigned int ParameterBox_TypeDefinitionIndex = 33354;

	class ParameterBox : public Il2CppObject
	{
	public:
		::System::Void .ctor(::System::Int32 arg)
		{
			((::System::Void(*)(::System::Int32, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERBOX_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + PARAMETERBOX_RUN_OFFSET))(arg, nullptr);
		}

		::System::String* get_InstructionName()
		{
			return (return (::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PARAMETERBOX_GET_INSTRUCTIONNAME_OFFSET))(nullptr);
		}

	};

