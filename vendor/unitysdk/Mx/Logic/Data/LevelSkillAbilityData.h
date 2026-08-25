#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }

#define MX_LOGIC_DATA_LEVELSKILLABILITYDATA_SHOULDSERIALIZEMODIFIERS_OFFSET UNITYSDK_OFFSET(0x11DA3B0)
#define MX_LOGIC_DATA_LEVELSKILLABILITYDATA_.CTOR_OFFSET UNITYSDK_OFFSET(0x11DA350)
#define MX_LOGIC_DATA_LEVELSKILLABILITYDATA_SHOULDSERIALIZLOGICEFFECTGROUPIDS_OFFSET UNITYSDK_OFFSET(0x11DA3F0)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int LevelSkillAbilityData_TypeDefinitionIndex = 13381;

	class LevelSkillAbilityData : public Il2CppObject
	{
	public:
		::System::Int32 StartDelay; // 0x10
		Il2CppObject* LogicEffectGroupIds; // 0x18
		Il2CppObject* Modifiers; // 0x20
		::System::Boolean IsReferenceSkillSlot; // 0x28
		::MX::Logic::BattleEntities::SkillSlot* ReferenceSkillSlot; // 0x2C

		::System::Boolean ShouldSerializeModifiers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLABILITYDATA_SHOULDSERIALIZEMODIFIERS_OFFSET))(nullptr);
		}

		::System::Void .ctor()
		{
			((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLABILITYDATA_.CTOR_OFFSET))(nullptr);
		}

		::System::Boolean ShouldSerializLogicEffectGroupIds()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_LEVELSKILLABILITYDATA_SHOULDSERIALIZLOGICEFFECTGROUPIDS_OFFSET))(nullptr);
		}

	};
}

