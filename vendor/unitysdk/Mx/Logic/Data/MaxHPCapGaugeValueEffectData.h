#pragma once
#include "../../../unitysdk.h"

#define MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4360)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHPCapGaugeValueEffectData_TypeDefinitionIndex = 13616;

	class MaxHPCapGaugeValueEffectData : public Il2CppObject
	{
	public:
		::System::Int32 MaxHPCapGaugeValue; // 0x58

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

