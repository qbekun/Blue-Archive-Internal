#pragma once
#include "unitysdk.h"

#define CASTINSTRUCTIONNOT_.CTOR_OFFSET UNITYSDK_OFFSET(0x96B0710)
#define CASTINSTRUCTIONNOT_CREATE_OFFSET UNITYSDK_OFFSET(0x96B0630)
#define CASTINSTRUCTIONNOT_RUN_OFFSET UNITYSDK_OFFSET(0x96B07A0)
#define CASTINSTRUCTIONNOT_CONVERTNULL_OFFSET UNITYSDK_OFFSET(0x000000)

	inline static constexpr unsigned int CastInstructionNoT_TypeDefinitionIndex = 33496;

	class CastInstructionNoT : public Il2CppObject
	{
	public:
		::System::Type* _t; // 0x10

		::System::Void .ctor(::System::Type* arg)
		{
			((::System::Void(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONNOT_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Linq::Expressions::Interpreter::CastInstruction* Create(::System::Type* arg)
		{
			return (return (::System::Linq::Expressions::Interpreter::CastInstruction*(*)(::System::Type*, ::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONNOT_CREATE_OFFSET))(arg, nullptr);
		}

		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONNOT_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void ConvertNull(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			((::System::Void(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + CASTINSTRUCTIONNOT_CONVERTNULL_OFFSET))(arg, nullptr);
		}

	};

