#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTINT16_RUN_OFFSET UNITYSDK_OFFSET(0x96ABFA0)
#define RIGHTSHIFTINT16_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE40)

	inline static constexpr unsigned int RightShiftInt16_TypeDefinitionIndex = 33452;

	class RightShiftInt16 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT16_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTINT16_.CTOR_OFFSET))(nullptr);
		}

	};

