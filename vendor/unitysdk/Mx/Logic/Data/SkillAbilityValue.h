#pragma once
#include "../../../unitysdk.h"

namespace MX::Logic::BattleEntities { class SkillSlot; }
namespace MX::GameData::DAO::Battle { class SkillAbilityDAO; }
namespace MX::Logic::Skills { class SkillSpecification; }

#define MX_LOGIC_DATA_SKILLABILITYVALUE_GET_LOGICEFFECTVALUES_OFFSET UNITYSDK_OFFSET(0x1232A20)
#define MX_LOGIC_DATA_SKILLABILITYVALUE_.CTOR_OFFSET UNITYSDK_OFFSET(0x1232410)
#define MX_LOGIC_DATA_SKILLABILITYVALUE_GET_ISREFERENCESKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1232A30)
#define MX_LOGIC_DATA_SKILLABILITYVALUE_GET_MODIFIERS_OFFSET UNITYSDK_OFFSET(0x1232A40)
#define MX_LOGIC_DATA_SKILLABILITYVALUE_GET_REFERENCESKILLSLOT_OFFSET UNITYSDK_OFFSET(0x1232A50)
#define MX_LOGIC_DATA_SKILLABILITYVALUE_GET_STARTDELAY_OFFSET UNITYSDK_OFFSET(0x1232A60)

namespace MX::Logic::Data
{
	inline static constexpr unsigned int SkillAbilityValue_TypeDefinitionIndex = 13838;

	class SkillAbilityValue : public Il2CppObject
	{
	public:
		::System::Int32 _StartDelay_k__BackingField; // 0x10
		Il2CppObject* _LogicEffectValues_k__BackingField; // 0x18
		Il2CppObject* _Modifiers_k__BackingField; // 0x20
		::System::Boolean _IsReferenceSkillSlot_k__BackingField; // 0x28
		::MX::Logic::BattleEntities::SkillSlot* _ReferenceSkillSlot_k__BackingField; // 0x2C

		Il2CppObject* get_LogicEffectValues()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_GET_LOGICEFFECTVALUES_OFFSET))(nullptr);
		}

		::System::Void .ctor(::MX::GameData::DAO::Battle::SkillAbilityDAO* arg, ::MX::Logic::Skills::SkillSpecification* arg2)
		{
			((::System::Void(*)(::MX::GameData::DAO::Battle::SkillAbilityDAO*, ::MX::Logic::Skills::SkillSpecification*, ::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_.CTOR_OFFSET))(arg, arg2, nullptr);
		}

		::System::Boolean get_IsReferenceSkillSlot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_GET_ISREFERENCESKILLSLOT_OFFSET))(nullptr);
		}

		Il2CppObject* get_Modifiers()
		{
			return ((Il2CppObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_GET_MODIFIERS_OFFSET))(nullptr);
		}

		::MX::Logic::BattleEntities::SkillSlot* get_ReferenceSkillSlot()
		{
			return ((::MX::Logic::BattleEntities::SkillSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_GET_REFERENCESKILLSLOT_OFFSET))(nullptr);
		}

		::System::Int32 get_StartDelay()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MX_LOGIC_DATA_SKILLABILITYVALUE_GET_STARTDELAY_OFFSET))(nullptr);
		}

	};
}

