#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_ACCUMULATEHEALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3D60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int AccumulateHealEffectData_TypeDefinitionIndex = 13543;

	class AccumulateHealEffectData : public Il2CppObject
	{
	public:
		::System::Boolean ForceFloaterHide; // 0x58
		::System::Boolean ApplyHealRate; // 0x59
		::System::Boolean ApplyHealRateByArmorType; // 0x5A
		::System::Boolean ApplyHealRateByBulletType; // 0x5B

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_ACCUMULATEHEALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

