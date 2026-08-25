#pragma once
#include "../../../unitysdk.h"

namespace FlatData { class StatType; }

#define MX_LOGIC_DATA_SHIELDHEALEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4440)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int ShieldHealEffectData_TypeDefinitionIndex = 13630;

	class ShieldHealEffectData : public Il2CppObject
	{
	public:
		::System::Int64 Amount; // 0x58
		::FlatData::StatType* BonusSource; // 0x60
		::System::Int64 BonusRate; // 0x68
		::System::String* ShieldId; // 0x70
		::System::Boolean ForceFloaterHide; // 0x78

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SHIELDHEALEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

