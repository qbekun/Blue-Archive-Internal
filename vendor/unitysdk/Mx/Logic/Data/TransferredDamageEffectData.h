#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::Skills { class SkillType; }

#define MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11F4540)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int TransferredDamageEffectData_TypeDefinitionIndex = 13646;

	class TransferredDamageEffectData : public Il2CppObject
	{
	public:
		::System::Boolean IgnoreShield; // 0x58
		::System::Boolean DoNotKillTarget; // 0x59
		::System::Boolean TransferHitResultType; // 0x5A
		::System::Boolean ForceFloaterHide; // 0x5B
		::MX::Logic::Skills::SkillType* OverrideSkillType; // 0x5C
		::MX::Logic::Skills::SkillType* OverrideSkillDamageType; // 0x60

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_TRANSFERREDDAMAGEEFFECTDATA_.CTOR_OFFSET))(nullptr);
		}

	};
}

