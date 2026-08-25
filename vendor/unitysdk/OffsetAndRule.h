#pragma once
#include "unitysdk.h"

#define OFFSETANDRULE_.CTOR_OFFSET UNITYSDK_OFFSET(0x9272E40)

	inline static constexpr unsigned int OffsetAndRule_TypeDefinitionIndex = 23668;

	class OffsetAndRule : public Il2CppObject
	{
	public:
		::System::Int32 Year; // 0x10
		::System::TimeSpan* Offset; // 0x18
		AdjustmentRule* Rule; // 0x20

		::System::Void .ctor(::System::Int32 arg, ::System::TimeSpan* arg, AdjustmentRule* arg)
		{
			((::System::Void(*)(::System::Int32, ::System::TimeSpan*, AdjustmentRule*, ::PVOID))((::PBYTE)hIl2Cpp + OFFSETANDRULE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

