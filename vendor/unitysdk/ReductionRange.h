#pragma once
#include "unitysdk.h"

#define REDUCTIONRANGE_.CTOR_OFFSET UNITYSDK_OFFSET(0x189AF00)

	inline static constexpr unsigned int ReductionRange_TypeDefinitionIndex = 15991;

	class ReductionRange : public Il2CppObject
	{
	public:
		::System::Single PrevDecrasedBasis; // 0x10
		::System::Int64 RangeStartBasis; // 0x18
		::System::Int64 DecreasedBasis; // 0x20

		::System::Void .ctor(::System::Single arg, ::System::Int64 arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::System::Single, ::System::Int64, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + REDUCTIONRANGE_.CTOR_OFFSET))(arg, arg, arg, nullptr);
		}

	};

