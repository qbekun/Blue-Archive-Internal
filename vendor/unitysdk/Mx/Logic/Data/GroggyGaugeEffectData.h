#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_GROGGYGAUGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4160)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int GroggyGaugeEffectData_TypeDefinitionIndex = 13597;

	class GroggyGaugeEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::System::Int64 TargetCoefficientAmount; // 0x60
		::System::Int64 CasterCoefficientAmount; // 0x68

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_GROGGYGAUGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

