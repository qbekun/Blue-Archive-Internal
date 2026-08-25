#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class DamageRatioApplyType; }

#define MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4180)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int HealConvertDamageEffectData_TypeDefinitionIndex = 13599;

	class HealConvertDamageEffectData : public Il2CppObject
	{
	public:
		::System::Int64 TransferRatio; // 0x58
		::System::Int64 Duration; // 0x60
		::System::Boolean Dispellable; // 0x68
		::System::String* DamageCheckGroupID; // 0x70
		::System::String* TransferredHealDamageGroupID; // 0x78
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio; // 0x80
		::MX::Logic::Skills::DamageRatioApplyType* ApplyDamageRatio2; // 0x84

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_HEALCONVERTDAMAGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

