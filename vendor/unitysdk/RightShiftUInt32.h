#pragma once
#include "unitysdk.h"

#define RIGHTSHIFTUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AC450)
#define RIGHTSHIFTUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96ABE90)

	inline static constexpr unsigned int RightShiftUInt32_TypeDefinitionIndex = 33457;

	class RightShiftUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RIGHTSHIFTUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

