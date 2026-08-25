#pragma once
#include "unitysdk.h"

namespace FlatData { class GrowthFactor; }

#define GROWTHFACTORCOEFFICIENT_.CTOR_OFFSET UNITYSDK_OFFSET(0x18E1C90)

	inline static constexpr unsigned int GrowthFactorCoefficient_TypeDefinitionIndex = 16144;

	class GrowthFactorCoefficient : public Il2CppObject
	{
	public:
		::FlatData::GrowthFactor* GrowthFactor; // 0x10
		::System::Int64 Coefficient; // 0x18

		::System::Void .ctor(::FlatData::GrowthFactor* arg, ::System::Int64 arg)
		{
			((::System::Void(*)(::FlatData::GrowthFactor*, ::System::Int64, ::PVOID))((::PBYTE)hIl2Cpp + GROWTHFACTORCOEFFICIENT_.CTOR_OFFSET))(arg, arg, nullptr);
		}

	};

