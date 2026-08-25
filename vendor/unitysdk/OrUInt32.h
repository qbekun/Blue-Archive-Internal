#pragma once
#include "unitysdk.h"

#define ORUINT32_RUN_OFFSET UNITYSDK_OFFSET(0x96AB610)
#define ORUINT32_.CTOR_OFFSET UNITYSDK_OFFSET(0x96AB090)

	inline static constexpr unsigned int OrUInt32_TypeDefinitionIndex = 33447;

	class OrUInt32 : public Il2CppObject
	{
	public:
		::System::Int32 Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* arg)
		{
			return (return (::System::Int32(*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*, ::PVOID))((::PBYTE)hIl2Cpp + ORUINT32_RUN_OFFSET))(arg, nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ORUINT32_.CTOR_OFFSET))(nullptr);
		}

	};

