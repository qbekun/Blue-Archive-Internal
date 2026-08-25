#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_SHIELDEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4420)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldEffectData_TypeDefinitionIndex = 13628;

	class ShieldEffectData : public Il2CppObject
	{
	public:
		::System::Int64 BaseAmount; // 0x58
		::FlatData::StatType* TargetStatType; // 0x60
		::System::Int64 TargetCoefficientAmount; // 0x68
		::FlatData::StatType* CasterStatType; // 0x70
		::System::Int64 CasterCoefficientAmount; // 0x78
		::System::Int64 Duration; // 0x80
		::System::Boolean IsDispellable; // 0x88
		::System::String* ChangeRateByCost; // 0x90
		::System::Int32 ShieldPriority; // 0x98
		::System::String* ShieldId; // 0xA0
		::System::String* ShieldLeftoverConversionCondition; // 0xA8
		::System::Int64 LeftoverConvertRate; // 0xB0
		::System::Boolean ApplyHealRate; // 0xB8
		::System::Boolean ApplyHealRateByArmorType; // 0xB9
		::System::Boolean ApplyHealRateByBulletType; // 0xBA
		::System::String* LogicEffectGroupIdInsteadShield; // 0xC0

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

