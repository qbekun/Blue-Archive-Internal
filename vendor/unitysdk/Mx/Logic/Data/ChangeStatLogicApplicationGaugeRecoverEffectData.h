#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }
namespace MX::Logic::Skills { class ExtraStatType; }

#define MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F3ED0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ChangeStatLogicApplicationGaugeRecoverEffectData_TypeDefinitionIndex = 13566;

	class ChangeStatLogicApplicationGaugeRecoverEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::MX::Logic::Skills::ExtraStatType* ExtraStatSource; // 0x70
		::System::Int64 ExtraStatRate; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_CHANGESTATLOGICAPPLICATIONGAUGERECOVEREFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

