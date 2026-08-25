#pragma once
#include "../../../unitysdk.h"

namespace MX::GameData::DAO::Battle { class MaxHPCapGaugeValueEffectDAO; }

#define MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x123D200)
#define MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTVALUE_GET_MAXHPCAPGAUGEVALUE_OFFSET UNITYSDK_OFFSET(0x123D280)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int MaxHPCapGaugeValueEffectValue_TypeDefinitionIndex = 13908;

	class MaxHPCapGaugeValueEffectValue : public Il2CppObject
	{
	public:
		::System::Int32 _MaxHPCapGaugeValue_k__BackingField; // 0x48

		::System::Void .ctor(::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO* arg)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::MaxHPCapGaugeValueEffectDAO*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTVALUE_.CTOR_OFFSET))(arg, nullptr);
		}

		::System::Int32 get_MaxHPCapGaugeValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_MAXHPCAPGAUGEVALUEEFFECTVALUE_GET_MAXHPCAPGAUGEVALUE_OFFSET))(nullptr);
		}

	};
}

